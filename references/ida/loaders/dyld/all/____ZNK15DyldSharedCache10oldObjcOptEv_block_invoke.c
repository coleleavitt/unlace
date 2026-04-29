__int64 __fastcall ___ZNK15DyldSharedCache10oldObjcOptEv_block_invoke(__int64 a1, __int64 a2, int a3, _BYTE *a4)
{
  __int64 result; // x0

  result = _platform_strcmp(*(const char **)(a2 + 40), "__TEXT");
  if ( !(_DWORD)result )
  {
    result = _platform_strcmp(*(const char **)(a2 + 80), "__objc_opt_ro");
    if ( !(_DWORD)result )
    {
      if ( a3 )
        *a4 = 1;
      else
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL) + 24LL) = *(_QWORD *)(a1 + 40) + *(_QWORD *)(a2 + 64);
    }
  }
  return result;
}
