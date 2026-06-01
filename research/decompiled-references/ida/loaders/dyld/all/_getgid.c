gid_t getgid(void)
{
  char v0; // cf
  gid_t result; // w0

  result = mac_syscall(SYS_getgid);
  if ( v0 )
    return cerror_nocancel(result);
  return result;
}
