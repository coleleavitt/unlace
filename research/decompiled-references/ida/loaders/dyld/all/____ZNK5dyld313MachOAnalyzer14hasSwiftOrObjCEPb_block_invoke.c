__int64 __fastcall ___ZNK5dyld313MachOAnalyzer14hasSwiftOrObjCEPb_block_invoke(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        _BYTE *a4)
{
  __int64 v7; // x23
  const char *v8; // x22
  __int64 result; // x0
  _BYTE *v10; // x8

  v7 = a1[5];
  v8 = *(const char **)(a2 + 80);
  result = _platform_strcmp(v8, "__objc_imageinfo");
  if ( !(_DWORD)result )
  {
    result = _platform_strncmp(*(const char **)(a2 + 40), "__DATA", 6u);
    if ( !(_DWORD)result )
    {
      v10 = (_BYTE *)a1[6];
      if ( v10 && *(_BYTE *)(a1[7] + *(_QWORD *)(a2 + 64) + 5LL) )
        *v10 = 1;
      *(_BYTE *)(*(_QWORD *)(a1[4] + 8LL) + 24LL) = 1;
      *a4 = 1;
    }
  }
  if ( *(_DWORD *)(v7 + 4) == 7 )
  {
    result = _platform_strcmp(v8, "__image_info");
    if ( !(_DWORD)result )
    {
      result = _platform_strcmp(*(const char **)(a2 + 40), "__OBJC");
      if ( !(_DWORD)result )
      {
        *(_BYTE *)(*(_QWORD *)(a1[4] + 8LL) + 24LL) = 1;
        *a4 = 1;
      }
    }
  }
  return result;
}
