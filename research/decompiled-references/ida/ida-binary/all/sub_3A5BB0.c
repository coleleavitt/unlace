__int64 __fastcall sub_3A5BB0(__int64 a1, __int64 a2)
{
  int v2; // edx
  unsigned int v3; // eax
  int v4; // edx
  unsigned int v6; // edx
  unsigned int v7; // edx

  *(_BYTE *)(a2 + 51) = (*(_BYTE *)(a1 + 48) & 8) != 0;
  v2 = *(_DWORD *)(a2 + 44);
  v3 = v2 & 0xFFFFFFBF;
  v4 = v2 | 0x40;
  if ( (*(_BYTE *)(a1 + 48) & 2) != 0 )
    v3 = v4;
  *(_DWORD *)(a2 + 44) = v3;
  if ( (*(_BYTE *)(a1 + 48) & 8) != 0 )
    return 1;
  v6 = v3;
  BYTE1(v3) &= ~4u;
  BYTE1(v6) |= 4u;
  if ( (*(_BYTE *)(a1 + 24) & 1) != 0 )
    v3 = v6;
  v7 = v3;
  *(_DWORD *)(a2 + 44) = v3;
  BYTE1(v3) |= 8u;
  BYTE1(v7) &= ~8u;
  if ( (*(_BYTE *)(a1 + 48) & 4) == 0 )
    v3 = v7;
  *(_DWORD *)(a2 + 44) = v3;
  return 1;
}
