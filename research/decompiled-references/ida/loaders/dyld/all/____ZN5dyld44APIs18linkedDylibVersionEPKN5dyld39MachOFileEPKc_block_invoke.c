__int64 __fastcall ___ZN5dyld44APIs18linkedDylibVersionEPKN5dyld39MachOFileEPKc_block_invoke(
        __int64 a1,
        char *__s1,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        _BYTE *a8)
{
  __int64 result; // x0

  result = _platform_strcmp(__s1, *(const char **)(a1 + 40));
  if ( !(_DWORD)result )
  {
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL) + 24LL) = a7;
    *a8 = 1;
  }
  return result;
}
