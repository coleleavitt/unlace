int __cdecl socket(int a1, int a2, int a3)
{
  char v3; // cf
  int result; // w0

  mac_syscall(SYS_socket);
  if ( v3 )
    return cerror_nocancel(result);
  return result;
}
