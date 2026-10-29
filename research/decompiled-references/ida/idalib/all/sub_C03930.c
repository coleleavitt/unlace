__int64 __fastcall sub_C03930(unsigned __int64 a1, __int64 a2)
{
  int v2; // ebp
  unsigned __int64 i; // rdx
  unsigned __int64 v4; // rax
  __int16 v5; // ax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  unsigned __int64 v9; // r12
  __int16 v10; // ax
  __int64 v11; // rbx
  char v12; // al
  __int64 v13; // rbx
  __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rdi
  unsigned __int64 v17; // rbx
  __int64 v18; // rax
  int v19; // r12d
  unsigned __int64 v20; // rbx
  __int64 v21; // rdi
  __int64 v22; // rdx
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8

  if ( !a1 )
LABEL_58:
    BUG();
  v2 = 0;
LABEL_3:
  for ( i = a1; ; i = v4 )
  {
    v5 = *(_WORD *)i & 0x1FF;
    switch ( v5 )
    {
      case 20:
LABEL_4:
        v4 = *(_QWORD *)(i + 24);
        goto LABEL_5;
      case 4:
        if ( *(_BYTE *)(i + 2) >> 3 != 12 )
          goto LABEL_10;
        v4 = *(_QWORD *)(i + 16);
        goto LABEL_5;
      case 57:
        a2 = *(unsigned int *)(i + 16);
        if ( (*(_DWORD *)(i + 16) & 0x3FFF8000) == 0x3FFF8000 )
          goto LABEL_10;
        v4 = *(_QWORD *)(i + 8LL * (((*(_BYTE *)(i + 19) & 0x40) != 0) + (((unsigned int)a2 >> 15) & 0x7FFF)) + 32);
        goto LABEL_5;
    }
    if ( v5 != 77 )
      break;
    if ( ((**(_DWORD **)(i + 16) >> 14) & 0xC) != 0 )
      goto LABEL_10;
    if ( (*(_BYTE *)(i + 2) & 8) != 0 )
      goto LABEL_4;
    v4 = *(_QWORD *)(i + 32);
LABEL_5:
    if ( i == v4 )
    {
      v5 = *(_WORD *)i & 0x1FF;
LABEL_43:
      if ( v5 != 124 )
        goto LABEL_10;
      a1 = *(_QWORD *)(i + 24);
      ++v2;
      if ( !a1 )
        goto LABEL_58;
      goto LABEL_3;
    }
  }
  if ( v5 != 18 )
    goto LABEL_43;
  if ( (*(_QWORD *)i & 0x1000000) != 0 && (BYTE2(*(_QWORD *)i) & 0x80u) != 0 )
  {
    v4 = *(_QWORD *)(i + 16);
    if ( v4 )
      goto LABEL_5;
  }
LABEL_10:
  while ( 1 )
  {
    v9 = sub_BFBAE0(a1);
    v10 = *(_WORD *)v9 & 0x1FF;
    if ( v10 != 123 )
      break;
    a1 = *(_QWORD *)(v9 + 24);
    v11 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    v12 = *(_BYTE *)(v11 + 16);
    if ( v12 == 13 )
    {
      if ( (((*(_WORD *)(v11 + 18) >> 3) + 76) & 0x1FFu) > 0x13 )
        goto LABEL_13;
LABEL_48:
      a1 = *(_QWORD *)(v9 + 16);
      goto LABEL_13;
    }
    if ( v12 != 47 )
    {
      if ( v12 != 10 )
        goto LABEL_13;
      goto LABEL_48;
    }
    v24 = sub_F60F10(
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL),
            a2,
            v6,
            v7,
            v8);
    if ( ((*(_BYTE *)(v24 + 74) & 1) != 0 || (*(_QWORD *)(v24 + 128) & 0xFFFFFFFFFFFFFFF8LL) != 0)
      && *(char *)(sub_F60F10(v11, a2, v25, v26, v27) + 76) >= 0 )
    {
      a1 = *(_QWORD *)(v9 + 16);
    }
    else
    {
      a1 = *(_QWORD *)(v9 + 24);
    }
LABEL_13:
    ++v2;
  }
  v13 = *(_QWORD *)(v9 + 8);
  if ( v10 == 71 )
  {
    v14 = *(_QWORD *)(v9 + 16);
    if ( (*(_BYTE *)(v14 + 28) & 0x7F) == 0x2B )
    {
      v13 = sub_B74600(v14);
      v16 = *(_QWORD *)(v13 & 0xFFFFFFFFFFFFFFF0LL);
      if ( (unsigned int)*(unsigned __int8 *)(v16 + 16) - 43 <= 1
        || (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v16 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 43 <= 1
        && (v16 = sub_F63050(v16, a2, v15, v7)) != 0 )
      {
        while ( 1 )
        {
          v13 = *(_QWORD *)(v16 + 32);
          if ( (*(_BYTE *)(v16 + 18) & 0x10) == 0 )
            break;
          while ( 1 )
          {
            v17 = v13 & 0xFFFFFFFFFFFFFFF0LL;
            v16 = *(_QWORD *)v17;
            if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)v17 + 16LL) - 43 <= 1 )
              break;
            v18 = sub_F63050(v16, a2, v15, v7);
            v13 = *(_QWORD *)(v18 + 32);
            if ( (*(_BYTE *)(v18 + 18) & 0x10) == 0 )
              goto LABEL_28;
          }
        }
      }
    }
  }
LABEL_28:
  if ( !v2 )
    return v13;
  v19 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      v20 = v13 & 0xFFFFFFFFFFFFFFF0LL;
      v21 = *(_QWORD *)v20;
      v22 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v20 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) & 0xF7;
      if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v20 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) & 0xF7) != 0x22 )
        break;
      ++v19;
      v13 = sub_F68450(v21, a2, v22, v7, v8);
      if ( v2 == v19 )
        return v13;
    }
    if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v20 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 2) > 4u )
      break;
    if ( (unsigned __int8)(*(_BYTE *)(v21 + 16) - 2) > 4u )
      v21 = sub_F63050(v21, a2, v22, v7);
    ++v19;
    v13 = *(_QWORD *)(v21 + 32);
    if ( v2 == v19 )
      return v13;
  }
  return 0;
}
