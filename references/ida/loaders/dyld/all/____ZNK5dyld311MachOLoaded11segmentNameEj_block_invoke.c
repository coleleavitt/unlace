__int64 __fastcall ___ZNK5dyld311MachOLoaded11segmentNameEj_block_invoke(__int64 result, __int64 a2, _BYTE *a3)
{
  if ( *(_DWORD *)(result + 40) == (unsigned __int16)*(_DWORD *)(a2 + 56) >> 4 )
  {
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(result + 32) + 8LL) + 24LL) = *(_QWORD *)(a2 + 40);
    *a3 = 1;
  }
  return result;
}
