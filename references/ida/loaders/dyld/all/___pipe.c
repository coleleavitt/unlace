int __cdecl __pipe(int a1[2])
{
  char v1; // cf
  int v2; // w1
  int v4; // w0

  v4 = mac_syscall(SYS_pipe, a1);
  if ( v1 )
    return cerror_nocancel(v4);
  *a1 = v4;
  a1[1] = v2;
  return 0;
}
