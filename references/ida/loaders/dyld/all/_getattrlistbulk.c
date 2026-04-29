int __cdecl getattrlistbulk(int a1, void *a2, void *a3, size_t a4, uint64_t a5)
{
  char v5; // cf
  int result; // w0

  result = mac_syscall(SYS_getattrlistbulk, a1, a2, a3, a4, a5);
  if ( v5 )
    return cerror_nocancel(result);
  return result;
}
