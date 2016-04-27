//
//  ViewController.h
//  TIJKPlayer
//
//  Created by xy on 16/4/27.
//  Copyright © 2016年 yuenvshen. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <IJKMediaFramework/IJKMediaFramework.h>


@interface ViewController : UIViewController
@property (atomic, strong) NSURL *url;

@property (atomic, retain) id <IJKMediaPlayback> player;

@end

