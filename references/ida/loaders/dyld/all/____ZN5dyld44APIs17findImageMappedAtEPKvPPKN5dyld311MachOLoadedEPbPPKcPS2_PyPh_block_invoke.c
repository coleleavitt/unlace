__int64 __fastcall ___ZN5dyld44APIs17findImageMappedAtEPKvPPKN5dyld311MachOLoadedEPbPPKcPS2_PyPh_block_invoke(
        __int64 result,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8,
        _BYTE *a9)
{
  unsigned __int64 v9; // x8

  v9 = *(_QWORD *)(result + 40);
  if ( v9 >= a3 && v9 < a4 + a3 )
  {
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(result + 32) + 8LL) + 24LL) = a7;
    *a9 = 1;
  }
  return result;
}
