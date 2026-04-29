__int64 __fastcall sub_A7C0(_WORD *a1, __int64 a2, unsigned int a3, char a4)
{
  unsigned int v5; // r8d
  __int64 v6; // rsi
  char v7; // r11
  __int16 v8; // bp
  unsigned int v10; // edx
  int v11; // r11d
  __int64 v12; // rdi
  __int64 result; // rax
  __int16 v14; // r8
  __int64 v15; // r9

  v5 = a3 >> 11;
  v6 = a2 + 80;
  v7 = a3 >> 11;
  v8 = a3 & 0x1F;
  v10 = a3 >> 27;
  v11 = v7 & 0x1F;
  v12 = a2 + 40;
  result = v6;
  if ( (a4 & 2) == 0 )
    result = a2 + 40;
  *(_BYTE *)(result + 1) = 3;
  *(_BYTE *)(result + 5) = 0;
  *(_WORD *)(result + 6) = v8;
  if ( (a4 & 1) == 0 )
  {
    if ( v11 )
    {
      *(_WORD *)(a2 + 24) = a1[2];
      if ( (a4 & 2) != 0 )
      {
        *(_BYTE *)(a2 + 121) = 1;
        *(_BYTE *)(a2 + 125) = 2;
        *(_WORD *)(a2 + 126) = v11;
      }
      else
      {
        *(_BYTE *)(a2 + 81) = 1;
        v12 = a2 + 120;
        *(_BYTE *)(a2 + 85) = 2;
        *(_WORD *)(a2 + 86) = v11;
      }
      *(_BYTE *)(v12 + 1) = 1;
      *(_BYTE *)(v12 + 5) = 7;
      *(_WORD *)(v12 + 6) = v10 + 64;
    }
    else
    {
      if ( (a4 & 2) != 0 )
        v6 = a2 + 40;
      *(_WORD *)(a2 + 24) = *a1;
      *(_BYTE *)(v6 + 1) = 1;
      *(_BYTE *)(v6 + 5) = 7;
      *(_WORD *)(v6 + 6) = v10 + 64;
    }
    *(_BYTE *)(result + 32) |= 8u;
    return result;
  }
  if ( v11 )
  {
    if ( (v5 & 1) != 0 )
    {
      v14 = v5 & 0x1E;
      *(_WORD *)(a2 + 24) = a1[3];
      *(_BYTE *)(result + 32) |= 0x20u;
      if ( (a4 & 2) != 0 )
        goto LABEL_15;
    }
    else
    {
      v14 = v5 & 0x1E;
      *(_WORD *)(a2 + 24) = a1[4];
      *(_BYTE *)(result + 32) |= 0x40u;
      if ( (a4 & 2) != 0 )
      {
LABEL_15:
        *(_BYTE *)(a2 + 121) = 1;
        v15 = a2 + 40;
        *(_BYTE *)(v15 + 85) = 2;
        *(_WORD *)(v15 + 86) = v14;
LABEL_16:
        *(_BYTE *)(v15 + 1) = 1;
        *(_BYTE *)(v15 + 5) = 7;
        *(_WORD *)(v15 + 6) = v10 + 64;
        return result;
      }
    }
    *(_BYTE *)(a2 + 81) = 1;
    v15 = a2 + 120;
    *(_BYTE *)(v15 - 35) = 2;
    *(_WORD *)(v15 - 34) = v14;
    goto LABEL_16;
  }
  *(_WORD *)(a2 + 24) = a1[1];
  *(_BYTE *)(result + 32) |= 0x10u;
  if ( (a4 & 2) != 0 )
    v6 = a2 + 40;
  *(_BYTE *)(v6 + 1) = 1;
  *(_BYTE *)(v6 + 5) = 7;
  *(_WORD *)(v6 + 6) = v10 + 64;
  return result;
}
