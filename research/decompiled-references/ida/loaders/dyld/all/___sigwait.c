int __fastcall __sigwait(const sigset_t *a1, int *a2)
{
  char v2; // cf
  __int64 v3; // x0

  LODWORD(v3) = mac_syscall(SYS___sigwait, a1, a2);
  if ( v2 )
    LODWORD(v3) = cerror(v3);
  return v3;
}
