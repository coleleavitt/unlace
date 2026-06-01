__int64 __fastcall sub_FC7050(__int64 a1)
{
  int v1; // ecx
  unsigned int v2; // edx
  int v3; // ecx
  int v5; // edx

  v1 = (*(_WORD *)(a1 + 206) >> 7) & 3;
  if ( v1 == 3 )
    v1 = 2;
  v2 = v1
     | (((*(_BYTE *)(a1 + 46) & 8) != 0) << 14)
     | (((*(_BYTE *)(a1 + 46) & 4) != 0) << 13)
     | (((*(_BYTE *)(a1 + 46) & 2) != 0) << 12)
     | (8 * *(unsigned __int8 *)(a1 + 45)) & 0x400
     | (((*(_BYTE *)(a1 + 45) & 0x40) != 0) << 9)
     | (4 * ((unsigned int)*(char *)(a1 + 106) >> 31))
     | ((*(_BYTE *)(a1 + 46) & 1) << 11)
     | (((*(_BYTE *)(a1 + 207) >> 1) & 3) << 6);
  v3 = v2 | 0x38;
  if ( (v2 & 3) == 1 && (v2 & 4) != 0 )
  {
    v5 = v2 | 0x138;
    if ( (unsigned __int8)v3 >> 6 == 2 )
      v3 = v5;
  }
  return v3 | ((unsigned __int8)(*(_BYTE *)(a1 + 202) & 7) << 22);
}

