__int64 __fastcall dyld4::notifyMonitoringDyldMain(dyld4 *this)
{
  _BYTE v2[56]; // [xsp+0h] [xbp-120h] BYREF
  int v3; // [xsp+38h] [xbp-E8h] BYREF
  __int128 v4; // [xsp+40h] [xbp-E0h]
  __int128 v5; // [xsp+50h] [xbp-D0h]
  __int128 v6; // [xsp+60h] [xbp-C0h]
  __int128 v7; // [xsp+70h] [xbp-B0h]
  __int128 v8; // [xsp+80h] [xbp-A0h]
  __int128 v9; // [xsp+90h] [xbp-90h]
  __int64 v10; // [xsp+A0h] [xbp-80h]
  mach_msg_header_t v11; // [xsp+ACh] [xbp-74h] BYREF

  v3 = 520552496;
  v4 = 0u;
  v5 = 0u;
  v6 = 0u;
  v7 = 0u;
  v8 = 0u;
  v9 = 0u;
  v10 = 0;
  dyld3::ScopedTimer::startTimer((dyld3::ScopedTimer *)&v3);
  dyld4::RemoteNotificationResponder::RemoteNotificationResponder((dyld4::RemoteNotificationResponder *)v2);
  dyld4::RemoteNotificationResponder::sendMessage((dyld4::RemoteNotificationResponder *)v2, 12288, 0x18u, &v11);
  dyld4::RemoteNotificationResponder::blockOnSynchronousEvent((dyld4::RemoteNotificationResponder *)v2, 1u);
  dyld4::RemoteNotificationResponder::~RemoteNotificationResponder((dyld4::RemoteNotificationResponder *)v2);
  return dyld3::ScopedTimer::endTimer((dyld3::ScopedTimer *)&v3);
}
