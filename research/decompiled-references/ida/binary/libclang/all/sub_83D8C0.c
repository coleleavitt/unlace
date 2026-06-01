__int64 __fastcall sub_83D8C0(__int64 a1, __int64 a2)
{
  __int16 v4; // r9
  __int64 v5; // rdx
  __int16 v6; // r8
  unsigned int *v7; // rax
  unsigned int v8; // ecx
  unsigned int v9; // esi
  char v10; // al
  unsigned int v11; // edx
  int v12; // eax
  int v13; // edx
  char v15; // r8
  int v16; // edx

  if ( (*(_BYTE *)(a1 + 3) & 2) == 0 )
    return sub_C8DF90(a2);
  v4 = *(unsigned __int8 *)(a2 + 45);
  v5 = 32;
  if ( (*(_WORD *)a1 & 0x1FF) == 0x78 )
    v5 = 48;
  v6 = (*(_WORD *)(a2 + 198) >> 7) & 3;
  v7 = (unsigned int *)(v5 + a1);
  v8 = *v7;
  v9 = v7[1];
  if ( (unsigned __int8)v6 > 2u )
    LOBYTE(v6) = 2;
  v10 = *(_BYTE *)(a2 + 46);
  v11 = (((v10 & 8) != 0) << 14)
      | (((v10 & 4) != 0) << 13)
      | (((v10 & 2) != 0) << 12)
      | (8 * v4) & 0x400
      | (((v4 & 0x40) != 0) << 9)
      | (4 * ((unsigned int)*(char *)(a2 + 106) >> 31))
      | ((v10 & 1) << 11)
      | (unsigned __int8)v6
      | (((*(_BYTE *)(a2 + 199) >> 1) & 3) << 6);
  v12 = v11 | 0x38;
  if ( (v11 & 3) == 1 && (v11 & 4) != 0 )
  {
    v15 = v11;
    v16 = v11 | 0x138;
    if ( (v15 & 0xC0) == 0x80 )
      v12 = v16;
  }
  v13 = v12 | (*(_DWORD *)(a2 + 192) << 7) & 0xC00000;
  return v13 ^ v9 & (v13 ^ v8);
}

