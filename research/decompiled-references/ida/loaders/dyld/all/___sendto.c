ssize_t __cdecl __sendto(int a1, const void *a2, size_t a3, int a4, const sockaddr *a5, socklen_t a6)
{
  char v6; // cf
  ssize_t result; // x0

  result = mac_syscall(SYS_sendto, a1, a2, a3, a4, a5, a6);
  if ( v6 )
    return cerror(result);
  return result;
}
