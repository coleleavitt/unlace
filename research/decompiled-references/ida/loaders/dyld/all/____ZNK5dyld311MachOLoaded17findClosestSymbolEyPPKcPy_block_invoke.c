__int64 __fastcall ___ZNK5dyld311MachOLoaded17findClosestSymbolEyPPKcPy_block_invoke(
        __int64 result,
        __int64 a2,
        __int64 a3,
        _BYTE *a4)
{
  unsigned __int64 v4; // x8
  unsigned __int64 v5; // x9

  v4 = *(_QWORD *)(result + 40);
  ++*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(result + 32) + 8LL) + 24LL);
  v5 = *(_QWORD *)(a2 + 64);
  if ( v5 <= v4 && v4 < *(_QWORD *)(a2 + 72) + v5 )
    *a4 = 1;
  return result;
}
