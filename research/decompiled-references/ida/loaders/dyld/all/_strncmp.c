// Alternative name is '_MACHOMERGER_TRAMPOLINE_strncmp'
// attributes: thunk
int __cdecl strncmp(const char *__s1, const char *__s2, size_t __n)
{
  return _platform_strncmp(__s1, __s2, __n);
}
