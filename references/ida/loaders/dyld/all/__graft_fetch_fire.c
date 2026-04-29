__int64 __fastcall _graft_fetch_fire(const char **a1, __int64 a2, __int64 a3)
{
  int v5; // w21
  int *v6; // x0
  int v7; // w8
  pid_t v8; // w0
  __int64 v9; // x19
  pid_t v10; // w0
  int v12; // [xsp+18h] [xbp-28h] BYREF
  unsigned int v13; // [xsp+1Ch] [xbp-24h] BYREF

  v12 = -1;
  v5 = openat(*(_DWORD *)(a3 + 16), "System/Cryptexes/OS", 0x100000);
  v13 = v5;
  v6 = __error();
  if ( v5 < 0 )
  {
    if ( !*v6 )
      dyld_halt("errno unset, wrong return value being checked?: %s = %lld", "cnl", v5);
  }
  else
  {
    *v6 = 0;
  }
  v7 = *__error();
  if ( v7 == 2 )
  {
    v8 = __getpid();
    dlog(0xFFFFFFFFLL, "libignition: %d: %12s: no os cryptex available; continuing\n", v8, *a1);
    goto LABEL_8;
  }
  if ( !v7 )
  {
    v12 = dupfd(v13, "os cryptex canonical directory");
LABEL_8:
    boot_set_root(a3, &_boot_root_canonical_os, &v13);
    boot_set_root(a3, &_boot_root_cryptex_os, &v12);
    v9 = 0;
    goto LABEL_10;
  }
  v9 = (unsigned int)*__error();
  v10 = __getpid();
  dlog(0xFFFFFFFFLL, "libignition: %d: %12s: failed to open os cryptex canonical directory: %d\n", v10, *a1, v9);
LABEL_10:
  closefd_optional(&v13, "os cryptex canonical directory");
  closefd_optional(&v12, "os cryptex canonical directory [dup]");
  if ( (unsigned int)v9 >= 0x6A )
    dyld_halt("error not set to valid posix code: %d", v9);
  return v9;
}
