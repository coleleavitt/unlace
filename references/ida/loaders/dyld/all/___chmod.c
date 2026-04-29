int __fastcall __chmod(const char *a1, mode_t a2)
{
  char v2; // cf
  int result; // w0

  result = mac_syscall(SYS_chmod, a1, a2);
  if ( v2 )
    return cerror_nocancel(result);
  return result;
}
