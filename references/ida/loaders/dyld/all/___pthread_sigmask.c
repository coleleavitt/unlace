int __fastcall __pthread_sigmask(int a1, const sigset_t *a2, sigset_t *a3)
{
  char v3; // cf
  int result; // w0

  result = mac_syscall(SYS___pthread_sigmask, a1, a2, a3);
  if ( v3 )
    return cerror_nocancel(result);
  return result;
}
