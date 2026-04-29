int __cdecl fsetxattr(int fd, const char *name, const void *value, size_t size, u_int32_t position, int options)
{
  char v6; // cf
  int result; // w0

  result = mac_syscall(SYS_fsetxattr, fd, name, value, size, position, options);
  if ( v6 )
    return cerror_nocancel(result);
  return result;
}
