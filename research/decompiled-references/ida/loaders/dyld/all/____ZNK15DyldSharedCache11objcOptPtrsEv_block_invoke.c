__int64 __fastcall ___ZNK15DyldSharedCache11objcOptPtrsEv_block_invoke(__int64 a1, __int64 a2, int a3, _BYTE *a4)
{
  const char *v8; // x23
  __int64 result; // x0

  v8 = *(const char **)(a2 + 40);
  if ( !_platform_strncmp(v8, "__DATA", 6u) || (result = _platform_strncmp(v8, "__AUTH", 6u), !(_DWORD)result) )
  {
    result = _platform_strcmp(*(const char **)(a2 + 80), "__objc_opt_ptrs");
    if ( !(_DWORD)result )
    {
      if ( *(_QWORD *)(a2 + 72) == *(_DWORD *)(a1 + 48) && !a3 )
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL) + 24LL) = *(_QWORD *)(a1 + 40) + *(_QWORD *)(a2 + 64);
      else
        *a4 = 1;
    }
  }
  return result;
}
