__int64 __fastcall cryptex_load_trust_cache(const char ***a1)
{
  unsigned __int64 *v2; // x20
  unsigned __int64 v3; // x21
  int v4; // w20
  __int64 v5; // x0
  int v6; // w21
  __int64 v7; // x21
  pid_t v9; // w0
  __int64 v10; // x0
  pid_t v11; // w0
  __int64 v12; // x0
  int length_uint32; // w20
  void *v14; // x0
  void *v15; // x7
  _OWORD v16[2]; // [xsp+30h] [xbp-490h] BYREF
  __int64 v17; // [xsp+50h] [xbp-470h]
  void **v18; // [xsp+58h] [xbp-468h] BYREF
  _OWORD v19[2]; // [xsp+60h] [xbp-460h] BYREF
  __int64 v20; // [xsp+80h] [xbp-440h]
  __int64 *v21; // [xsp+88h] [xbp-438h] BYREF
  char v22[1024]; // [xsp+90h] [xbp-430h] BYREF

  v2 = (unsigned __int64 *)arguments();
  v3 = (unsigned __int64)(a1[2][5] + 2);
  __bzero(v22, 0x400u);
  v20 = 0;
  v21 = nullptr;
  memset(v19, 0, sizeof(v19));
  v17 = 0;
  v18 = nullptr;
  memset(v16, 0, sizeof(v16));
  if ( *v2 < v3 )
  {
    __getpid();
    dlog(
      0xFFFFFFFFLL,
      "libignition: %d: %12s: %s: ignition level insufficient: operation = load trust cache, actual = %llu, required >= %llu\n");
    return 0;
  }
  if ( !a1[15] )
  {
    __getpid();
    dlog(0xFFFFFFFFLL, "libignition: %d: %12s: %s: cryptex already available; skipping trust cache load\n");
    return 0;
  }
  v4 = object_getfd(a1[12], a1 + 4);
  v5 = object_getfd(a1[15], a1 + 4);
  v6 = v5;
  if ( a1[144] && (v5 & 0x80000000) != 0 )
  {
    __getpid();
    dlog(0xFFFFFFFFLL, "libignition: %d: %12s: %s: trust cache not present in rooted cryptex\n");
    return 0;
  }
  realpathfd(v5, v22, "trust cache");
  v9 = __getpid();
  dlog(0xFFFFFFFFLL, "libignition: %d: %12s: %s: trust cache path = %s\n", v9, *a1[2], **a1, v22);
  v10 = buff_map_fd_anon((int)v19, (int)&v21, v6);
  if ( (_DWORD)v10 )
  {
    v7 = v10;
    v11 = __getpid();
    dlog(0xFFFFFFFFLL, "libignition: %d: %12s: %s: failed to read trust cache im4p: %d\n", v11, *a1[2], **a1, v7);
  }
  else
  {
    v12 = buff_map_fd_anon((int)v16, (int)&v18, v4);
    if ( (_DWORD)v12 )
    {
      v7 = v12;
      __getpid();
      dlog(0xFFFFFFFFLL, "libignition: %d: %12s: %s: failed to read manifest: %d\n");
    }
    else
    {
      length_uint32 = buff_get_length_uint32(v21);
      v14 = (void *)buff_get_length_uint32(v18);
      if ( !amfi_load_trust_cache )
        return 78;
      if ( !(unsigned int)amfi_load_trust_cache(
                            *((_BYTE *)*a1 + 16),
                            *v21,
                            length_uint32,
                            *v18,
                            v14,
                            nullptr,
                            nullptr,
                            v15) )
      {
        __getpid();
        dlog(0xFFFFFFFFLL, "libignition: %d: %12s: %s: loaded cryptex trust cache\n");
        return 0;
      }
      v7 = (unsigned int)*__error();
      __getpid();
      dlog(0xFFFFFFFFLL, "libignition: %d: %12s: %s: failed to load trust cache: %d\n");
    }
  }
  if ( (unsigned int)v7 >= 0x6A )
    dyld_halt("error not set to valid posix code: %d", v7);
  return v7;
}
