// attributes: thunk
size_t __cdecl strlcpy(char *__dst, const char *__source, size_t __size)
{
  return _platform_strlcpy((int)__dst, (char *)__source);
}
