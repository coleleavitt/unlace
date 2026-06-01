char __fastcall sub_812140(unsigned __int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // rax
  char result; // al
  unsigned __int16 v6; // ax
  _WORD *v7; // rdx
  unsigned __int16 v8; // ax
  unsigned __int16 v9; // dx

  v3 = a1;
  v4 = *(_QWORD *)(a3 + 48);
  if ( !v4 )
    v4 = sub_6E8D60(a2, a3);
  if ( *(_QWORD *)(*(_QWORD *)&byte_8[*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL) != *(_QWORD *)(*(_QWORD *)&byte_8[v4 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL) )
    return 0;
  v6 = *(_WORD *)a1 & 0x1FF;
  if ( v6 == 49 )
  {
    v3 = *(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(a1 + 16) & 4) != 0 )
      v3 = *(_QWORD *)(v3 + 40);
    v6 = *(_WORD *)v3 & 0x1FF;
  }
  if ( v6 != 80 )
  {
LABEL_13:
    if ( v6 == 117 )
    {
      do
      {
        v3 = *(_QWORD *)(v3 + 24);
        v6 = *(_WORD *)v3 & 0x1FF;
      }
      while ( v6 == 117 );
      if ( v6 == 80 )
        goto LABEL_16;
    }
LABEL_18:
    while ( v6 != 21 )
    {
      if ( v6 > 0x15u )
      {
        if ( v6 == 58 )
        {
          if ( (~*(_DWORD *)(v3 + 16) & 0x3FFF8000) == 0 )
            goto LABEL_25;
          v7 = *(_WORD **)(v3
                         + 8LL
                         * (((*(_DWORD *)(v3 + 16) >> 15) & 0x7FFF) + (unsigned int)((*(_BYTE *)(v3 + 19) & 0x40) != 0))
                         + 32);
        }
        else
        {
          if ( v6 != 78 || ((**(_DWORD **)(v3 + 16) >> 14) & 0xC) != 0 )
            goto LABEL_25;
          if ( *(_BYTE *)(v3 + 48) )
            break;
          v7 = *(_WORD **)(v3 + 32);
        }
      }
      else if ( v6 == 4 )
      {
        if ( *(_BYTE *)(v3 + 2) >> 3 != 12 )
          goto LABEL_25;
        v7 = *(_WORD **)(v3 + 16);
      }
      else
      {
        if ( v6 != 19 )
          goto LABEL_25;
        if ( (*(_BYTE *)(v3 + 3) & 1) == 0 )
          goto LABEL_25;
        if ( *(char *)(v3 + 2) >= 0 )
          goto LABEL_25;
        v7 = *(_WORD **)(v3 + 16);
        if ( !v7 )
          goto LABEL_25;
      }
LABEL_36:
      if ( v7 == (_WORD *)v3 )
        goto LABEL_25;
      v3 = (unsigned __int64)v7;
      v6 = *v7 & 0x1FF;
    }
    v7 = *(_WORD **)(v3 + 24);
    goto LABEL_36;
  }
  while ( ((*(_WORD *)(v3 + 2) >> 3) & 0x7F) == 5 )
  {
    v3 = *(_QWORD *)(v3 + 16);
    v6 = *(_WORD *)v3 & 0x1FF;
    if ( v6 != 80 )
      goto LABEL_13;
  }
LABEL_16:
  while ( ((*(_WORD *)(v3 + 2) >> 3) & 0x7F) == 5 )
  {
    v3 = *(_QWORD *)(v3 + 16);
    v6 = *(_WORD *)v3 & 0x1FF;
    if ( v6 != 80 )
      goto LABEL_18;
  }
LABEL_25:
  v8 = sub_81E730(v3, a2, 0);
  v9 = *(_WORD *)v3 & 0x1FF;
  if ( v8 <= 1u )
  {
    if ( v9 == 33 )
      return v9 != 27;
    return 0;
  }
  if ( v9 == 80 )
  {
    if ( ((*(_WORD *)(v3 + 2) >> 3) & 0x7Fu) - 7 > 1 )
      return v9 != 27;
    return 0;
  }
  if ( v9 == 47 )
    return 0;
  if ( v9 <= 0x76u )
    return v9 != 27;
  result = 1;
  if ( v9 <= 0x78u )
    return ((*(_WORD *)(v3 + 2) >> 3) & 0x3Fu) > 1;
  return result;
}

