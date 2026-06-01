__int64 __fastcall _graft_select_fire(const char **a1, __int64 a2, unsigned int *a3)
{
  __int64 v6; // x21
  int dylib_root; // w23
  int v8; // w23
  int *v9; // x0
  pid_t v10; // w0
  int v11; // w8
  const char *v12; // x1
  const char *v13; // x23
  __int64 v14; // x21
  unsigned __int64 v15; // x16
  pid_t v16; // w0
  pid_t v17; // w0
  __int64 v19; // [xsp+0h] [xbp-4F0h]
  const char *v20; // [xsp+8h] [xbp-4E8h]
  __int64 v21; // [xsp+10h] [xbp-4E0h]
  int v22; // [xsp+1Ch] [xbp-4D4h] BYREF
  stat v23; // [xsp+20h] [xbp-4D0h] BYREF
  char v24; // [xsp+B0h] [xbp-440h] BYREF
  char v25[1023]; // [xsp+B1h] [xbp-43Fh] BYREF

  v6 = a3[4];
  dylib_root = boot_get_dylib_root(a3);
  __bzero(&v24, 0x400u);
  memset(&v23, 0, sizeof(v23));
  if ( dylib_root < 0 )
  {
    v10 = __getpid();
    dlog(0xFFFFFFFFLL, "libignition: %d: %12s: cryptex graft point not present; not using fallback\n", v10, *a1);
    return 0;
  }
  ignition_get_shared_cache_directory(&v24);
  if ( v25[0] == 47 )
    dyld_halt("bogus shared cache path: %s", &v24);
  v8 = fstatat(dylib_root, v25, &v23, 0);
  v9 = __error();
  if ( v8 < 0 )
  {
    if ( !*v9 )
      dyld_halt("errno unset, wrong return value being checked?: %s = %lld", "ret", v8);
  }
  else
  {
    *v9 = 0;
  }
  v11 = *__error();
  if ( v11 == 2 )
  {
    v13 = "no dylib cache directory";
    goto LABEL_15;
  }
  if ( v11 )
  {
    v14 = __getpid();
    v20 = *a1;
    v21 = (unsigned int)*__error();
    v19 = v14;
    v12 = "libignition: %d: %12s: failed to stat dylib cache directory: %d\n";
    goto LABEL_13;
  }
  if ( (v23.st_mode & 0xF000) == 0x4000 )
  {
    v19 = __getpid();
    v20 = *a1;
    v12 = "libignition: %d: %12s: dylib cache directory present; not overriding\n";
LABEL_13:
    v6 = 0xFFFFFFFFLL;
    dlog(0xFFFFFFFFLL, v12, v19, v20, v21);
    v13 = (const char *)&unk_7E832;
    goto LABEL_15;
  }
  v13 = "dylib cache path not a directory";
LABEL_15:
  v15 = *(_QWORD *)(a2 + 8);
  if ( v15 > 3 )
  {
LABEL_22:
    if ( (v6 & 0x80000000) == 0 )
    {
LABEL_23:
      v17 = __getpid();
      dlog(0xFFFFFFFFLL, "libignition: %d: %12s: overriding os cryptex root: %s\n", v17, *a1, v13);
      v22 = dupfd(v6, "fallback root");
      boot_set_dylib_root(a3, &v22);
    }
  }
  else
  {
    switch ( v15 )
    {
      case 0uLL:
        v16 = __getpid();
        dlog(0xFFFFFFFFLL, "libignition: %d: %12s: not forcing root fallback\n", v16, *a1);
        if ( (v6 & 0x80000000) == 0 )
          goto LABEL_23;
        break;
      case 1uLL:
        v6 = a3[8];
        v13 = "boot-arg forced cryptex fallback";
        if ( (v6 & 0x80000000) == 0 )
          goto LABEL_23;
        break;
      case 2uLL:
        v6 = a3[11];
        v13 = "boot-arg forced livefs fallback";
        goto LABEL_22;
      case 3uLL:
        v6 = a3[4];
        v13 = "boot-arg forced rootfs fallback";
        if ( (v6 & 0x80000000) == 0 )
          goto LABEL_23;
        break;
    }
  }
  return 0;
}
