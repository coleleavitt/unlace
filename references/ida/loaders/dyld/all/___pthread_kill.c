int __fastcall __pthread_kill(_opaque_pthread_t *a1, int a2)
{
  char v2; // cf
  int result; // w0

  result = mac_syscall(SYS___pthread_kill, a1, a2);
  if ( v2 )
    return cerror_nocancel(result);
  return result;
}
