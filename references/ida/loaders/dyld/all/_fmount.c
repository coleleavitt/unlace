int __cdecl fmount(const char *a1, int a2, int a3, void *a4)
{
  char v4; // cf
  int result; // w0

  result = mac_syscall(SYS_fmount, a1, a2, a3, a4);
  if ( v4 )
    return cerror_nocancel(result);
  return result;
}
