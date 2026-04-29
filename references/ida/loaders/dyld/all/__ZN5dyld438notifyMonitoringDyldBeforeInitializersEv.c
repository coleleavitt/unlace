__int64 __fastcall dyld4::notifyMonitoringDyldBeforeInitializers(dyld4 *this)
{
  mach_port_name_t v2[14]; // [xsp+8h] [xbp-A8h] BYREF
  int v3; // [xsp+40h] [xbp-70h] BYREF
  __int128 v4; // [xsp+48h] [xbp-68h]
  __int128 v5; // [xsp+58h] [xbp-58h]
  __int128 v6; // [xsp+68h] [xbp-48h]
  __int128 v7; // [xsp+78h] [xbp-38h]
  __int128 v8; // [xsp+88h] [xbp-28h]
  __int128 v9; // [xsp+98h] [xbp-18h]
  __int64 v10; // [xsp+A8h] [xbp-8h]

  v3 = 520552496;
  v4 = 0u;
  v5 = 0u;
  v6 = 0u;
  v7 = 0u;
  v8 = 0u;
  v9 = 0u;
  v10 = 0;
  dyld3::ScopedTimer::startTimer((dyld3::ScopedTimer *)&v3);
  dyld4::RemoteNotificationResponder::RemoteNotificationResponder(v2);
  dyld4::RemoteNotificationResponder::blockOnSynchronousEvent((dyld4::RemoteNotificationResponder *)v2, 2);
  dyld4::RemoteNotificationResponder::~RemoteNotificationResponder((dyld4::RemoteNotificationResponder *)v2);
  return dyld3::ScopedTimer::endTimer((dyld3::ScopedTimer *)&v3);
}
