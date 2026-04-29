int __fastcall __execve(const char *a1, char *const *a2, char *const *a3)
{
  char v3; // cf
  int result; // w0

  result = mac_syscall(SYS_execve, a1, a2, a3);
  if ( v3 )
    return cerror_nocancel(result);
  return result;
}
