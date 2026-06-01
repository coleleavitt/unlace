__int64 __fastcall ___ZNK5dyld39MachOFile23allowsAlternatePlatformEv_block_invoke(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _BYTE *a4)
{
  __int64 result; // x0

  result = _platform_strcmp(*(const char **)(a2 + 80), "__allow_alt_plat");
  if ( !(_DWORD)result )
  {
    result = _platform_strncmp(*(const char **)(a2 + 40), "__DATA", 6u);
    if ( !(_DWORD)result )
    {
      *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL) + 24LL) = 1;
      *a4 = 1;
    }
  }
  return result;
}
