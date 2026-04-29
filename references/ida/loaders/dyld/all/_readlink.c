ssize_t __cdecl readlink(const char *a1, char *a2, size_t a3)
{
  char v3; // cf
  ssize_t result; // x0

  result = mac_syscall(SYS_readlink, a1, a2, a3);
  if ( v3 )
    return cerror_nocancel(result);
  return result;
}
