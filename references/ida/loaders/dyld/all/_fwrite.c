size_t __cdecl fwrite(const void *__ptr, size_t __size, size_t __nitems, FILE *__stream)
{
  return fprintf(__stream, "%s", (const char *)__ptr);
}
