pid_t __getpid(void)
{
  pid_t result; // w0

  result = _current_pid;
  if ( _current_pid <= 0 )
    return cerror_nocancel(mac_syscall(SYS_getpid));
  return result;
}
