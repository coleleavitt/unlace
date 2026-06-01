__int64 __fastcall ___ZNK5dyld39MachOFile19findObjCDataSectionEPKcRyS3__block_invoke(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _BYTE *a4)
{
  const char *v7; // x22
  __int64 result; // x0

  v7 = *(const char **)(a2 + 40);
  if ( !_platform_strcmp(v7, "__DATA")
    || !_platform_strcmp(v7, "__DATA_CONST")
    || (result = _platform_strcmp(v7, "__DATA_DIRTY"), !(_DWORD)result) )
  {
    result = _platform_strcmp(*(const char **)(a2 + 80), *(const char **)(a1 + 40));
    if ( !(_DWORD)result )
    {
      *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL) + 24LL) = 1;
      **(_QWORD **)(a1 + 48) = *(_QWORD *)(a2 + 64) - *(_QWORD *)(a1 + 56);
      **(_QWORD **)(a1 + 64) = *(_QWORD *)(a2 + 72);
      *a4 = 1;
    }
  }
  return result;
}
