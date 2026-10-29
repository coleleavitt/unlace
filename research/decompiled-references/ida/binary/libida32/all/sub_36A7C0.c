__int64 __fastcall sub_36A7C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rax
  _BYTE *v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v9; // r8

  v4 = *(_QWORD *)(a1 + 16);
  if ( !v4 )
    return 0;
  while ( *(_QWORD *)(a1 + 8) != a3 )
  {
    v4 = *(_QWORD *)(a1 + 48);
    a1 += 32;
    if ( !v4 )
      return 0;
  }
  if ( *(_BYTE *)a1 )
    return 0;
  v5 = (_BYTE *)(a3 + a2);
  v6 = *(_QWORD *)(a1 + 24);
  v7 = (unsigned int)a4;
  if ( !v6 )
  {
    if ( v4 != 4 )
    {
      if ( v4 <= 4 )
      {
        if ( v4 != 1 )
        {
          if ( v4 != 2 )
            goto LABEL_11;
          goto LABEL_19;
        }
LABEL_22:
        *v5 = v7;
        return 1;
      }
      if ( v4 != 8 )
      {
LABEL_11:
        if ( !under_debugger )
          interr(1329);
        BUG();
      }
LABEL_26:
      *(_QWORD *)v5 = v7;
      return 1;
    }
LABEL_24:
    *(_DWORD *)v5 = a4;
    return 1;
  }
  v9 = (unsigned int)v6 & (unsigned int)a4;
  if ( v4 == 4 )
  {
    LODWORD(a4) = v9 | *(_DWORD *)v5 & ~(_DWORD)v6;
    goto LABEL_24;
  }
  if ( v4 > 4 )
  {
    if ( v4 == 8 )
    {
      v7 = *(_QWORD *)v5 & ~v6 | v9;
      goto LABEL_26;
    }
LABEL_29:
    sub_36A7A0(a1, v5, v6, a4, v9);
  }
  if ( v4 == 1 )
  {
    v7 = (unsigned __int8)*v5 & ~*(_QWORD *)(a1 + 24) | v9;
    goto LABEL_22;
  }
  if ( v4 != 2 )
    goto LABEL_29;
  LOWORD(v7) = ~(_WORD)v6 & *(_WORD *)v5 | v6 & a4;
LABEL_19:
  *(_WORD *)v5 = v7;
  return 1;
}

