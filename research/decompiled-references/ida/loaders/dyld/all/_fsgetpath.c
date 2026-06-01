ssize_t __cdecl fsgetpath(char *a1, size_t a2, fsid_t *a3, uint64_t a4)
{
  char v4; // cf
  ssize_t result; // x0

  result = mac_syscall(SYS_fsgetpath, a1, a2, a3, a4);
  if ( v4 )
    return cerror_nocancel(result);
  return result;
}
