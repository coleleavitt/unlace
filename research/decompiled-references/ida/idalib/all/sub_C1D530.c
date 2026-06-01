__int64 __fastcall sub_C1D530(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  int *v3; // rdi
  int v4; // ecx
  int v5; // r8d
  int v6; // edi
  unsigned int v7; // edx
  int v8; // r8d
  int v9; // eax
  int v11; // edx

  if ( (*(_BYTE *)(a1 + 3) & 2) == 0 )
    return sub_FEAD90(a2);
  v2 = 48;
  if ( (*(_WORD *)a1 & 0x1FF) != 0x77 )
    v2 = 32;
  v3 = (int *)(v2 + a1);
  v4 = *v3;
  v5 = (*(_WORD *)(a2 + 206) >> 7) & 3;
  v6 = v3[1];
  if ( v5 == 3 )
    v5 = 2;
  v7 = v5
     | (((*(_BYTE *)(a2 + 46) & 8) != 0) << 14)
     | (((*(_BYTE *)(a2 + 46) & 4) != 0) << 13)
     | (((*(_BYTE *)(a2 + 46) & 2) != 0) << 12)
     | (8 * *(unsigned __int8 *)(a2 + 45)) & 0x400
     | (((*(_BYTE *)(a2 + 45) & 0x40) != 0) << 9)
     | (4 * ((unsigned int)*(char *)(a2 + 106) >> 31))
     | ((*(_BYTE *)(a2 + 46) & 1) << 11)
     | (((*(_BYTE *)(a2 + 207) >> 1) & 3) << 6);
  v8 = v7 | 0x38;
  if ( (v7 & 3) == 1 && (v7 & 4) != 0 )
  {
    v11 = v7 | 0x138;
    if ( (unsigned __int8)v8 >> 6 == 2 )
      v8 = v11;
  }
  v9 = v8 | ((*(_BYTE *)(a2 + 202) & 7) << 22);
  return (v9 ^ v4) & v6 ^ (unsigned int)v9;
}
