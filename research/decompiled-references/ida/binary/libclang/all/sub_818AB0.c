char __fastcall sub_818AB0(_WORD *a1)
{
  unsigned __int16 v2; // ax
  _WORD *v4; // rax
  bool v5; // cc
  _WORD *v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rbp
  char v9; // al
  __int64 v10; // rax
  __int64 v11; // rdx

  while ( 1 )
  {
    while ( 1 )
    {
      v2 = *a1 & 0x1FF;
      if ( v2 == 21 )
      {
LABEL_14:
        v4 = *((_WORD **)a1 + 3);
        goto LABEL_15;
      }
      if ( v2 <= 0x15u )
        break;
      if ( v2 == 58 )
      {
        if ( (~*((_DWORD *)a1 + 4) & 0x3FFF8000) == 0 )
          return 0;
        v4 = *(_WORD **)&a1[4 * ((*((_DWORD *)a1 + 4) >> 15) & 0x7FFF) + 16 + 4 * ((*((_BYTE *)a1 + 19) & 0x40) != 0)];
      }
      else
      {
        if ( v2 != 78 )
          goto LABEL_18;
        if ( ((**((_DWORD **)a1 + 2) >> 14) & 0xC) != 0 )
          return 0;
        if ( *((_BYTE *)a1 + 48) )
          goto LABEL_14;
        v4 = *((_WORD **)a1 + 4);
      }
LABEL_15:
      if ( a1 == v4 )
      {
        v2 = *a1 & 0x1FF;
        while ( 1 )
        {
LABEL_18:
          if ( v2 != 80 )
            goto LABEL_45;
          if ( (*((_BYTE *)a1 + 1) & 6) == 0 || ((a1[1] >> 3) & 0x7F) != 5 )
            return 0;
          a1 = *((_WORD **)a1 + 2);
          if ( !a1 )
            BUG();
          v2 = *a1 & 0x1FF;
          v5 = v2 <= 0x15u;
          if ( v2 == 21 )
          {
LABEL_31:
            do
            {
              v6 = *((_WORD **)a1 + 3);
LABEL_29:
              if ( v6 == a1 )
                goto LABEL_45;
              a1 = v6;
              v2 = *v6 & 0x1FF;
              v5 = v2 <= 0x15u;
            }
            while ( v2 == 21 );
          }
          if ( v5 )
            break;
          if ( v2 == 58 )
          {
            if ( (~*((_DWORD *)a1 + 4) & 0x3FFF8000) != 0 )
            {
              v6 = *(_WORD **)&a1[4 * ((*((_DWORD *)a1 + 4) >> 15) & 0x7FFF)
                                + 16
                                + 4 * ((*((_BYTE *)a1 + 19) & 0x40) != 0)];
              goto LABEL_29;
            }
            return 0;
          }
          if ( v2 == 78 )
          {
            if ( ((**((_DWORD **)a1 + 2) >> 14) & 0xC) == 0 )
            {
              if ( !*((_BYTE *)a1 + 48) )
              {
                v6 = *((_WORD **)a1 + 4);
                goto LABEL_29;
              }
              goto LABEL_31;
            }
            return 0;
          }
        }
        if ( v2 == 4 )
        {
          if ( *((_BYTE *)a1 + 2) >> 3 == 12 )
          {
            v6 = *((_WORD **)a1 + 2);
            goto LABEL_29;
          }
          return 0;
        }
        if ( v2 == 19 )
        {
          if ( (*((_BYTE *)a1 + 3) & 1) != 0 && *((char *)a1 + 2) < 0 )
          {
            v6 = *((_WORD **)a1 + 2);
            if ( v6 )
              goto LABEL_29;
          }
          return 0;
        }
LABEL_45:
        if ( v2 != 124 )
          goto LABEL_54;
        v7 = *((_QWORD *)a1 + 3);
        v8 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                       & 0xFFFFFFFFFFFFFFF0LL);
        v9 = *(_BYTE *)(v8 + 16);
        switch ( v9 )
        {
          case 13:
            if ( (((*(_WORD *)(v8 + 18) >> 3) + 77) & 0x1FFu) > 0x13 )
              return (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 8)
                                                                                          & 0xFFFFFFFFFFFFFFF0LL)
                                                                              + 8LL)
                                                                  & 0xFFFFFFFFFFFFFFF0LL)
                                                      + 16LL)
                   - 56 <= 1;
            break;
          case 46:
            v10 = sub_B14A40(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                       & 0xFFFFFFFFFFFFFFF0LL));
            if ( (*(_BYTE *)(v10 + 74) & 1) == 0 && *(_QWORD *)(v10 + 128) <= 7u || *(char *)(sub_B14A40(v8) + 76) < 0 )
            {
              v7 = *((_QWORD *)a1 + 3);
              return (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 8)
                                                                                          & 0xFFFFFFFFFFFFFFF0LL)
                                                                              + 8LL)
                                                                  & 0xFFFFFFFFFFFFFFF0LL)
                                                      + 16LL)
                   - 56 <= 1;
            }
            break;
          case 10:
            break;
          default:
            return (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 8)
                                                                                        & 0xFFFFFFFFFFFFFFF0LL)
                                                                            + 8LL)
                                                                & 0xFFFFFFFFFFFFFFF0LL)
                                                    + 16LL)
                 - 56 <= 1;
        }
        v7 = *((_QWORD *)a1 + 2);
        return (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 8)
                                                                                    & 0xFFFFFFFFFFFFFFF0LL)
                                                                        + 8LL)
                                                            & 0xFFFFFFFFFFFFFFF0LL)
                                                + 16LL)
             - 56 <= 1;
      }
      a1 = v4;
    }
    if ( v2 == 4 )
    {
      if ( *((_BYTE *)a1 + 2) >> 3 != 12 )
        return 0;
      v4 = *((_WORD **)a1 + 2);
      goto LABEL_15;
    }
    if ( v2 == 19 )
    {
      if ( (*((_BYTE *)a1 + 3) & 1) == 0 )
        return 0;
      if ( *((char *)a1 + 2) >= 0 )
        return 0;
      v4 = *((_WORD **)a1 + 2);
      if ( !v4 )
        return 0;
      goto LABEL_15;
    }
LABEL_54:
    if ( v2 == 65 )
      return 1;
    if ( v2 == 72 )
    {
      v11 = *((_QWORD *)a1 + 2);
      if ( (*(_BYTE *)(v11 + 28) & 0x7F) == 0x32 )
      {
        a1 = *(_WORD **)(v11 + 64);
        if ( a1 )
          continue;
      }
    }
    return 0;
  }
}

