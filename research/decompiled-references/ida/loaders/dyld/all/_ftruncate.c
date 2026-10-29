int __cdecl ftruncate(int a1, off_t a2)
{
  char v2; // cf
  int result; // w0

  result = mac_syscall(SYS_ftruncate, a1, a2);
  if ( v2 )
    return cerror_nocancel(result);
  return result;
}
