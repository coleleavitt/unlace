__int64 __fastcall sub_80ED30(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  unsigned __int64 v3; // rbx
  __int64 v4; // rdi
  char v5; // al
  __int64 v7; // rdx
  char v8; // al
  unsigned __int16 v9; // ax
  __int64 v10; // rdx
  __int16 v11; // ax
  __int64 v12; // rax
  unsigned __int16 v13; // ax
  __int64 v14; // rdx
  unsigned __int16 v15; // ax
  __int64 v16; // rax

  v2 = *(_QWORD *)(*(unsigned __int8 *)(a1 + 3) + a1);
  v3 = *(_QWORD *)(v2 + 8) & 0xFFFFFFFFFFFFFFF0LL;
  v4 = *(_QWORD *)v3;
  v5 = *(_BYTE *)(*(_QWORD *)v3 + 16LL);
  if ( v5 == 41 )
    goto LABEL_2;
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v4 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 41 )
  {
    v4 = sub_B0D320(v4);
    if ( v4 )
      goto LABEL_2;
    v4 = *(_QWORD *)v3;
    v5 = *(_BYTE *)(*(_QWORD *)v3 + 16LL);
  }
  if ( v5 == 11 )
    goto LABEL_2;
  v7 = *(_QWORD *)(*(_QWORD *)(v4 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  v8 = *(_BYTE *)(v7 + 16);
  if ( v8 != 11 )
    goto LABEL_13;
  v4 = sub_B0D320(v4);
  if ( v4 )
  {
LABEL_2:
    v4 = *(_QWORD *)(*(_QWORD *)(v4 + 32) & 0xFFFFFFFFFFFFFFF0LL);
LABEL_3:
    if ( (unsigned int)*(unsigned __int8 *)(v4 + 16) - 25 > 1 )
      v4 = sub_B0D320(v4);
    return *(_QWORD *)(v4 + 24);
  }
  v4 = *(_QWORD *)v3;
  v7 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v3 + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  v8 = *(_BYTE *)(v7 + 16);
LABEL_13:
  if ( v8 != 13 )
  {
    if ( v8 == 47 || (*(_BYTE *)(v4 + 17) & 4) != 0 )
      return *(_QWORD *)(a2 + 18912);
    goto LABEL_3;
  }
  v9 = *(_WORD *)(v7 + 18);
  v10 = v2;
  v11 = (v9 >> 3) & 0x1FF;
  if ( v11 != 498 )
  {
    if ( (*(_BYTE *)(v4 + 17) & 4) != 0 || v11 == 497 )
      return *(_QWORD *)(a2 + 18912);
    goto LABEL_3;
  }
  while ( 1 )
  {
    v13 = *(_WORD *)v10 & 0x1FF;
    if ( v13 == 21 )
    {
LABEL_47:
      v12 = *(_QWORD *)(v10 + 24);
      goto LABEL_23;
    }
    if ( v13 <= 0x15u )
    {
      if ( v13 == 4 )
      {
        if ( *(_BYTE *)(v10 + 2) >> 3 != 12 )
          goto LABEL_30;
        v12 = *(_QWORD *)(v10 + 16);
      }
      else
      {
        if ( v13 != 19 )
          goto LABEL_30;
        if ( (*(_BYTE *)(v10 + 3) & 1) == 0 )
          goto LABEL_30;
        if ( *(char *)(v10 + 2) >= 0 )
          goto LABEL_30;
        v12 = *(_QWORD *)(v10 + 16);
        if ( !v12 )
          goto LABEL_30;
      }
      goto LABEL_23;
    }
    if ( v13 == 58 )
    {
      if ( (~*(_DWORD *)(v10 + 16) & 0x3FFF8000) == 0 )
        goto LABEL_30;
      v12 = *(_QWORD *)(v10
                      + 8LL
                      * (((*(_DWORD *)(v10 + 16) >> 15) & 0x7FFF) + (unsigned int)((*(_BYTE *)(v10 + 19) & 0x40) != 0))
                      + 32);
      goto LABEL_23;
    }
    if ( v13 != 78 )
      break;
    if ( ((**(_DWORD **)(v10 + 16) >> 14) & 0xC) != 0 )
      goto LABEL_30;
    if ( *(_BYTE *)(v10 + 48) )
      goto LABEL_47;
    v12 = *(_QWORD *)(v10 + 32);
LABEL_23:
    if ( v12 == v10 )
      goto LABEL_30;
    v10 = v12;
  }
  if ( v13 == 103 )
    return *(_QWORD *)(a2 + 18472);
LABEL_30:
  v14 = v2;
  while ( 2 )
  {
    v15 = *(_WORD *)v14 & 0x1FF;
    if ( v15 == 21 )
    {
LABEL_52:
      v16 = *(_QWORD *)(v14 + 24);
      goto LABEL_45;
    }
    if ( v15 > 0x15u )
    {
      if ( v15 == 58 )
      {
        if ( (~*(_DWORD *)(v14 + 16) & 0x3FFF8000) == 0 )
          goto LABEL_36;
        v16 = *(_QWORD *)(v14
                        + 8LL
                        * (((*(_DWORD *)(v14 + 16) >> 15) & 0x7FFF) + (unsigned int)((*(_BYTE *)(v14 + 19) & 0x40) != 0))
                        + 32);
        goto LABEL_45;
      }
      if ( v15 != 78 )
        goto LABEL_61;
      if ( ((**(_DWORD **)(v14 + 16) >> 14) & 0xC) != 0 )
        goto LABEL_36;
      if ( !*(_BYTE *)(v14 + 48) )
      {
        v16 = *(_QWORD *)(v14 + 32);
        goto LABEL_45;
      }
      goto LABEL_52;
    }
    if ( v15 == 4 )
    {
      if ( *(_BYTE *)(v14 + 2) >> 3 != 12 )
        goto LABEL_36;
      v16 = *(_QWORD *)(v14 + 16);
    }
    else
    {
      if ( v15 != 19 )
        goto LABEL_36;
      if ( (*(_BYTE *)(v14 + 3) & 1) == 0 )
        goto LABEL_36;
      if ( *(char *)(v14 + 2) >= 0 )
        goto LABEL_36;
      v16 = *(_QWORD *)(v14 + 16);
      if ( !v16 )
        goto LABEL_36;
    }
LABEL_45:
    if ( v14 != v16 )
    {
      v14 = v16;
      continue;
    }
    break;
  }
  v15 = *(_WORD *)v14 & 0x1FF;
LABEL_61:
  if ( v15 != 24 )
  {
LABEL_36:
    v4 = *(_QWORD *)(sub_80EBF0(v2) & 0xFFFFFFFFFFFFFFF0LL);
    goto LABEL_3;
  }
  return *(_QWORD *)(a2 + 18912);
}

