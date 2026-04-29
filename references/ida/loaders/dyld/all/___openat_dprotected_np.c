int __fastcall __openat_dprotected_np(int a1, const char *a2, int a3, int a4, int a5)
{
  char v5; // cf
  int result; // w0

  result = mac_syscall(SYS_openat_dprotected_np, a1, a2, a3, a4, a5);
  if ( v5 )
    return cerror_nocancel(result);
  return result;
}
