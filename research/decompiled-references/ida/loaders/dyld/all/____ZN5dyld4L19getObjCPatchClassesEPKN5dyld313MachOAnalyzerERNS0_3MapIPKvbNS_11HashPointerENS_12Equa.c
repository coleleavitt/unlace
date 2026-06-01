_QWORD *__fastcall ___ZN5dyld4L19getObjCPatchClassesEPKN5dyld313MachOAnalyzerERNS0_3MapIPKvbNS_11HashPointerENS_12EqualPointerEEE_block_invoke(
        _QWORD *a1,
        __int64 a2,
        _BYTE *a3)
{
  _QWORD *result; // x0
  __int64 v7; // x19
  int hasExportedSymbol; // w20
  __int64 v9; // x8
  __int64 v10; // x9
  __int64 v11; // x10
  __int64 v12; // x8
  __int64 v13; // x9
  char v14; // [xsp+7h] [xbp-29h] BYREF
  __int64 v15; // [xsp+8h] [xbp-28h] BYREF

  result = (_QWORD *)Diagnostics::hasError((Diagnostics *)(a1 + 5));
  if ( (_DWORD)result )
  {
    *a3 = 1;
    return result;
  }
  if ( *(_DWORD *)(a2 + 4) )
  {
    v7 = *(_QWORD *)(a1[4] + 8LL);
    result = dyld3::OverflowSafeArray<void const*,4294967295ul>::verifySpace((_QWORD *)(v7 + 40), 1);
  }
  else
  {
    v15 = 0;
    v14 = 0;
    hasExportedSymbol = dyld3::MachOLoaded::hasExportedSymbol(a1[6], *(_QWORD *)(a2 + 8), 0, &v15, &v14);
    v7 = *(_QWORD *)(a1[4] + 8LL);
    result = dyld3::OverflowSafeArray<void const*,4294967295ul>::verifySpace((_QWORD *)(v7 + 40), 1);
    if ( hasExportedSymbol )
    {
      v9 = v15;
      v10 = *(_QWORD *)(v7 + 40);
      v11 = *(_QWORD *)(v7 + 56);
      *(_QWORD *)(v7 + 56) = v11 + 1;
      *(_QWORD *)(v10 + 8 * v11) = v9;
      return result;
    }
  }
  v12 = *(_QWORD *)(v7 + 40);
  v13 = *(_QWORD *)(v7 + 56);
  *(_QWORD *)(v7 + 56) = v13 + 1;
  *(_QWORD *)(v12 + 8 * v13) = 0;
  return result;
}
