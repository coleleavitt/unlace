int __fastcall __gettimeofday_with_mach(timeval *a1, void *a2)
{
  char v2; // cf
  int result; // w0

  result = mac_syscall(SYS_gettimeofday, a1, a2);
  if ( v2 )
    return cerror_nocancel(result);
  return result;
}
