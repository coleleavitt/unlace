int __fastcall __shared_region_check_np(uint64_t *a1)
{
  char v1; // cf
  int result; // w0

  result = mac_syscall(SYS_shared_region_check_np, a1);
  if ( v1 )
    return cerror_nocancel(result);
  return result;
}
