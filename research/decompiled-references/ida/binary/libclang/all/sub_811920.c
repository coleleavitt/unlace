unsigned __int64 __fastcall sub_811920(unsigned __int64 a1)
{
  unsigned __int16 v1; // ax
  bool v2; // cc
  unsigned __int64 v3; // rdx
  __int64 v5; // rax

  v1 = *(_WORD *)a1 & 0x1FF;
  v2 = v1 <= 0x15u;
  if ( v1 == 21 )
    goto LABEL_13;
LABEL_2:
  if ( v2 )
  {
    if ( v1 == 4 )
    {
      if ( *(_BYTE *)(a1 + 2) >> 3 != 12 )
        return a1;
      v3 = *(_QWORD *)(a1 + 16);
      v1 = *(_WORD *)v3 & 0x1FF;
      goto LABEL_14;
    }
    if ( v1 == 19 )
    {
      v3 = a1;
      if ( (*(_BYTE *)(a1 + 3) & 1) == 0 || *(char *)(a1 + 2) >= 0 )
        goto LABEL_11;
      v3 = *(_QWORD *)(a1 + 16);
      if ( !v3 )
      {
        v3 = a1;
        goto LABEL_11;
      }
      v1 = *(_WORD *)v3 & 0x1FF;
      if ( v1 > 0x4Fu )
        goto LABEL_15;
      goto LABEL_9;
    }
    if ( v1 != 9 )
      return a1;
    goto LABEL_31;
  }
  if ( v1 == 58 )
  {
    if ( (~*(_DWORD *)(a1 + 16) & 0x3FFF8000) == 0 )
      return a1;
    v3 = *(_QWORD *)(a1
                   + 8LL * (((*(_DWORD *)(a1 + 16) >> 15) & 0x7FFF) + (unsigned int)((*(_BYTE *)(a1 + 19) & 0x40) != 0))
                   + 32);
    v1 = *(_WORD *)v3 & 0x1FF;
    goto LABEL_14;
  }
  if ( v1 == 78 )
  {
    if ( ((**(_DWORD **)(a1 + 16) >> 14) & 0xC) != 0 )
      return a1;
    if ( !*(_BYTE *)(a1 + 48) )
    {
      v3 = *(_QWORD *)(a1 + 32);
      v1 = *(_WORD *)v3 & 0x1FF;
      goto LABEL_14;
    }
LABEL_13:
    while ( 1 )
    {
      v3 = *(_QWORD *)(a1 + 24);
      v1 = *(_WORD *)v3 & 0x1FF;
LABEL_14:
      if ( v1 <= 0x4Fu )
        break;
LABEL_15:
      if ( v1 <= 0x59u && ((*(_WORD *)(v3 + 2) >> 3) & 0x7F) == 4 )
        goto LABEL_17;
LABEL_11:
      if ( v3 == a1 )
        return a1;
      a1 = v3;
      v1 = *(_WORD *)v3 & 0x1FF;
      v2 = v1 <= 0x15u;
      if ( v1 != 21 )
        goto LABEL_2;
    }
LABEL_9:
    if ( v1 > 0x3Cu )
      goto LABEL_10;
    if ( v1 == 49 )
      goto LABEL_33;
    if ( v1 == 9 )
LABEL_17:
      v3 = *(_QWORD *)(v3 + 16);
    goto LABEL_11;
  }
  if ( v1 <= 0x4Fu )
  {
    v3 = a1;
    if ( v1 <= 0x3Cu )
    {
      if ( v1 != 49 )
        goto LABEL_11;
LABEL_33:
      v5 = *(_QWORD *)(v3 + 16);
      v3 = v5 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v5 & 4) != 0 )
        v3 = *(_QWORD *)(v3 + 40);
      goto LABEL_11;
    }
LABEL_10:
    if ( v1 <= 0x3Eu )
      goto LABEL_17;
    goto LABEL_11;
  }
  if ( v1 > 0x59u )
    return a1;
  if ( ((*(_WORD *)(a1 + 2) >> 3) & 0x7F) == 4 )
  {
LABEL_31:
    v3 = a1;
    goto LABEL_17;
  }
  return a1;
}

