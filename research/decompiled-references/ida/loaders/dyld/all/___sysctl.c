int __fastcall __sysctl(int *a1, u_int a2, void *a3, size_t *a4, void *a5, size_t a6)
{
  char v6; // cf
  int result; // w0

  result = mac_syscall(SYS_sysctl, a1, a2, a3, a4, a5, a6);
  if ( v6 )
    return cerror_nocancel(result);
  return result;
}
