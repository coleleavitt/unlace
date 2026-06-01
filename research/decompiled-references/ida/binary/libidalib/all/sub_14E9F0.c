__int64 __fastcall sub_14E9F0(__int64 a1, __int64 a2)
{
  int v4; // esi
  int v5; // eax
  char v6; // cl
  int v7; // edi
  int v8; // ecx
  __int64 result; // rax
  __int16 v10; // si
  int v11; // eax
  int v12; // ecx
  int v13; // edi
  int v14; // edx
  char v15; // al

  if ( (unsigned __int16)((*(_WORD *)(a1 + 24) & 7) - 1) > 3u )
  {
    v11 = *(_DWORD *)(a2 + 48);
    v10 = *(_WORD *)(a1 + 26);
    *(_BYTE *)(a2 + 52) &= 0x9Fu;
    v12 = v11;
    BYTE1(v11) &= 0xF8u;
    BYTE1(v12) = BYTE1(v12) & 0xF8 | 4;
    if ( (v10 & 1) != 0 )
      v11 = v12;
    *(_DWORD *)(a2 + 48) = v11;
    goto LABEL_12;
  }
  v4 = dword_1D7430[(unsigned __int16)((*(_WORD *)(a1 + 24) & 7) - 1)];
  v5 = *(_DWORD *)(a2 + 48);
  v6 = *(_BYTE *)(a2 + 52) & 0x9F;
  v7 = *(_WORD *)(a1 + 26) & 1;
  *(_BYTE *)(a2 + 52) = v6;
  if ( v7 )
  {
    BYTE1(v5) = BYTE1(v5) & 0xF8 | 4;
    *(_DWORD *)(a2 + 48) = v5;
    if ( v4 != 8 )
    {
      if ( v4 <= 8 )
        goto LABEL_5;
      if ( v4 == 10 )
      {
        v15 = 64;
LABEL_25:
        *(_BYTE *)(a2 + 52) = v15 | v6;
      }
LABEL_12:
      v8 = *(_DWORD *)(a1 + 56);
      if ( v8 <= 0 )
        return 1;
      goto LABEL_13;
    }
LABEL_22:
    BYTE1(v5) |= 1u;
    *(_DWORD *)(a2 + 48) = v5;
    goto LABEL_12;
  }
  BYTE1(v5) &= 0xF8u;
  *(_DWORD *)(a2 + 48) = v5;
  if ( v4 == 8 )
    goto LABEL_22;
  if ( v4 > 8 )
  {
    v15 = 96;
    if ( v4 != 10 )
      goto LABEL_12;
    goto LABEL_25;
  }
LABEL_5:
  if ( v4 == 1 )
  {
    *(_BYTE *)(a2 + 52) = v6 | 0x20;
    goto LABEL_12;
  }
  BYTE1(v5) |= 2u;
  *(_DWORD *)(a2 + 48) = v5;
  v8 = *(_DWORD *)(a1 + 56);
  if ( v8 <= 0 )
    return 1;
LABEL_13:
  if ( (unsigned __int64)v8 >= *(_QWORD *)(a1 + 40) )
    return 1;
  v13 = 1 << (v8 - 1);
  if ( v13 < 0 )
    return 1;
  result = 0;
  if ( (unsigned int)v13 <= 8 && (v13 & (v13 - 1)) == 0 )
  {
    LOBYTE(v14) = 0;
    if ( v13 )
      v14 = log2ceil() + 1;
    *(_BYTE *)(a2 + 52) = v14 | *(_BYTE *)(a2 + 52) & 0xF8;
    return 1;
  }
  return result;
}

