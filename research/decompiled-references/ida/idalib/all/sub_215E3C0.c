__int64 __fastcall sub_215E3C0(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // esi
  char v4; // cl
  char v5; // r8
  bool v6; // cl
  char v7; // al
  char v9; // al
  unsigned __int16 v10; // ax

  if ( !*(_QWORD *)(a2 + 96) || !a3 )
  {
    if ( (unsigned __int8)*(_WORD *)(a3 + 16) >> 4 == 2 )
    {
LABEL_14:
      *(_BYTE *)(a1 + 8) &= ~1u;
      *(_DWORD *)a1 = 5;
      return a1;
    }
    v9 = *(_BYTE *)(a3 + 18);
    v3 = *(_DWORD *)(a3 + 12);
    switch ( v9 )
    {
      case 2:
        if ( !v3 )
        {
          if ( !*(_DWORD *)(a3 + 8) )
            goto LABEL_17;
          goto LABEL_30;
        }
        if ( v3 == -2 )
          goto LABEL_29;
        v5 = 1;
        if ( *(_DWORD *)(a3 + 12) != -1 )
        {
          v5 = 0;
          v6 = 0;
LABEL_35:
          v7 = *(_BYTE *)(a3 + 19);
          goto LABEL_36;
        }
        break;
      case 105:
        goto LABEL_17;
      case 103:
LABEL_21:
        *(_BYTE *)(a1 + 8) &= ~1u;
        *(_DWORD *)a1 = 4;
        return a1;
      default:
        v5 = 0;
        if ( v3 == -2 )
          goto LABEL_29;
        break;
    }
    v6 = v9 == 3;
    goto LABEL_35;
  }
  v3 = *(unsigned __int16 *)(a3 + 12);
  if ( (unsigned __int16)v3 > 0xFEFFu )
    v3 = (__int16)v3;
  if ( (unsigned __int8)*(_WORD *)(a3 + 14) >> 4 == 2 )
    goto LABEL_14;
  v4 = *(_BYTE *)(a3 + 16);
  if ( v4 != 2 )
  {
    if ( v4 != 105 )
    {
      if ( v4 != 103 )
      {
        if ( v3 != -2 )
          goto LABEL_10;
        goto LABEL_29;
      }
      goto LABEL_21;
    }
LABEL_17:
    *(_BYTE *)(a1 + 8) &= ~1u;
    *(_DWORD *)a1 = 0;
    return a1;
  }
  if ( *(_WORD *)(a3 + 12) )
  {
    if ( v3 != -2 )
    {
      v10 = *(_WORD *)(a3 + 12);
      if ( v10 > 0xFEFFu )
      {
        v5 = 1;
        if ( v10 != 0xFFFF )
        {
          v5 = 0;
          v6 = 0;
          goto LABEL_12;
        }
LABEL_11:
        v6 = v4 == 3;
LABEL_12:
        v7 = *(_BYTE *)(a3 + 17);
LABEL_36:
        if ( !v7 || !v6 && !v5 )
        {
          if ( v3 <= 0 )
          {
            *(_BYTE *)(a1 + 8) &= ~1u;
            *(_DWORD *)a1 = 1;
            return a1;
          }
          goto LABEL_30;
        }
        goto LABEL_29;
      }
LABEL_10:
      v5 = 0;
      goto LABEL_11;
    }
LABEL_29:
    *(_BYTE *)(a1 + 8) &= ~1u;
    *(_DWORD *)a1 = 3;
    return a1;
  }
  if ( !*(_DWORD *)(a3 + 8) )
    goto LABEL_17;
LABEL_30:
  *(_BYTE *)(a1 + 8) &= ~1u;
  *(_DWORD *)a1 = 2;
  return a1;
}
