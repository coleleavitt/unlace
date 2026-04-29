__int64 __fastcall ___ZNK5dyld311MachOLoaded17hasExportedSymbolEPKcU13block_pointerFPKS0_S4_jEPPvPb_block_invoke(
        __int64 result,
        __int64 a2,
        __int64 a3,
        _BYTE *a4)
{
  unsigned __int64 v4; // x9
  unsigned __int64 v5; // x8

  v4 = *(_QWORD *)(result + 32) + *(_QWORD *)(a2 + 64);
  v5 = **(_QWORD **)(result + 40);
  if ( v4 <= v5 && *(_QWORD *)(a2 + 72) + v4 > v5 )
  {
    **(_BYTE **)(result + 48) = (*(_DWORD *)(a2 + 92) & 0x80000400) != 0;
    *a4 = 1;
  }
  return result;
}
