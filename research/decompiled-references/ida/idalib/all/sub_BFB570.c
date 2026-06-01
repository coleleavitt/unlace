__int64 __fastcall sub_BFB570(__int64 a1, __int64 a2, __int64 a3, _BOOL8 a4)
{
  __int16 v4; // ax
  __int64 v6; // rax

  if ( !a1 )
    BUG();
  while ( 1 )
  {
    v4 = *(_WORD *)a1 & 0x1FF;
    switch ( v4 )
    {
      case 20:
LABEL_3:
        a3 = *(_QWORD *)(a1 + 24);
        goto LABEL_4;
      case 4:
        if ( *(_BYTE *)(a1 + 2) >> 3 != 12 )
          return 0;
        a3 = *(_QWORD *)(a1 + 16);
        goto LABEL_4;
      case 57:
        if ( (*(_DWORD *)(a1 + 16) & 0x3FFF8000) == 0x3FFF8000 )
          return 0;
        a2 = *(_DWORD *)(a1 + 16) >> 15;
        a4 = (*(_BYTE *)(a1 + 19) & 0x40) != 0;
        a3 = *(_QWORD *)(a1 + 8LL * ((unsigned int)a4 + ((*(_DWORD *)(a1 + 16) >> 15) & 0x7FFF)) + 32);
        goto LABEL_4;
    }
    if ( v4 != 77 )
      break;
    if ( ((**(_DWORD **)(a1 + 16) >> 14) & 0xC) != 0 )
      return 0;
    if ( (*(_BYTE *)(a1 + 2) & 8) != 0 )
      goto LABEL_3;
    a3 = *(_QWORD *)(a1 + 32);
LABEL_4:
    if ( a3 == a1 )
      goto LABEL_23;
    a1 = a3;
  }
  if ( v4 == 18 )
  {
    if ( (*(_QWORD *)a1 & 0x1000000) == 0 )
      return 0;
    if ( (BYTE2(*(_QWORD *)a1) & 0x80u) == 0 )
      return 0;
    a3 = *(_QWORD *)(a1 + 16);
    if ( !a3 )
      return 0;
    goto LABEL_4;
  }
LABEL_23:
  if ( v4 == 46 )
    return *(_QWORD *)(*(_QWORD *)(a1 + 24) + 48LL);
  if ( ((v4 + 394) & 0x1FFu) > 1 )
    return 0;
  v6 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v6 + 16) == 33 )
    return *(_QWORD *)(v6 + 32);
  else
    return *(_QWORD *)(sub_F63050(
                         *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL) & 0xFFFFFFFFFFFFFFF0LL),
                         a2,
                         a3,
                         a4)
                     + 32);
}
