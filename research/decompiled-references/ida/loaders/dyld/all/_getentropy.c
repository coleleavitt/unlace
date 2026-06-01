int __cdecl getentropy(void *buffer, size_t size)
{
  char v2; // cf
  int result; // w0

  result = mac_syscall(SYS_getentropy, buffer, size);
  if ( v2 )
    return cerror_nocancel(result);
  return result;
}
