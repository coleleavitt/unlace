__int64 __fastcall sub_BFBC70(unsigned __int64 a1)
{
  unsigned __int16 v1; // dx
  _WORD *v3; // rax

  while ( 1 )
  {
    v1 = *(_WORD *)a1 & 0x1FF;
    if ( v1 != 79 && ((v1 + 452) & 0x1FFu) > 1 )
      break;
    if ( *(_QWORD *)(a1 + 16) == a1 )
      break;
    a1 = *(_QWORD *)(a1 + 16);
  }
  if ( v1 == 71 )
    return *(_QWORD *)(a1 + 16);
  if ( v1 == 46 )
    return *(_QWORD *)(a1 + 24);
  while ( 1 )
  {
    switch ( v1 )
    {
      case 0x14u:
LABEL_11:
        v3 = *(_WORD **)(a1 + 24);
        goto LABEL_12;
      case 4u:
        if ( *(_BYTE *)(a1 + 2) >> 3 != 12 )
          goto LABEL_17;
        v3 = *(_WORD **)(a1 + 16);
        goto LABEL_12;
      case 0x39u:
        if ( (*(_DWORD *)(a1 + 16) & 0x3FFF8000) == 0x3FFF8000 )
          goto LABEL_17;
        v3 = *(_WORD **)(a1 + 8LL * (((*(_BYTE *)(a1 + 19) & 0x40) != 0) + ((*(_DWORD *)(a1 + 16) >> 15) & 0x7FFFu)) + 32);
        goto LABEL_12;
    }
    if ( v1 != 77 )
      break;
    if ( ((**(_DWORD **)(a1 + 16) >> 14) & 0xC) != 0 )
      goto LABEL_17;
    if ( (*(_BYTE *)(a1 + 2) & 8) != 0 )
      goto LABEL_11;
    v3 = *(_WORD **)(a1 + 32);
LABEL_12:
    if ( v3 == (_WORD *)a1 )
      goto LABEL_22;
    a1 = (unsigned __int64)v3;
    v1 = *v3 & 0x1FF;
  }
  if ( v1 == 18 )
  {
    if ( (*(_QWORD *)a1 & 0x1000000) == 0 )
      goto LABEL_17;
    if ( (BYTE2(*(_QWORD *)a1) & 0x80u) == 0 )
      goto LABEL_17;
    v3 = *(_WORD **)(a1 + 16);
    if ( !v3 )
      goto LABEL_17;
    goto LABEL_12;
  }
LABEL_22:
  while ( v1 == 8 )
  {
    a1 = sub_BFBAE0(*(_QWORD *)(a1 + 16));
    v1 = *(_WORD *)a1 & 0x1FF;
  }
LABEL_17:
  while ( 2 )
  {
    if ( v1 > 0x75u )
    {
      if ( v1 > 0x77u || ((*(_WORD *)(a1 + 2) >> 3) & 0x3Fu) > 1 )
        return 0;
      a1 = sub_BFBAE0(*(_QWORD *)(a1 + 24));
      goto LABEL_35;
    }
    switch ( v1 )
    {
      case 4u:
        if ( (((*(_BYTE *)(a1 + 2) >> 3) + 28) & 0x1Fu) > 2 )
          return 0;
        a1 = sub_BFBAE0(*(_QWORD *)(a1 + 16));
LABEL_35:
        v1 = *(_WORD *)a1 & 0x1FF;
        continue;
      case 0x47u:
        return *(_QWORD *)(a1 + 16);
      case 0x2Eu:
        return *(_QWORD *)(a1 + 24);
    }
  }
  if ( v1 != 117 )
    return 0;
  return *(_QWORD *)(a1 + 16);
}
