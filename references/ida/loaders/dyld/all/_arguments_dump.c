__int64 __fastcall arguments_dump(_QWORD *a1)
{
  __int64 result; // x0
  pid_t v3; // w0
  pid_t v4; // w0
  pid_t v5; // w0
  pid_t v6; // w0
  const char *v7; // x10

  result = __getpid();
  if ( (int)result <= 1 )
  {
    v3 = __getpid();
    dlog(0xFFFFFFFFLL, "libignition: %d: %s   :\n", v3, "arguments        ");
    v4 = __getpid();
    dlog(0xFFFFFFFFLL, "libignition: %d:   %s : 0x%llx\n", v4, "ignition level   ", *a1);
    v5 = __getpid();
    dlog(0xFFFFFFFFLL, "libignition: %d:   %s : 0x%llx\n", v5, "force dylib root ", a1[1]);
    v6 = __getpid();
    if ( a1[3] )
      v7 = (const char *)a1[3];
    else
      v7 = "n/a";
    return dlog(0xFFFFFFFFLL, "libignition: %d:   %s : %s\n", v6, "halt after stage ", v7);
  }
  return result;
}
