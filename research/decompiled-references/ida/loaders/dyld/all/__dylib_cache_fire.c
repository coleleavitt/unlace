__int64 __fastcall _dylib_cache_fire(const char **a1, _QWORD *a2, __int64 a3)
{
  int dylib_root; // w23
  __int64 v7; // x19
  const char *v8; // x25
  pid_t v9; // w0
  int v10; // w23
  int *v11; // x0
  int v12; // w8
  pid_t v13; // w0
  pid_t v14; // w0
  pid_t v15; // w0
  int v17; // [xsp+3Ch] [xbp-444h] BYREF
  char v18; // [xsp+40h] [xbp-440h] BYREF
  char v19[1023]; // [xsp+41h] [xbp-43Fh] BYREF

  dylib_root = boot_get_dylib_root(a3);
  __bzero(&v18, 0x400u);
  if ( *a2 < 3u || dylib_root < 0 )
  {
    dylib_root = *(_DWORD *)(a3 + 16);
    v7 = 19;
    v8 = "system volume";
  }
  else
  {
    v7 = 85;
    v8 = "cryptex";
  }
  ignition_get_shared_cache_directory(&v18);
  if ( v19[0] == 47 )
    dyld_halt("bogus shared cache path: %s", &v18);
  v9 = __getpid();
  dlog(
    0xFFFFFFFFLL,
    "libignition: %d: %12s: finding shared cache on %s: ignition level = %llu, search root fd = %d, subpath = %s\n",
    v9,
    *a1,
    v8,
    *a2,
    dylib_root,
    v19);
  v10 = openat(dylib_root, v19, 0x100000);
  v17 = v10;
  v11 = __error();
  if ( v10 < 0 )
  {
    if ( !*v11 )
      dyld_halt("errno unset, wrong return value being checked?: %s = %lld", "dycash", v10);
  }
  else
  {
    *v11 = 0;
  }
  v12 = *__error();
  if ( v12 == 2 )
  {
    v14 = __getpid();
    dlog(0xFFFFFFFFLL, "libignition: %d: %12s: shared cache not found: root = %s, path = %s\n", v14, *a1, v8, v19);
    goto LABEL_13;
  }
  if ( !v12 )
  {
    realpathfd(v17, (__int64)&v18, "dylib cache path");
    v13 = __getpid();
    dlog(0xFFFFFFFFLL, "libignition: %d: %12s: opened shared cache directory: %s\n", v13, *a1, &v18);
    boot_set_root(a3, (__int64)&_boot_root_dylib_cache, &v17);
    v7 = 0;
LABEL_13:
    closefd_optional(&v17, "shared cache directory");
    return v7;
  }
  v7 = (unsigned int)*__error();
  v15 = __getpid();
  dlog(0xFFFFFFFFLL, "libignition: %d: %12s: failed to open shared cache: %s: %d\n", v15, *a1, v19, v7);
  closefd_optional(&v17, "shared cache directory");
  if ( (unsigned int)v7 >= 0x6A )
    dyld_halt("error not set to valid posix code: %d", v7);
  return v7;
}
