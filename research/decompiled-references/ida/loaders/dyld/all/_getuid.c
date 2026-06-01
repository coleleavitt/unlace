uid_t getuid(void)
{
  char v0; // cf
  uid_t result; // w0

  result = mac_syscall(SYS_getuid);
  if ( v0 )
    return cerror_nocancel(result);
  return result;
}
