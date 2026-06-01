__int64 __fastcall sub_36E0E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rax
  _BYTE *v6; // rsi
  __int64 v7; // rdx

  while ( 1 )
  {
    v4 = *(_QWORD *)(a1 + 16);
    if ( !v4 )
      return 0;
    if ( *(_QWORD *)(a1 + 8) == a3 )
      break;
    a1 += 32;
  }
  if ( *(_BYTE *)a1 )
    return 0;
  v6 = (_BYTE *)(a3 + a2);
  v7 = *(_QWORD *)(a1 + 24);
  if ( !v7 )
  {
    if ( v4 != 4 )
    {
      if ( v4 <= 4 )
      {
        if ( v4 != 1 )
        {
          if ( v4 != 2 )
            goto LABEL_12;
          goto LABEL_19;
        }
LABEL_22:
        *v6 = a4;
        return 1;
      }
      if ( v4 != 8 )
      {
LABEL_12:
        if ( !under_debugger )
          interr(1329);
        BUG();
      }
LABEL_26:
      *(_QWORD *)v6 = a4;
      return 1;
    }
LABEL_24:
    *(_DWORD *)v6 = a4;
    return 1;
  }
  a4 &= v7;
  if ( v4 == 4 )
  {
    LODWORD(a4) = *(_DWORD *)v6 & ~(_DWORD)v7 | a4;
    goto LABEL_24;
  }
  if ( v4 > 4 )
  {
    if ( v4 == 8 )
    {
      a4 |= *(_QWORD *)v6 & ~v7;
      goto LABEL_26;
    }
LABEL_29:
    sub_36E0B0(a1, v6, v7, a4, 0);
  }
  if ( v4 == 1 )
  {
    a4 |= (unsigned __int8)*v6 & ~*(_QWORD *)(a1 + 24);
    goto LABEL_22;
  }
  if ( v4 != 2 )
    goto LABEL_29;
  LOWORD(a4) = ~(_WORD)v7 & *(_WORD *)v6 | a4;
LABEL_19:
  *(_WORD *)v6 = a4;
  return 1;
}
