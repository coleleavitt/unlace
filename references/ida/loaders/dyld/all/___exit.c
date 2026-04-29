void __cdecl __noreturn __exit(int a1)
{
  char v1; // cf
  int v2; // w0

  mac_syscall(SYS_exit, a1);
  if ( v1 )
    cerror_nocancel(v2);
}
