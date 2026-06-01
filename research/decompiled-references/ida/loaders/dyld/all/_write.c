ssize_t __cdecl write(int __fd, const void *__buf, size_t __nbyte)
{
  char v3; // cf
  ssize_t result; // x0

  result = mac_syscall(SYS_write, __fd, __buf, __nbyte);
  if ( v3 )
    return cerror(result);
  return result;
}
