__int64 __fastcall _graft_fire(const char **a1, __int64 a2, __int64 a3)
{
  __int64 v5; // x0
  __int64 v6; // x28
  __int64 v7; // x0
  __int64 trust_cache; // x21
  pid_t v9; // w0
  __int64 v10; // x0
  const char ***v11; // x22
  pid_t v12; // w0
  int v14; // [xsp+28h] [xbp-4F8h] BYREF
  int v15; // [xsp+2Ch] [xbp-4F4h] BYREF
  __int64 v16; // [xsp+30h] [xbp-4F0h] BYREF
  _BYTE v17[24]; // [xsp+38h] [xbp-4E8h] BYREF
  int v18; // [xsp+50h] [xbp-4D0h]
  int v19; // [xsp+60h] [xbp-4C0h]
  int v20; // [xsp+70h] [xbp-4B0h]
  int v21; // [xsp+80h] [xbp-4A0h]
  int v22; // [xsp+90h] [xbp-490h]
  __int64 v23[2]; // [xsp+4C0h] [xbp-60h] BYREF

  v23[0] = 0;
  v5 = cryptex_spec_next(v23);
  if ( !v5 )
  {
    LODWORD(trust_cache) = -1;
    goto LABEL_17;
  }
  v6 = v5;
  do
  {
    __bzero(v17, 0x488u);
    v18 = -1;
    v19 = -1;
    v20 = -1;
    v21 = -1;
    v22 = -1;
    v16 = 0;
    v14 = -1;
    v15 = -1;
    v16 = cryptex_init(v17, v6, a3, a1);
    v7 = cryptex_open(v16, &v14);
    if ( (_DWORD)v7 )
    {
      trust_cache = v7;
      v9 = __getpid();
      dlog(
        0xFFFFFFFFLL,
        "libignition: %d: %12s: failed to open %s cryptex: %d\n",
        v9,
        *a1,
        *(const char **)v6,
        trust_cache);
    }
    else
    {
      v10 = cryptex_graft(v16, &v15);
      if ( (_DWORD)v10 )
      {
        trust_cache = v10;
        __getpid();
        dlog(0xFFFFFFFFLL, "libignition: %d: %12s: failed to graft %s cryptex: %d\n");
      }
      else
      {
        v11 = (const char ***)v16;
        trust_cache = cryptex_load_trust_cache(v16);
        v12 = __getpid();
        if ( (_DWORD)trust_cache )
        {
          dlog(
            0xFFFFFFFFLL,
            "libignition: %d: %12s: failed to load trust cache: cryptex = %s: %d\n",
            v12,
            *a1,
            **v11,
            trust_cache);
          if ( (unsigned int)trust_cache >= 0x6A )
            goto LABEL_17;
          __getpid();
          dlog(0xFFFFFFFFLL, "libignition: %d: %12s: failed to load trust cache for %s cryptex: %d\n");
        }
        else
        {
          dlog(0xFFFFFFFFLL, "libignition: %d: %12s: loaded trust cache: cryptex = %s\n", v12, *a1, **v11);
          boot_set_root(a3, *(_QWORD *)(v6 + 80), &v15);
          boot_set_root(a3, *(_QWORD *)(v6 + 88), &v14);
        }
      }
    }
    closefd_optional(&v14, "canonical root");
    closefd_optional(&v15, "graft point");
    cryptex_destroy(&v16);
    if ( (_DWORD)trust_cache )
    {
      if ( (unsigned int)trust_cache < 0x6A )
        return trust_cache;
LABEL_17:
      dyld_halt("error not set to valid posix code: %d", trust_cache);
    }
    v6 = cryptex_spec_next(v23);
  }
  while ( v6 );
  return 0;
}
