int __fastcall __munmap(void *a1, size_t a2)
{
  char v2; // cf
  int result; // w0

  result = mac_syscall(SYS_munmap, a1, a2);
  if ( v2 )
    return cerror_nocancel(result);
  return result;
}
