void *__fastcall __mmap(void *a1, size_t a2, int a3, int a4, int a5, off_t a6)
{
  char v6; // cf
  void *result; // x0

  result = mac_syscall(SYS_mmap, a1, a2, a3, a4, a5, a6);
  if ( v6 )
    return (void *)cerror_nocancel((int)result);
  return result;
}
