__int64 __fastcall ___ZNK5dyld39MachOFile10hasSectionEPKcS2__block_invoke(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _BYTE *a4)
{
  __int64 result; // x0

  result = _platform_strcmp(*(const char **)(a2 + 40), *(const char **)(a1 + 40));
  if ( !(_DWORD)result )
  {
    result = _platform_strcmp(*(const char **)(a2 + 80), *(const char **)(a1 + 48));
    if ( !(_DWORD)result )
    {
      *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL) + 24LL) = 1;
      *a4 = 1;
    }
  }
  return result;
}
