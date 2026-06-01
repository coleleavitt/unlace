bool __fastcall sub_BF76D0(__int64 a1, _QWORD *a2, int a3, char a4)
{
  __int64 v5; // rsi
  __int16 v6; // ax
  unsigned __int64 v7; // rsi

  while ( 1 )
  {
    v6 = *(_WORD *)a1 & 0x1FF;
    switch ( v6 )
    {
      case 20:
LABEL_2:
        v5 = *(_QWORD *)(a1 + 24);
        goto LABEL_3;
      case 4:
        if ( *(_BYTE *)(a1 + 2) >> 3 != 12 )
          goto LABEL_8;
        v5 = *(_QWORD *)(a1 + 16);
        goto LABEL_3;
      case 57:
        if ( (*(_DWORD *)(a1 + 16) & 0x3FFF8000) == 0x3FFF8000 )
          goto LABEL_8;
        v5 = *(_QWORD *)(a1 + 8LL * (((*(_BYTE *)(a1 + 19) & 0x40) != 0) + ((*(_DWORD *)(a1 + 16) >> 15) & 0x7FFFu)) + 32);
        goto LABEL_3;
    }
    if ( v6 != 77 )
      break;
    if ( ((**(_DWORD **)(a1 + 16) >> 14) & 0xC) != 0 )
      goto LABEL_8;
    if ( (*(_BYTE *)(a1 + 2) & 8) != 0 )
      goto LABEL_2;
    v5 = *(_QWORD *)(a1 + 32);
LABEL_3:
    if ( v5 == a1 )
      goto LABEL_16;
    a1 = v5;
  }
  if ( v6 == 18 )
  {
    if ( (*(_QWORD *)a1 & 0x1000000) == 0 )
      goto LABEL_8;
    if ( (BYTE2(*(_QWORD *)a1) & 0x80u) == 0 )
      goto LABEL_8;
    v5 = *(_QWORD *)(a1 + 16);
    if ( !v5 )
      goto LABEL_8;
    goto LABEL_3;
  }
LABEL_16:
  if ( v6 == 46 )
  {
    v7 = *(_QWORD *)(a1 + 24);
  }
  else
  {
    if ( v6 != 71 && v6 != 34 )
    {
LABEL_8:
      v7 = 0;
      return sub_B8F530(a2, v7, *(_QWORD *)(a1 + 8), a3, a4);
    }
    v7 = *(_QWORD *)(a1 + 16);
  }
  return sub_B8F530(a2, v7, *(_QWORD *)(a1 + 8), a3, a4);
}
