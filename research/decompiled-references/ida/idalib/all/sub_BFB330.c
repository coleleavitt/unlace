bool __fastcall sub_BFB330(__int64 a1)
{
  __int64 v2; // rax
  bool result; // al
  __int64 v4; // rcx
  __int16 v5; // dx
  unsigned __int8 v6; // al
  __int64 v7; // rdx

LABEL_1:
  if ( (*(_BYTE *)(a1 + 1) & 6) == 0 )
    return 0;
LABEL_2:
  v2 = *(_QWORD *)(a1 + 8);
  if ( (v2 & 4) == 0 && (byte_8[v2 & 0xFFFFFFFFFFFFFFF0LL] & 4) == 0 )
    return 0;
  while ( 1 )
  {
    v5 = *(_WORD *)a1 & 0x1FF;
    switch ( v5 )
    {
      case 20:
LABEL_7:
        v4 = *(_QWORD *)(a1 + 24);
        goto LABEL_8;
      case 4:
        v6 = *(_BYTE *)(a1 + 2);
        if ( v6 >> 3 != 12 )
          return v6 >> 3 == 5;
        v4 = *(_QWORD *)(a1 + 16);
        goto LABEL_8;
      case 57:
        if ( (*(_DWORD *)(a1 + 16) & 0x3FFF8000) == 0x3FFF8000 )
          goto LABEL_20;
        v4 = *(_QWORD *)(a1 + 8LL * (((*(_BYTE *)(a1 + 19) & 0x40) != 0) + ((*(_DWORD *)(a1 + 16) >> 15) & 0x7FFFu)) + 32);
        goto LABEL_8;
    }
    if ( v5 != 77 )
      break;
    if ( ((**(_DWORD **)(a1 + 16) >> 14) & 0xC) != 0 )
      goto LABEL_20;
    if ( (*(_BYTE *)(a1 + 2) & 8) != 0 )
      goto LABEL_7;
    v4 = *(_QWORD *)(a1 + 32);
LABEL_8:
    if ( v4 == a1 )
    {
      result = v5 == 46 || v5 == 123 || v5 == 71;
      if ( result )
        return result;
      if ( v5 == 4 )
      {
        v6 = *(_BYTE *)(v4 + 2);
        return v6 >> 3 == 5;
      }
LABEL_20:
      if ( ((v5 + 394) & 0x1FFu) <= 1 )
      {
        if ( ((*(_WORD *)(a1 + 2) >> 3) & 0x3Fu) <= 1 )
          return 1;
        if ( ((*(_WORD *)(a1 + 2) >> 3) & 0x3F) != 0x20 )
          goto LABEL_41;
        a1 = *(_QWORD *)(a1 + 24);
        if ( (*(_BYTE *)(a1 + 1) & 6) == 0 )
          return 0;
        goto LABEL_2;
      }
      if ( v5 == 128 )
      {
        if ( !(unsigned __int8)sub_BFB330(*(_QWORD *)(a1 + 32)) )
          return 0;
        a1 = *(_QWORD *)(a1 + 40);
      }
      else
      {
        if ( v5 != 129 )
        {
          result = 1;
          if ( v5 == 34 )
            return result;
LABEL_41:
          if ( v5 == 17 )
            return ((**(_WORD **)(a1 + 16) + 484) & 0x1FB) == 0;
          return 0;
        }
        v7 = *(_QWORD *)(a1 + 40);
        if ( (*(_WORD *)v7 & 0x1FF) != 0x1A || !(unsigned __int8)sub_BFB330(*(_QWORD *)(v7 + 16)) )
          return 0;
        a1 = *(_QWORD *)(a1 + 48);
      }
      goto LABEL_1;
    }
    a1 = v4;
  }
  if ( v5 == 18 )
  {
    if ( (*(_QWORD *)a1 & 0x1000000) == 0 )
      goto LABEL_20;
    if ( (BYTE2(*(_QWORD *)a1) & 0x80u) == 0 )
      goto LABEL_20;
    v4 = *(_QWORD *)(a1 + 16);
    if ( !v4 )
      goto LABEL_20;
    goto LABEL_8;
  }
  result = v5 == 46 || v5 == 71 || v5 == 123;
  if ( !result )
    goto LABEL_20;
  return result;
}
