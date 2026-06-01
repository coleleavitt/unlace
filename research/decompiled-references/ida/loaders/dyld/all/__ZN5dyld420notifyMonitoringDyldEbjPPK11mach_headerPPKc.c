__int64 __fastcall dyld4::notifyMonitoringDyld(
        dyld4 *this,
        bool a2,
        unsigned int a3,
        const mach_header **a4,
        const char **a5)
{
  const char **v9; // x5
  _BYTE v11[56]; // [xsp+8h] [xbp-C8h] BYREF
  int v12; // [xsp+40h] [xbp-90h] BYREF
  __int128 v13; // [xsp+48h] [xbp-88h]
  __int128 v14; // [xsp+58h] [xbp-78h]
  __int128 v15; // [xsp+68h] [xbp-68h]
  __int128 v16; // [xsp+78h] [xbp-58h]
  __int128 v17; // [xsp+88h] [xbp-48h]
  __int128 v18; // [xsp+98h] [xbp-38h]
  __int64 v19; // [xsp+A8h] [xbp-28h]

  v12 = 520552496;
  v13 = 0u;
  v14 = 0u;
  v15 = 0u;
  v16 = 0u;
  v17 = 0u;
  v18 = 0u;
  v19 = 0;
  dyld3::ScopedTimer::startTimer((dyld3::ScopedTimer *)&v12);
  dyld4::RemoteNotificationResponder::RemoteNotificationResponder((dyld4::RemoteNotificationResponder *)v11);
  if ( (unsigned int)dyld4::RemoteNotificationResponder::active((dyld4::RemoteNotificationResponder *)v11) )
    dyld4::notifyMonitoringDyld((dyld4 *)v11, this, a2, a3, a4, v9);
  dyld4::RemoteNotificationResponder::~RemoteNotificationResponder((dyld4::RemoteNotificationResponder *)v11);
  return dyld3::ScopedTimer::endTimer((dyld3::ScopedTimer *)&v12);
}
