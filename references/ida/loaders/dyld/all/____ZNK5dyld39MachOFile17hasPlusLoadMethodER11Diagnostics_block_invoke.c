__int64 __fastcall ___ZNK5dyld39MachOFile17hasPlusLoadMethodER11Diagnostics_block_invoke(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _BYTE *a4)
{
  __int64 result; // x0
  const char *v8; // x21

  result = _platform_strncmp(*(const char **)(a2 + 40), "__DATA", 6u);
  if ( !(_DWORD)result )
  {
    v8 = *(const char **)(a2 + 80);
    result = _platform_strcmp(v8, "__objc_nlclslist");
    if ( !(_DWORD)result || (result = _platform_strcmp(v8, "__objc_nlcatlist"), !(_DWORD)result) )
    {
      *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL) + 24LL) = 1;
      *a4 = 1;
    }
  }
  return result;
}
