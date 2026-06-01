int __cdecl dup2(int a1, int a2)
{
  char v2; // cf
  int result; // w0

  result = mac_syscall(SYS_dup2, a1, a2);
  if ( v2 )
    return cerror_nocancel(result);
  return result;
}
