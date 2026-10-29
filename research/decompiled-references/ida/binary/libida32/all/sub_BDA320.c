bool __fastcall sub_BDA320(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rax
  __int16 v9; // ax
  _WORD *v10; // rdx
  bool v11; // cc
  __int16 v12; // ax
  __int16 v13; // ax

  v6 = a1;
  v7 = *(_QWORD *)(a3 + 48);
  if ( !v7 )
    v7 = sub_A56D30(a2, a3, a3, a4, a5, a6);
  if ( *(_QWORD *)(*(_QWORD *)&byte_8[*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL) != *(_QWORD *)(*(_QWORD *)&byte_8[v7 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL) )
    return 0;
  v9 = *(_WORD *)a1 & 0x1FF;
  if ( v9 == 48 )
  {
    v6 = *(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(a1 + 16) & 4) != 0 )
      v6 = *(_QWORD *)(v6 + 40);
    v9 = *(_WORD *)v6 & 0x1FF;
  }
  for ( ; v9 == 79; v9 = *(_WORD *)v6 & 0x1FF )
  {
    if ( ((*(_WORD *)(v6 + 2) >> 3) & 0x7F) != 5 )
      goto LABEL_15;
    v6 = *(_QWORD *)(v6 + 16);
  }
  if ( v9 != 116 )
    goto LABEL_21;
  do
  {
    v6 = *(_QWORD *)(v6 + 24);
    v9 = *(_WORD *)v6 & 0x1FF;
  }
  while ( v9 == 116 );
  if ( v9 != 79 )
    goto LABEL_21;
LABEL_15:
  while ( ((*(_WORD *)(v6 + 2) >> 3) & 0x7F) == 5 )
  {
    v6 = *(_QWORD *)(v6 + 16);
    v9 = *(_WORD *)v6 & 0x1FF;
    if ( v9 != 79 )
    {
      if ( v9 != 20 )
        goto LABEL_22;
LABEL_18:
      v10 = *(_WORD **)(v6 + 24);
      while ( v10 != (_WORD *)v6 )
      {
        v6 = (unsigned __int64)v10;
        v9 = *v10 & 0x1FF;
LABEL_21:
        if ( v9 == 20 )
          goto LABEL_18;
LABEL_22:
        switch ( v9 )
        {
          case 4:
            if ( *(_BYTE *)(v6 + 2) >> 3 != 12 )
              goto LABEL_24;
            v10 = *(_WORD **)(v6 + 16);
            break;
          case 57:
            if ( (*(_DWORD *)(v6 + 16) & 0x3FFF8000) == 0x3FFF8000 )
              goto LABEL_24;
            v10 = *(_WORD **)(v6
                            + 8LL * (((*(_BYTE *)(v6 + 19) & 0x40) != 0) + ((*(_DWORD *)(v6 + 16) >> 15) & 0x7FFFu))
                            + 32);
            break;
          case 77:
            if ( ((**(_DWORD **)(v6 + 16) >> 14) & 0xC) != 0 )
              goto LABEL_24;
            if ( (*(_BYTE *)(v6 + 2) & 8) != 0 )
              goto LABEL_18;
            v10 = *(_WORD **)(v6 + 32);
            break;
          case 18:
            if ( (*(_QWORD *)v6 & 0x1000000) == 0 )
              goto LABEL_24;
            if ( (BYTE2(*(_QWORD *)v6) & 0x80u) == 0 )
              goto LABEL_24;
            v10 = *(_WORD **)(v6 + 16);
            if ( !v10 )
              goto LABEL_24;
            break;
          default:
            goto LABEL_24;
        }
      }
      break;
    }
  }
LABEL_24:
  v11 = (unsigned __int16)sub_BEAE00(v6, a2, 0) <= 1u;
  v12 = *(_WORD *)v6;
  if ( !v11 )
  {
    v13 = v12 & 0x1FF;
    if ( v13 == 79 )
    {
      if ( ((*(_WORD *)(v6 + 2) >> 3) & 0x7Fu) - 7 > 1 )
        return v13 != 26;
    }
    else if ( v13 != 46 && (((v13 + 394) & 0x1FFu) > 1 || ((*(_WORD *)(v6 + 2) >> 3) & 0x3Fu) > 1) )
    {
      return v13 != 26;
    }
    return 0;
  }
  return (v12 & 0x1FF) == 0x20;
}

