size_t __fastcall dyld4::PrebuiltLoaderSet::forEachMustBeMissingPath(size_t result, __int64 a2)
{
  size_t v3; // x20
  const char *v4; // x21
  int v5; // w23
  char v6; // [xsp+Fh] [xbp-31h] BYREF

  v3 = result;
  v6 = 0;
  v4 = (const char *)(result + *(unsigned int *)(result + 36));
  v5 = -1;
  do
  {
    if ( (unsigned int)++v5 >= *(_DWORD *)(v3 + 32) )
      break;
    (*(void (__fastcall **)(__int64, const char *, char *))(a2 + 16))(a2, v4, &v6);
    result = _platform_strlen(v4);
    v4 += result + 1;
  }
  while ( !v6 );
  return result;
}
