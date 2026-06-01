__int64 __fastcall stage_fire(const char **a1, __int64 a2)
{
  _QWORD *v4; // x20
  __int64 v5; // x21
  pid_t v6; // w0
  __int64 v7; // x0
  const char *v8; // x0

  v4 = (_QWORD *)arguments();
  if ( *v4 >= (unsigned __int64)a1[5] )
  {
    v6 = __getpid();
    dlog(0xFFFFFFFFLL, "libignition: %d: %12s: %s\n", v6, *a1, a1[1]);
    v7 = ((__int64 (__fastcall *)(const char **, _QWORD *, __int64))a1[6])(a1, v4, a2);
    if ( (_DWORD)v7 )
    {
      v5 = v7;
      __getpid();
      dlog(0xFFFFFFFFLL, "libignition: %d: %12s: ignition failed: %d\n");
    }
    else
    {
      if ( ((unsigned __int64)a1[4] & 0x8000000000000000LL) == 0
        && !((__int64 (__fastcall *)(const char **, __int64))a1[7])(a1, a2) )
      {
        dyld_halt("stage did not set payload: %s", *a1);
      }
      v5 = 0;
    }
  }
  else
  {
    v5 = ~(unsigned int)((__int64)a1[4] >> 63) & 0x59;
    __getpid();
    dlog(0xFFFFFFFFLL, "libignition: %d: %12s: ignition level insufficient: actual = %llu, required >= %llu\n");
  }
  v8 = (const char *)v4[3];
  if ( v8 && !_platform_strcmp(v8, *a1) )
    dyld_halt(
      "halting after %s ignition stage; if you did not intend to do this, clear the ignition_halt_after boot-arg",
      *a1);
  return v5;
}
