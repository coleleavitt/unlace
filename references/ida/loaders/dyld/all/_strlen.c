// Alternative name is '_MACHOMERGER_TRAMPOLINE_strlen'
// attributes: thunk
size_t __cdecl strlen(const char *__s)
{
  return _platform_strlen(__s);
}
