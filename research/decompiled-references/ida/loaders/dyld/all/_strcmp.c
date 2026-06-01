// Alternative name is '_MACHOMERGER_TRAMPOLINE_strcmp'
// attributes: thunk
int __cdecl strcmp(const char *__s1, const char *__s2)
{
  return _platform_strcmp(__s1, __s2);
}
