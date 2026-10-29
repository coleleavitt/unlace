bool __fastcall sub_818780(__int64 a1, unsigned __int8 a2)
{
  __int64 i; // rbx
  unsigned __int16 v3; // ax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdi
  char v7; // dl
  __int64 v9; // rax
  char v10; // al
  __int64 v11; // rax
  __int64 v12; // rbx
  char v13; // dl
  __int64 v14; // rax
  unsigned __int8 v15; // bp

  while ( 2 )
  {
    while ( 2 )
    {
      for ( i = a1; ; i = v4 )
      {
        v3 = *(_WORD *)i & 0x1FF;
        if ( v3 == 21 )
        {
LABEL_18:
          v4 = *(_QWORD *)(i + 24);
          goto LABEL_19;
        }
        if ( v3 <= 0x15u )
        {
          if ( v3 == 4 )
          {
            if ( *(_BYTE *)(i + 2) >> 3 != 12 )
              break;
            v4 = *(_QWORD *)(i + 16);
          }
          else
          {
            if ( v3 != 19 )
              break;
            if ( (*(_BYTE *)(i + 3) & 1) == 0 )
              break;
            if ( *(char *)(i + 2) >= 0 )
              break;
            v4 = *(_QWORD *)(i + 16);
            if ( !v4 )
              break;
          }
          goto LABEL_19;
        }
        if ( v3 == 58 )
        {
          if ( (~*(_DWORD *)(i + 16) & 0x3FFF8000) == 0 )
            break;
          v4 = *(_QWORD *)(i
                         + 8LL
                         * (((*(_DWORD *)(i + 16) >> 15) & 0x7FFF) + (unsigned int)((*(_BYTE *)(i + 19) & 0x40) != 0))
                         + 32);
          goto LABEL_19;
        }
        if ( v3 != 78 || ((**(_DWORD **)(i + 16) >> 14) & 0xC) != 0 )
          break;
        if ( *(_BYTE *)(i + 48) )
          goto LABEL_18;
        v4 = *(_QWORD *)(i + 32);
LABEL_19:
        if ( v4 == i )
          break;
      }
      v5 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(i + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v5 + 16) == 13 && ((*(_WORD *)(v5 + 18) >> 3) & 0x1FF) == 0x1B3 )
        return 1;
      v6 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(i + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
      v7 = *(_BYTE *)(v6 + 16);
      if ( v7 != 13 )
      {
        if ( v7 == 46 )
        {
          v9 = sub_B14A40(v6);
          if ( (*(_BYTE *)(v9 + 74) & 1) != 0 || *(_QWORD *)(v9 + 128) > 7u )
          {
            v3 = *(_WORD *)i & 0x1FF;
            goto LABEL_28;
          }
        }
        else if ( v7 == 10 )
        {
          goto LABEL_28;
        }
        return 0;
      }
      if ( (((*(_WORD *)(v6 + 18) >> 3) + 77) & 0x1FFu) > 0x13 )
        return 0;
LABEL_28:
      if ( v3 == 4 )
      {
        v10 = *(_BYTE *)(i + 2) >> 3;
        if ( v10 == 6 )
          goto LABEL_33;
        return v10 == 9;
      }
      if ( v3 == 80 )
        goto LABEL_33;
      if ( v3 > 0x76u )
      {
        if ( v3 <= 0x78u )
        {
          switch ( ((unsigned __int8)(*(_WORD *)(i + 2) >> 3) + 54) & 0x3F )
          {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
            case 9:
            case 0xA:
              return 1;
            case 6:
            case 7:
            case 8:
              v15 = a2;
              if ( !(unsigned __int8)sub_818780(*(_QWORD *)(i + 16), a2) )
                return 0;
              a1 = *(_QWORD *)(i + 24);
              break;
            case 0xB:
            case 0x16:
              a1 = *(_QWORD *)(i + 24);
              continue;
            default:
              return 0;
          }
        }
        else
        {
          if ( v3 != 129 )
            goto LABEL_38;
          v15 = a2;
          if ( !(unsigned __int8)sub_818780(*(_QWORD *)(i + 32), a2) )
            return 0;
          a1 = *(_QWORD *)(i + 40);
        }
        a2 = v15;
        continue;
      }
      break;
    }
    if ( v3 == 41 )
      return 1;
    if ( v3 == 27 )
    {
LABEL_33:
      a1 = *(_QWORD *)(i + 16);
      continue;
    }
    break;
  }
LABEL_38:
  v11 = sub_818430(i);
  v12 = v11;
  if ( !v11 || a2 || !(unsigned __int8)sub_B0FF70(*(_QWORD *)(*(_QWORD *)(v11 + 48) & 0xFFFFFFFFFFFFFFF0LL)) )
    return 0;
  v13 = *(_BYTE *)(v12 + 68);
  if ( (v13 & 1) == 0 )
    BUG();
  v14 = *(_QWORD *)(v12 + 72);
  if ( (~v13 & 0xC) != 0 && (v13 & 0xC) != 0 )
    v14 = *(_QWORD *)(v14 + 8);
  if ( (*(_DWORD *)v14 & 0x20000) != 0 )
    return 0;
  return (unsigned int)sub_781830(v12) == 1;
}

