int __cdecl close(int a1)
{
  char v1; // cf
  __int64 v2; // x0

  LODWORD(v2) = mac_syscall(SYS_close, a1);
  if ( v1 )
    LODWORD(v2) = cerror(v2);
  return v2;
}
