size_t __fastcall _simple_sresize(__int64 a1)
{
  const char *v2; // x20
  size_t result; // x0

  v2 = *(const char **)a1;
  result = _platform_strlen(*(const char **)a1);
  *(_QWORD *)(a1 + 8) = &v2[result];
  return result;
}
