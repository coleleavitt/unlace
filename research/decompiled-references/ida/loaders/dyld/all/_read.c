ssize_t __cdecl read(int a1, void *a2, size_t a3)
{
  char v3; // cf
  ssize_t result; // x0

  result = mac_syscall(SYS_read, a1, a2, a3);
  if ( v3 )
    return cerror(result);
  return result;
}
