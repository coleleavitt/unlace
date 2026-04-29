char *__cdecl strcat(char *__s1, const char *__s2)
{
  size_t v4; // x21
  size_t v5; // x0

  v4 = _platform_strlen(__s1);
  v5 = _platform_strlen(__s2);
  _platform_memmove(&__s1[v4], __s2, v5 + 1);
  return __s1;
}
