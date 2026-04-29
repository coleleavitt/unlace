// attributes: thunk
char *__cdecl strncpy(char *__dst, const char *__src, size_t __n)
{
  return _platform_strncpy(__dst, (char *)__src, __n);
}
