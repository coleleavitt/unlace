ssize_t __cdecl pread(int __fd, void *__buf, size_t __nbyte, off_t a4)
{
  char v4; // cf
  ssize_t result; // x0

  result = mac_syscall(SYS_pread, __fd, __buf, __nbyte, a4);
  if ( v4 )
    return cerror(result);
  return result;
}
