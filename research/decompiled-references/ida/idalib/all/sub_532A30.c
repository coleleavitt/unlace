__int64 __fastcall sub_532A30(__int64 *a1, __int64 *a2)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // rsi
  int v5; // eax
  char v6; // cl
  char v7; // al

  v2 = *a2;
  v3 = a1[1];
  v4 = *a1;
  v5 = *(_DWORD *)(v2 + 48);
  v6 = *(_BYTE *)(v2 + 52) & 0x9F;
  *(_BYTE *)(v2 + 52) = v6;
  if ( !v3 )
  {
    BYTE1(v5) &= 0xF8u;
    *(_DWORD *)(v2 + 48) = v5;
    if ( (_DWORD)v4 != 8 )
    {
      if ( (int)v4 > 8 )
      {
        v7 = 96;
        if ( (_DWORD)v4 == 10 )
          goto LABEL_5;
        return 0;
      }
      goto LABEL_8;
    }
LABEL_12:
    BYTE1(v5) |= 1u;
    *(_DWORD *)(v2 + 48) = v5;
    return 0;
  }
  BYTE1(v5) = BYTE1(v5) & 0xF8 | 4;
  *(_DWORD *)(v2 + 48) = v5;
  if ( (_DWORD)v4 == 8 )
    goto LABEL_12;
  if ( (int)v4 > 8 )
  {
    v7 = 64;
    if ( (_DWORD)v4 == 10 )
    {
LABEL_5:
      *(_BYTE *)(v2 + 52) = v7 | v6;
      return 0;
    }
    return 0;
  }
LABEL_8:
  if ( (_DWORD)v4 != 1 )
  {
    if ( (_DWORD)v4 == 2 )
    {
      BYTE1(v5) |= 2u;
      *(_DWORD *)(v2 + 48) = v5;
    }
    return 0;
  }
  *(_BYTE *)(v2 + 52) = v6 | 0x20;
  return 0;
}
