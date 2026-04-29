int __cdecl dup(int a1)
{
  char v1; // cf
  int result; // w0

  result = mac_syscall(SYS_dup, a1);
  if ( v1 )
    return cerror_nocancel(result);
  return result;
}
