__int64 __fastcall ___ZNK5dyld46Loader26logSegmentsFromSharedCacheERNS_12RuntimeStateE_block_invoke(
        __int64 a1,
        __int64 a2)
{
  int v2; // w10
  __int64 v3; // x11
  __int64 v4; // x13
  __int64 v5; // x10

  v2 = *(_DWORD *)(a2 + 52);
  v3 = 120;
  if ( (v2 & 4) == 0 )
    v3 = 46;
  v4 = 119;
  if ( (v2 & 2) == 0 )
    v4 = 46;
  v5 = 114;
  if ( (*(_DWORD *)(a2 + 52) & 1) == 0 )
    v5 = 46;
  return dyld4::RuntimeState::log(
           *(dyld4::RuntimeState **)(a1 + 32),
           "%14s (%c%c%c) 0x%012llX->0x%012llX \n",
           *(const char **)(a2 + 40),
           v5,
           v4,
           v3,
           *(_QWORD *)(a1 + 40) + *(_QWORD *)(a2 + 16),
           *(_QWORD *)(a1 + 40) + *(_QWORD *)(a2 + 16) + *(_QWORD *)(a2 + 24));
}
