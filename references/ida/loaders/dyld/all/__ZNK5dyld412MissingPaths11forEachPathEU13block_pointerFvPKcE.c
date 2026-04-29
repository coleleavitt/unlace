size_t __fastcall dyld4::MissingPaths::forEachPath(size_t result, __int64 a2)
{
  const char *v2; // x21
  size_t v4; // x20

  v2 = *(const char **)result;
  if ( *(_QWORD *)result < *(_QWORD *)(result + 16) )
  {
    v4 = result;
    do
    {
      (*(void (__fastcall **)(__int64, const char *))(a2 + 16))(a2, v2);
      result = _platform_strlen(v2);
      v2 += result + 1;
    }
    while ( (unsigned __int64)v2 < *(_QWORD *)(v4 + 16) );
  }
  return result;
}
