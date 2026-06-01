// Alternative name is '_MACHOMERGER_TRAMPOLINE_memcpy'
// attributes: thunk
void *__cdecl memcpy(void *__dst, const void *__src, size_t __n)
{
  return _platform_memmove(__dst, __src, __n);
}
