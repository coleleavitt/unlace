__int64 __fastcall ZSTD_DCtx_reset(__int64 a1, int a2)
{
  unsigned int v2; // eax

  v2 = a2 - 2;
  if ( (a2 & 0xFFFFFFFD) == 1 )
  {
    *(_DWORD *)(a1 + 30236) = 0;
    *(_DWORD *)(a1 + 30316) = 0;
    *(_DWORD *)(a1 + 30176) = 1;
    if ( v2 > 1 )
      return 0;
  }
  else
  {
    if ( v2 > 1 )
      return 0;
    if ( *(_DWORD *)(a1 + 30236) )
      return -60;
  }
  ZSTD_freeDDict(*(void **)(a1 + 30184));
  *(_QWORD *)(a1 + 30184) = 0;
  *(_QWORD *)(a1 + 30192) = 0;
  *(_DWORD *)(a1 + 30208) = 0;
  *(_QWORD *)(a1 + 30264) = 134217729;
  *(_DWORD *)(a1 + 30320) = 0;
  *(_QWORD *)(a1 + 30104) = 0;
  *(_QWORD *)(a1 + 30224) = 0;
  *(_DWORD *)(a1 + 30232) = 0;
  return 0;
}

