char **__fastcall _cryptex_spec_iterate_select_app(__int64 a1)
{
  __int64 v2; // x21
  __int64 v3; // x20
  pid_t v4; // w0
  __int64 v5; // x8

  v2 = configuration();
  v3 = arguments();
  boot_get();
  if ( (*(_BYTE *)(*(_QWORD *)(v2 + 6792) + 67LL) & 0x40) == 0 )
  {
    v4 = __getpid();
    dlog(0xFFFFFFFFLL, "libignition: %d: livefs boot; skipping app cryptex\n", v4);
    v5 = *(_QWORD *)(v3 + 16);
    if ( (unsigned __int64)(v5 - 1) >= 2 )
    {
      if ( v5 )
        dyld_halt("unreachable");
      return &_cryptex_spec_app_livefs;
    }
  }
  return (char **)a1;
}
