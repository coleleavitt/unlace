__int64 __fastcall __os_log_simple_offset(
        __int64 a1,
        char *a2,
        const void *a3,
        __int64 a4,
        __int64 a5,
        unsigned __int8 a6,
        __int64 a7,
        __int64 a8)
{
  pid_t v13; // w0
  __int64 v14; // x8
  char *v15; // x1
  _QWORD v17[4]; // [xsp+0h] [xbp-E0h] BYREF
  __int128 v18; // [xsp+20h] [xbp-C0h]
  __int128 v19; // [xsp+30h] [xbp-B0h]
  __int128 v20; // [xsp+40h] [xbp-A0h] BYREF
  __int128 v21; // [xsp+50h] [xbp-90h] BYREF
  __int128 v22; // [xsp+60h] [xbp-80h] BYREF
  __int64 v23; // [xsp+70h] [xbp-70h]
  _BYTE buffer[16]; // [xsp+78h] [xbp-68h] BYREF
  __int64 v25; // [xsp+88h] [xbp-58h]
  int v26; // [xsp+98h] [xbp-48h]

  v23 = 0;
  v21 = 0u;
  v22 = 0u;
  v19 = 0u;
  v20 = 0u;
  v18 = 0u;
  v17[0] = a6;
  v17[1] = a7;
  v17[2] = a8;
  v17[3] = mach_continuous_time();
  v13 = __getpid();
  *(_QWORD *)&v18 = v13;
  if ( proc_pidinfo(v13, 17, 0, buffer, 56) == 56 )
  {
    *((_QWORD *)&v18 + 1) = v25;
    *(_QWORD *)&v19 = v26;
    _platform_memmove((char *)&v21 + 8, buffer, 0x10u);
  }
  if ( a1 )
  {
    if ( *(int *)(a1 + 24) >= 0 )
      v14 = a1;
    else
      v14 = a4;
    *(_QWORD *)&v20 = a5 - v14;
    v15 = a2;
  }
  else
  {
    v15 = (char *)&v21 + 8;
  }
  _platform_memmove((char *)&v20 + 8, v15, 0x10u);
  _platform_memmove((char *)&v22 + 8, a3, 0x10u);
  return _os_log_simple_send(v17);
}
