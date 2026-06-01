ssize_t __cdecl getxattr(const char *path, const char *name, void *value, size_t size, u_int32_t position, int options)
{
  char v6; // cf
  ssize_t result; // x0

  result = mac_syscall(SYS_getxattr, path, name, value, size, position, options);
  if ( v6 )
    return cerror_nocancel(result);
  return result;
}
