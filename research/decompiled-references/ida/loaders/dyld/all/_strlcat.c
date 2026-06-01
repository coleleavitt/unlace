// attributes: thunk
size_t __cdecl strlcat(char *__dst, const char *__source, size_t __size)
{
  return _platform_strlcat(__dst, (char *)__source, __size);
}
