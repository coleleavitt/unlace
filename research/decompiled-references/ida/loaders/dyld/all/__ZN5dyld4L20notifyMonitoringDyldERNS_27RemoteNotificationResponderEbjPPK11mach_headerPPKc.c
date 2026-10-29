__int64 __fastcall dyld4::notifyMonitoringDyld(
        dyld4 *this,
        dyld4::RemoteNotificationResponder *a2,
        mach_msg_size_t a3,
        dyld3::MachOFile **a4,
        const mach_header **a5,
        const char **a6)
{
  const mach_header **v6; // x21
  dyld3::MachOFile **v7; // x22
  mach_msg_size_t v8; // w24
  dyld4::RemoteNotificationResponder *v9; // x20
  dyld4 *v10; // x27
  int v11; // w19
  int v12; // w23
  __int64 v13; // x25
  const char **v14; // x26
  const char *v15; // t1
  mach_msg_size_t v16; // w23
  __int64 v17; // x8
  mach_msg_header_t *v18; // x25
  mach_port_t v19; // w12
  unsigned __int64 v20; // x8
  int v21; // w28
  char *v22; // x26
  __int64 v23; // x19
  char *v24; // x24
  const mach_header *v25; // t1
  char *v26; // x0
  int v27; // w27
  dyld3::MachOFile *v28; // t1
  mach_msg_id_t v29; // w1
  _QWORD v31[2]; // [xsp+0h] [xbp-70h] BYREF
  dyld4 *v32; // [xsp+10h] [xbp-60h]
  __int64 vars8; // [xsp+78h] [xbp+8h]

  while ( 1 )
  {
    v6 = a5;
    v7 = a4;
    v8 = a3;
    v9 = a2;
    v10 = this;
    v11 = 32 * a3;
    v12 = 0;
    if ( a3 )
    {
      v13 = a3;
      v14 = (const char **)a5;
      do
      {
        v15 = *v14++;
        v12 += _platform_strlen(v15) + 1;
        --v13;
      }
      while ( v13 );
    }
    v16 = (v12 + v11 + 48 + 127) & 0xFFFFFF80;
    if ( (v16 | 0x44) <= 0x8000 )
      break;
    dyld4::notifyMonitoringDyld(v10, v9, v8 >> 1, (unsigned int)v7, v6, a6);
    a3 = v8 - (v8 >> 1);
    a4 = &v7[v8 >> 1];
    a5 = &v6[v8 >> 1];
    this = v10;
    a2 = v9;
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
  }
  v31[1] = v31;
  v32 = v10;
  __chkstk_darwin();
  v18 = (mach_msg_header_t *)((char *)v31 - ((v17 + 15) & 0x1FFFFFFF0LL));
  v18[1].msgh_bits = 1;
  v18[1].msgh_size = v8;
  v18[1].msgh_remote_port = 48;
  v18[1].msgh_local_port = v19;
  v20 = atomic_load((unsigned __int64 *)gProcessInfo + 23);
  *(_QWORD *)&v18[1].msgh_voucher_port = v20;
  if ( v8 )
  {
    v21 = (_DWORD)v18 + v18[1].msgh_local_port;
    v22 = (char *)v18 + v18[1].msgh_remote_port;
    v23 = v8;
    v24 = (char *)v18 + v18[1].msgh_local_port;
    do
    {
      v25 = *v6++;
      v26 = strcpy(v24, (const char *)v25);
      v27 = _platform_strlen(v26);
      __bzero(v22, 0x10u);
      dyld3::MachOFile::getUuid(*v7, (unsigned __int8 *)v22);
      v28 = *v7++;
      *((_QWORD *)v22 + 2) = v28;
      *((_DWORD *)v22 + 6) = (_DWORD)v24 - v21;
      *((_DWORD *)v22 + 7) = v27;
      v24 += (unsigned int)(v27 + 1);
      v22 += 32;
      --v23;
    }
    while ( v23 );
  }
  if ( (_DWORD)v9 )
    v29 = 0x2000;
  else
    v29 = 4096;
  return dyld4::RemoteNotificationResponder::sendMessage((__int64)v32, v29, v16, v18);
}
