int __cdecl __connect(int a1, const sockaddr *a2, socklen_t a3)
{
  char v3; // cf
  __int64 v4; // x0

  LODWORD(v4) = mac_syscall(SYS_connect, a1, a2, a3);
  if ( v3 )
    LODWORD(v4) = cerror(v4);
  return v4;
}
