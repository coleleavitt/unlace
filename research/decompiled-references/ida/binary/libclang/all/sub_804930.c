unsigned __int64 __fastcall sub_804930(unsigned __int64 a1)
{
  unsigned __int16 v2; // ax
  unsigned __int64 v4; // rsi
  int v5; // ecx
  __int64 v6; // rax

  while ( 1 )
  {
    v2 = *(_WORD *)a1 & 0x1FF;
    if ( v2 == 21 )
    {
      while ( 1 )
      {
        v4 = a1;
        a1 = *(_QWORD *)(a1 + 24);
LABEL_22:
        v2 = *(_WORD *)a1 & 0x1FF;
        if ( ((v2 + 432) & 0x1FFu) <= 9 )
          break;
LABEL_17:
        if ( v4 == a1 )
          return a1;
        if ( v2 != 21 )
          goto LABEL_2;
      }
LABEL_14:
      v5 = (*(_WORD *)(a1 + 2) >> 3) & 0x7F;
      if ( (unsigned int)(v5 - 7) <= 1 || v5 == 5 )
      {
        a1 = *(_QWORD *)(a1 + 16);
        v2 = *(_WORD *)a1 & 0x1FF;
        goto LABEL_17;
      }
      if ( a1 == v4 )
        return a1;
    }
LABEL_2:
    if ( v2 <= 0x15u )
    {
      if ( v2 == 4 )
      {
        if ( *(_BYTE *)(a1 + 2) >> 3 == 12 )
        {
          v4 = a1;
          a1 = *(_QWORD *)(a1 + 16);
          goto LABEL_22;
        }
      }
      else if ( v2 == 19 && (*(_BYTE *)(a1 + 3) & 1) != 0 && *(char *)(a1 + 2) < 0 && *(_QWORD *)(a1 + 16) )
      {
        v4 = a1;
        a1 = *(_QWORD *)(a1 + 16);
        goto LABEL_22;
      }
      return a1;
    }
    if ( v2 == 58 )
    {
      if ( (~*(_DWORD *)(a1 + 16) & 0x3FFF8000) != 0 )
      {
        v4 = a1;
        a1 = *(_QWORD *)(a1
                       + 8LL
                       * (((*(_DWORD *)(a1 + 16) >> 15) & 0x7FFF) + (unsigned int)((*(_BYTE *)(a1 + 19) & 0x40) != 0))
                       + 32);
        goto LABEL_22;
      }
      return a1;
    }
    if ( v2 == 78 )
      break;
    if ( ((v2 + 432) & 0x1FFu) <= 9 )
    {
      v4 = a1;
      goto LABEL_14;
    }
    if ( v2 <= 0x76u )
    {
      if ( v2 != 49 )
        return a1;
      v6 = *(_QWORD *)(a1 + 16);
      a1 = v6 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v6 & 4) != 0 )
        a1 = *(_QWORD *)(a1 + 40);
    }
    else
    {
      if ( v2 > 0x78u || ((*(_WORD *)(a1 + 2) >> 3) & 0x3F) != 0x20 )
        return a1;
      a1 = *(_QWORD *)(a1 + 24);
    }
    if ( !a1 )
      BUG();
  }
  if ( ((**(_DWORD **)(a1 + 16) >> 14) & 0xC) == 0 )
  {
    v4 = a1;
    if ( *(_BYTE *)(a1 + 48) )
      a1 = *(_QWORD *)(a1 + 24);
    else
      a1 = *(_QWORD *)(a1 + 32);
    goto LABEL_22;
  }
  return a1;
}

