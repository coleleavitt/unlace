int __cdecl __mprotect(void *a1, size_t a2, int a3)
{
  char v3; // cf
  __int64 v4; // x0

  LODWORD(v4) = mac_syscall(SYS_mprotect, a1, a2, a3);
  if ( v3 )
    LODWORD(v4) = cerror_nocancel(v4);
  return v4;
}
