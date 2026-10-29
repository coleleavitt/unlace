__int64 __fastcall sub_8175F0(__int64 a1, __int64 a2)
{
  unsigned __int16 v4; // dx
  char v5; // dl
  unsigned int *v6; // rax
  unsigned int v7; // edx
  unsigned int v8; // ecx
  char v9; // si
  __int16 v10; // r8
  unsigned int v11; // eax
  int v12; // r8d
  int v13; // esi
  bool v15; // zf
  __int64 v16; // rdx
  char v17; // si
  int v18; // eax
  __int64 v19; // rdx

  v4 = *(_WORD *)a1 & 0x1FF;
  if ( v4 <= 0x59u )
  {
    if ( v4 == 4 )
    {
      if ( (*(_BYTE *)(a1 + 3) & 2) != 0 )
      {
        v7 = *(_DWORD *)(a1 + 24);
        v8 = *(_DWORD *)(a1 + 28);
        goto LABEL_9;
      }
    }
    else
    {
      if ( v4 <= 0x4Fu )
        return sub_C8DF90(a2);
      if ( (*(_BYTE *)(a1 + 3) & 8) != 0 )
      {
        if ( v4 > 0x56u )
        {
          v6 = (unsigned int *)(a1 + 8LL * *(unsigned int *)(a1 + 4) + 40);
        }
        else
        {
          v15 = v4 == 80;
          v19 = *(unsigned int *)(a1 + 4);
          if ( v15 )
            v6 = (unsigned int *)(a1 + 8 * v19 + 24);
          else
            v6 = (unsigned int *)(a1 + 8 * v19 + 48);
        }
        goto LABEL_5;
      }
    }
    return sub_C8DF90(a2);
  }
  if ( v4 > 0x5Eu )
  {
    if ( ((v4 + 393) & 0x1FFu) > 1 )
      return sub_C8DF90(a2);
    if ( (*(_BYTE *)(a1 + 3) & 2) != 0 )
    {
      v15 = v4 == 120;
      v16 = 32;
      if ( v15 )
        v16 = 48;
      v6 = (unsigned int *)(v16 + a1);
      goto LABEL_5;
    }
    return sub_C8DF90(a2);
  }
  v5 = *(_BYTE *)(a1 + 2);
  if ( (v5 & 0x20) == 0 )
    return sub_C8DF90(a2);
  v6 = (unsigned int *)(*(unsigned __int8 *)(a1 + 3)
                      + (unsigned __int64)(8 * (*(_DWORD *)(a1 + 16) + (unsigned int)((v5 & 8) != 0) + 1))
                      + a1);
LABEL_5:
  v7 = *v6;
  v8 = v6[1];
LABEL_9:
  v9 = *(_BYTE *)(a2 + 46);
  v10 = (*(_WORD *)(a2 + 198) >> 7) & 3;
  if ( ((*(_WORD *)(a2 + 198) >> 7) & 3) == 3 )
    LOBYTE(v10) = 2;
  v11 = (((v9 & 8) != 0) << 14)
      | (((v9 & 4) != 0) << 13)
      | (((v9 & 2) != 0) << 12)
      | (8 * *(unsigned __int8 *)(a2 + 45)) & 0x400
      | (((*(_BYTE *)(a2 + 45) & 0x40) != 0) << 9)
      | (4 * ((unsigned int)*(char *)(a2 + 106) >> 31))
      | ((v9 & 1) << 11)
      | (unsigned __int8)v10
      | (((*(_BYTE *)(a2 + 199) >> 1) & 3) << 6);
  v12 = v11 | 0x38;
  if ( (v11 & 3) == 1 && (v11 & 4) != 0 )
  {
    v17 = v11;
    v18 = v11 | 0x138;
    if ( (v17 & 0xC0) == 0x80 )
      v12 = v18;
  }
  v13 = v12 | (*(_DWORD *)(a2 + 192) << 7) & 0xC00000;
  return v13 ^ v8 & (v13 ^ v7);
}

