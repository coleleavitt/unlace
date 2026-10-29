__int64 __fastcall ___ZNK5dyld39MachOFile7hasObjCEv_block_invoke(__int64 a1, __int64 a2, __int64 a3, _BYTE *a4)
{
  __int64 v7; // x23
  const char *v8; // x22
  __int64 result; // x0

  v7 = *(_QWORD *)(a1 + 40);
  v8 = *(const char **)(a2 + 80);
  result = _platform_strcmp(v8, "__objc_imageinfo");
  if ( !(_DWORD)result )
  {
    result = _platform_strncmp(*(const char **)(a2 + 40), "__DATA", 6u);
    if ( !(_DWORD)result )
    {
      *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL) + 24LL) = 1;
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
        *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL) + 24LL) = 1;
        *a4 = 1;
      }
    }
  }
  return result;
}
