__int64 __fastcall dyld3::preflightSubCacheFile(
        unsigned int *a1,
        __int64 a2,
        __int64 a3,
        char *__source,
        const char *a5)
{
  dyld3 *v9; // x23
  const char *v10; // x2
  __int64 v11; // x0
  __int64 result; // x0
  const char *v13; // x8
  char __dst[256]; // [xsp+8h] [xbp-138h] BYREF

  v9 = (dyld3 *)*a1;
  strlcpy(__dst, __source, 0x100u);
  strlcat(__dst, a5, 0x100u);
  v11 = dyld3::openat(v9, (int)__dst, v10);
  if ( (_DWORD)v11 == -1 )
  {
    if ( *__error() == 2 )
    {
      result = 0;
      *(_BYTE *)(a2 + 24) = 0;
      v13 = "no shared cache file";
    }
    else
    {
      result = 0;
      v13 = "shared cache file open() failed";
    }
    *(_QWORD *)(a2 + 16) = v13;
  }
  else
  {
    *(_BYTE *)(a2 + 24) = 1;
    return dyld3::preflightCacheFile(a1, a2, a3, v11);
  }
  return result;
}
