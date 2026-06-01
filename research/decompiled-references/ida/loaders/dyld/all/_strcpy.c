char *__cdecl strcpy(char *__dst, const char *__src)
{
  size_t v4; // x0

  v4 = _platform_strlen(__src);
  _platform_memmove(__dst, __src, v4 + 1);
  return __dst;
}
