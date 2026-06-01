__int64 __fastcall boot_dump_spec(__int64 a1)
{
  __int64 result; // x0
  pid_t v3; // w0
  pid_t v4; // w0
  const char *v5; // x10
  pid_t v6; // w0

  result = __getpid();
  if ( (_DWORD)result == 1 )
  {
    v3 = __getpid();
    dlog(0xFFFFFFFFLL, "libignition: %d: %s   :\n", v3, "boot spec        ");
    v4 = __getpid();
    if ( *(_QWORD *)a1 )
      v5 = *(const char **)a1;
    else
      v5 = "n/a";
    dlog(0xFFFFFFFFLL, "libignition: %d:   %s : %s\n", v4, "name             ", v5);
    v6 = __getpid();
    return dlog(0xFFFFFFFFLL, "libignition: %d:   %s : 0x%llx\n", v6, "stage count      ", *(_QWORD *)(a1 + 88));
  }
  return result;
}
