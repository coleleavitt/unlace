bool __fastcall sub_BFF300(unsigned __int16 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned __int16 *i; // rbx
  unsigned __int16 *v6; // rax
  __int64 v7; // rdx
  __int16 v8; // ax
  __int64 v9; // rcx
  __int64 v10; // rdi
  char v11; // al
  __int64 v13; // rax
  __int16 v14; // dx
  char v15; // al
  unsigned int v16; // ebp
  __int64 v17; // rax
  __int64 v18; // rbx
  char v19; // dl
  __int64 v20; // rax
  __int16 v21; // cx
  __int64 v22; // rax

  while ( 2 )
  {
    for ( i = a1; ; i = v6 )
    {
      v7 = *i;
      v8 = *i & 0x1FF;
      switch ( v8 )
      {
        case 20:
LABEL_2:
          v6 = *((unsigned __int16 **)i + 3);
          goto LABEL_3;
        case 4:
          if ( *((_BYTE *)i + 2) >> 3 != 12 )
            goto LABEL_8;
          v6 = *((unsigned __int16 **)i + 2);
          goto LABEL_3;
        case 57:
          if ( (*((_DWORD *)i + 4) & 0x3FFF8000) == 0x3FFF8000 )
            goto LABEL_8;
          v6 = *(unsigned __int16 **)&i[4 * ((*((_BYTE *)i + 19) & 0x40) != 0)
                                      + 16
                                      + 4 * ((*((_DWORD *)i + 4) >> 15) & 0x7FFF)];
          goto LABEL_3;
      }
      if ( v8 != 77 )
        break;
      if ( ((**((_DWORD **)i + 2) >> 14) & 0xC) != 0 )
        goto LABEL_8;
      if ( (i[1] & 8) != 0 )
        goto LABEL_2;
      v6 = *((unsigned __int16 **)i + 4);
LABEL_3:
      if ( v6 == i )
        goto LABEL_8;
    }
    if ( v8 == 18 && (*(_QWORD *)i & 0x1000000) != 0 && (BYTE2(*(_QWORD *)i) & 0x80u) != 0 )
    {
      v6 = *((unsigned __int16 **)i + 2);
      if ( v6 )
        goto LABEL_3;
    }
LABEL_8:
    v9 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)i + 1) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v9 + 16) == 13 )
    {
      v9 = *(unsigned __int16 *)(v9 + 18);
      LOWORD(v9) = ((unsigned __int16)v9 >> 3) & 0x1FF;
      if ( (_WORD)v9 == 436 )
        return 1;
    }
    v10 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)i + 1) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    v11 = *(_BYTE *)(v10 + 16);
    if ( v11 != 13 )
    {
      if ( v11 == 47 )
      {
        v13 = sub_F60F10(v10, a2, v7, v9, a5);
        if ( (*(_BYTE *)(v13 + 74) & 1) != 0 || (*(_QWORD *)(v13 + 128) & 0xFFFFFFFFFFFFFFF8LL) != 0 )
        {
          LOWORD(v7) = *i;
          goto LABEL_25;
        }
      }
      else if ( v11 == 10 )
      {
        goto LABEL_25;
      }
      return 0;
    }
    if ( (((*(_WORD *)(v10 + 18) >> 3) + 76) & 0x1FFu) > 0x13 )
      return 0;
LABEL_25:
    v14 = v7 & 0x1FF;
    if ( v14 != 4 )
    {
      if ( v14 == 79 )
        goto LABEL_35;
      if ( ((v14 + 394) & 0x1FFu) <= 1 )
      {
        v21 = (i[1] >> 3) & 0x3F;
        if ( ((i[1] >> 3) & 0x3Fu) > 0x20 )
          return 0;
        v22 = 1LL << v21;
        if ( ((1LL << v21) & 0x100200000LL) != 0 )
        {
          a1 = *((unsigned __int16 **)i + 3);
          a2 = (unsigned __int8)a2;
          continue;
        }
        if ( (v22 & 0x18FC00) == 0 )
        {
          if ( (v22 & 0x70000) != 0 )
          {
            v16 = (unsigned __int8)a2;
            if ( (unsigned __int8)sub_BFF300(*((_QWORD *)i + 2), (unsigned __int8)a2) )
            {
              a1 = *((unsigned __int16 **)i + 3);
              goto LABEL_42;
            }
          }
          return 0;
        }
      }
      else
      {
        if ( v14 == 128 )
        {
          v16 = (unsigned __int8)a2;
          if ( (unsigned __int8)sub_BFF300(*((_QWORD *)i + 4), (unsigned __int8)a2) )
          {
            a1 = *((unsigned __int16 **)i + 5);
LABEL_42:
            a2 = v16;
            continue;
          }
          return 0;
        }
        if ( v14 != 40 )
        {
          if ( v14 == 26 )
          {
LABEL_35:
            a1 = *((unsigned __int16 **)i + 2);
            a2 = (unsigned __int8)a2;
            continue;
          }
          v17 = sub_BFEF90((__int64)i);
          v18 = v17;
          if ( v17
            && !(_BYTE)a2
            && (unsigned __int8)sub_F65360(*(_QWORD *)(*(_QWORD *)(v17 + 48) & 0xFFFFFFFFFFFFFFF0LL)) )
          {
            v19 = *(_BYTE *)(v18 + 68);
            if ( (v19 & 1) == 0 )
              BUG();
            v20 = *(_QWORD *)(v18 + 72);
            if ( (v19 & 0xC) != 0xC && (v19 & 0xC) != 0 )
              v20 = *(_QWORD *)(v20 + 8);
            if ( (*(_DWORD *)v20 & 0x20000) == 0 )
              return (unsigned int)sub_B78170(v18) == 1;
          }
          return 0;
        }
      }
      return 1;
    }
    break;
  }
  v15 = *((_BYTE *)i + 2) >> 3;
  if ( v15 == 6 )
    goto LABEL_35;
  return v15 == 9;
}
