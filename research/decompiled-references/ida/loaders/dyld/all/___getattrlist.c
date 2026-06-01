int __cdecl __getattrlist(const char *a1, void *a2, void *a3, size_t a4, unsigned int a5)
{
  char v5; // cf
  int result; // w0

  result = mac_syscall(SYS_getattrlist, a1, a2, a3, a4, a5);
  if ( v5 )
    return cerror_nocancel(result);
  return result;
}
