char __fastcall sub_BFF660(_WORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int16 v6; // ax
  _WORD *v7; // rdx
  _WORD *v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rbp
  char v12; // al
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rdx

  while ( 2 )
  {
    v6 = *a1 & 0x1FF;
    while ( 1 )
    {
      switch ( v6 )
      {
        case 20:
          goto LABEL_2;
        case 4:
          if ( *((_BYTE *)a1 + 2) >> 3 != 12 )
            return 0;
          v7 = *((_WORD **)a1 + 2);
          v6 = *v7 & 0x1FF;
          goto LABEL_3;
        case 57:
          if ( (*((_DWORD *)a1 + 4) & 0x3FFF8000) == 0x3FFF8000 )
            return 0;
          a4 = (*((_DWORD *)a1 + 4) >> 15) & 0x7FFF;
          v7 = *(_WORD **)&a1[4 * ((*((_BYTE *)a1 + 19) & 0x40) != 0) + 16 + 4 * (unsigned int)a4];
          v6 = *v7 & 0x1FF;
          goto LABEL_3;
      }
      if ( v6 != 77 )
        break;
      if ( ((**((_DWORD **)a1 + 2) >> 14) & 0xC) != 0 )
        return 0;
      if ( (a1[1] & 8) != 0 )
      {
LABEL_2:
        v7 = *((_WORD **)a1 + 3);
        v6 = *v7 & 0x1FF;
        goto LABEL_3;
      }
      v7 = *((_WORD **)a1 + 4);
      v6 = *v7 & 0x1FF;
LABEL_3:
      if ( v7 == a1 )
        goto LABEL_10;
      a1 = v7;
    }
    if ( v6 == 18 )
    {
      if ( (*(_QWORD *)a1 & 0x1000000) != 0 && (BYTE2(*(_QWORD *)a1) & 0x80u) != 0 )
      {
        v7 = *((_WORD **)a1 + 2);
        if ( v7 )
        {
          v6 = *v7 & 0x1FF;
          goto LABEL_3;
        }
      }
      return 0;
    }
LABEL_10:
    while ( 2 )
    {
      if ( v6 == 79 )
      {
        if ( (*((_BYTE *)a1 + 1) & 6) == 0 || ((a1[1] >> 3) & 0x7F) != 5 )
          return 0;
        a1 = *((_WORD **)a1 + 2);
        if ( !a1 )
        {
          v6 = 383;
          continue;
        }
LABEL_18:
        v6 = *a1 & 0x1FF;
        switch ( v6 )
        {
          case 20:
            goto LABEL_15;
          case 4:
            if ( *((_BYTE *)a1 + 2) >> 3 != 12 )
              return 0;
            v9 = *((_WORD **)a1 + 2);
            goto LABEL_16;
          case 57:
            if ( (*((_DWORD *)a1 + 4) & 0x3FFF8000) == 0x3FFF8000 )
              return 0;
            a2 = *((_DWORD *)a1 + 4) >> 15;
            a4 = (*((_BYTE *)a1 + 19) & 0x40) != 0;
            v9 = *(_WORD **)&a1[4 * (unsigned int)a4 + 16 + 4 * ((*((_DWORD *)a1 + 4) >> 15) & 0x7FFF)];
            goto LABEL_16;
        }
        if ( v6 != 77 )
        {
          if ( v6 != 18 )
            continue;
          if ( (*(_QWORD *)a1 & 0x1000000) == 0 )
            return 0;
          if ( (BYTE2(*(_QWORD *)a1) & 0x80u) == 0 )
            return 0;
          v9 = *((_WORD **)a1 + 2);
          if ( !v9 )
            return 0;
          goto LABEL_16;
        }
        if ( ((**((_DWORD **)a1 + 2) >> 14) & 0xC) != 0 )
          return 0;
        if ( (a1[1] & 8) != 0 )
LABEL_15:
          v9 = *((_WORD **)a1 + 3);
        else
          v9 = *((_WORD **)a1 + 4);
LABEL_16:
        if ( v9 == a1 )
          continue;
        a1 = v9;
        goto LABEL_18;
      }
      break;
    }
    if ( v6 == 123 )
    {
      v10 = *((_QWORD *)a1 + 3);
      v11 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v10 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                      & 0xFFFFFFFFFFFFFFF0LL);
      v12 = *(_BYTE *)(v11 + 16);
      switch ( v12 )
      {
        case 13:
          if ( (((*(_WORD *)(v11 + 18) >> 3) + 76) & 0x1FFu) > 0x13 )
            return (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v10 + 8)
                                                                                        & 0xFFFFFFFFFFFFFFF0LL)
                                                                            + 8LL)
                                                                & 0xFFFFFFFFFFFFFFF0LL)
                                                    + 16LL)
                 - 57 <= 1;
          break;
        case 47:
          v13 = sub_F60F10(
                  *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v10 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                            & 0xFFFFFFFFFFFFFFF0LL),
                  a2,
                  v10,
                  a4,
                  a5);
          if ( (*(_BYTE *)(v13 + 74) & 1) == 0 && (*(_QWORD *)(v13 + 128) & 0xFFFFFFFFFFFFFFF8LL) == 0
            || *(char *)(sub_F60F10(v11, a2, v14, v15, v16) + 76) < 0 )
          {
            v10 = *((_QWORD *)a1 + 3);
            return (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v10 + 8)
                                                                                        & 0xFFFFFFFFFFFFFFF0LL)
                                                                            + 8LL)
                                                                & 0xFFFFFFFFFFFFFFF0LL)
                                                    + 16LL)
                 - 57 <= 1;
          }
          break;
        case 10:
          break;
        default:
          return (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v10 + 8)
                                                                                      & 0xFFFFFFFFFFFFFFF0LL)
                                                                          + 8LL)
                                                              & 0xFFFFFFFFFFFFFFF0LL)
                                                  + 16LL)
               - 57 <= 1;
      }
      v10 = *((_QWORD *)a1 + 2);
      return (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v10 + 8)
                                                                                  & 0xFFFFFFFFFFFFFFF0LL)
                                                                      + 8LL)
                                                          & 0xFFFFFFFFFFFFFFF0LL)
                                              + 16LL)
           - 57 <= 1;
    }
    if ( v6 != 64 )
    {
      if ( v6 != 71 )
        return 0;
      v17 = *((_QWORD *)a1 + 2);
      if ( (*(_BYTE *)(v17 + 28) & 0x7F) != 0x34 )
        return 0;
      a1 = *(_WORD **)(v17 + 64);
      if ( !a1 )
        return 0;
      continue;
    }
    return 1;
  }
}
