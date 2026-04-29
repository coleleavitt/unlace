int __cdecl mount(const char *a1, const char *a2, int a3, void *a4)
{
  char v4; // cf
  int result; // w0

  result = mac_syscall(SYS_mount, a1, a2, a3, a4);
  if ( v4 )
    return cerror_nocancel(result);
  return result;
}
