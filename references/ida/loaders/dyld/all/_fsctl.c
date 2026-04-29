int __cdecl fsctl(const char *a1, unsigned __int64 a2, void *a3, unsigned int a4)
{
  char v4; // cf
  int result; // w0

  result = mac_syscall(SYS_fsctl, a1, a2, a3, a4);
  if ( v4 )
    return cerror_nocancel(result);
  return result;
}
