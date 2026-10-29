__int64 __fastcall sub_81C470(unsigned __int64 a1, __int64 a2)
{
  int v2; // ebp
  unsigned __int64 i; // rdx
  unsigned __int64 v4; // rax
  unsigned __int16 v5; // ax
  unsigned __int64 v6; // r12
  __int16 v7; // ax
  __int64 v8; // rbx
  char v9; // al
  __int64 v10; // rbx
  __int64 v11; // rdi
  __int64 v12; // rdi
  int v13; // r12d
  unsigned __int64 v14; // rbx
  __int64 v15; // rdi
  __int64 v17; // rax

  v2 = 0;
LABEL_2:
  if ( !a1 )
    BUG();
  for ( i = a1; ; i = v4 )
  {
    v5 = *(_WORD *)i & 0x1FF;
    if ( v5 == 21 )
      goto LABEL_21;
    if ( v5 <= 0x15u )
      break;
    switch ( v5 )
    {
      case ':':
        if ( (~*(_DWORD *)(i + 16) & 0x3FFF8000) == 0 )
          goto LABEL_16;
        v4 = *(_QWORD *)(i
                       + 8LL
                       * (((*(_DWORD *)(i + 16) >> 15) & 0x7FFF) + (unsigned int)((*(_BYTE *)(i + 19) & 0x40) != 0))
                       + 32);
        break;
      case 'N':
        if ( ((**(_DWORD **)(i + 16) >> 14) & 0xC) != 0 )
          goto LABEL_16;
        if ( *(_BYTE *)(i + 48) )
        {
LABEL_21:
          v4 = *(_QWORD *)(i + 24);
          break;
        }
        v4 = *(_QWORD *)(i + 32);
        break;
      case '}':
        a1 = *(_QWORD *)(i + 24);
        ++v2;
        goto LABEL_2;
      default:
        goto LABEL_16;
    }
LABEL_9:
    if ( v4 == i )
      goto LABEL_16;
  }
  if ( v5 == 4 )
  {
    if ( *(_BYTE *)(i + 2) >> 3 != 12 )
      goto LABEL_16;
    v4 = *(_QWORD *)(i + 16);
    goto LABEL_9;
  }
  if ( v5 == 19 && (*(_BYTE *)(i + 3) & 1) != 0 && *(char *)(i + 2) < 0 )
  {
    v4 = *(_QWORD *)(i + 16);
    if ( v4 )
      goto LABEL_9;
  }
LABEL_16:
  while ( 2 )
  {
    v6 = sub_80F310(a1);
    v7 = *(_WORD *)v6 & 0x1FF;
    if ( v7 == 124 )
    {
      a1 = *(_QWORD *)(v6 + 24);
      v8 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
      v9 = *(_BYTE *)(v8 + 16);
      switch ( v9 )
      {
        case 13:
          if ( (((*(_WORD *)(v8 + 18) >> 3) + 77) & 0x1FFu) > 0x13 )
            goto LABEL_19;
          break;
        case 46:
          v17 = sub_B14A40(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                     & 0xFFFFFFFFFFFFFFF0LL));
          if ( ((*(_BYTE *)(v17 + 74) & 1) != 0 || *(_QWORD *)(v17 + 128) > 7u) && *(char *)(sub_B14A40(v8) + 76) >= 0 )
            a1 = *(_QWORD *)(v6 + 16);
          else
            a1 = *(_QWORD *)(v6 + 24);
          goto LABEL_19;
        case 10:
          break;
        default:
LABEL_19:
          ++v2;
          continue;
      }
      a1 = *(_QWORD *)(v6 + 16);
      goto LABEL_19;
    }
    break;
  }
  v10 = *(_QWORD *)(v6 + 8);
  if ( v7 == 72 )
  {
    v11 = *(_QWORD *)(v6 + 16);
    if ( (*(_BYTE *)(v11 + 28) & 0x7F) == 0x29 )
    {
      v10 = sub_77D460(v11);
      v12 = *(_QWORD *)(v10 & 0xFFFFFFFFFFFFFFF0LL);
      if ( (unsigned int)*(unsigned __int8 *)(v12 + 16) - 42 <= 1
        || (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v12 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 42 <= 1
        && (v12 = sub_B0D320(v12)) != 0 )
      {
        while ( (*(_BYTE *)(v12 + 18) & 0x10) != 0 )
        {
          while ( 1 )
          {
            v12 = *(_QWORD *)(*(_QWORD *)(v12 + 32) & 0xFFFFFFFFFFFFFFF0LL);
            if ( (unsigned int)*(unsigned __int8 *)(v12 + 16) - 42 <= 1 )
              break;
            v12 = sub_B0D320(v12);
            if ( (*(_BYTE *)(v12 + 18) & 0x10) == 0 )
              goto LABEL_32;
          }
        }
LABEL_32:
        v10 = *(_QWORD *)(v12 + 32);
      }
    }
  }
  if ( !v2 )
    return v10;
  v13 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      v14 = v10 & 0xFFFFFFFFFFFFFFF0LL;
      v15 = *(_QWORD *)v14;
      if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v14 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) & 0xF7) != 0x21 )
        break;
      ++v13;
      v10 = sub_B167E0(v15, a2);
      if ( v2 == v13 )
        return v10;
    }
    if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v14 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 2) > 4u )
      break;
    if ( (unsigned __int8)(*(_BYTE *)(v15 + 16) - 2) > 4u )
      v15 = sub_B0D320(v15);
    ++v13;
    v10 = *(_QWORD *)(v15 + 32);
    if ( v2 == v13 )
      return v10;
  }
  return 0;
}

