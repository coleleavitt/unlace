__int64 __fastcall ___ZN5dyld4L12hasDataConstEPKN5dyld39MachOFileE_block_invoke(__int64 result, __int64 a2)
{
  if ( (*(_BYTE *)(a2 + 56) & 2) != 0 )
    *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(result + 32) + 8LL) + 24LL) = 1;
  return result;
}
