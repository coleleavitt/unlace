// Alternative name is '_MACHOMERGER_TRAMPOLINE_memset'
// attributes: thunk
void *__cdecl memset(void *__b, int __c, size_t __len)
{
  return _platform_memset(__b, __c, __len);
}
