char __fastcall sub_B3EAC0(char *a1, __int64 a2)
{
  char result; // al
  int v3; // eax
  char v4; // dl
  char v5; // al
  char v6; // al
  char v7; // dl
  char v8; // al
  char v9; // al
  char v10; // dl

  switch ( a2 )
  {
    case 1LL:
      result = 0;
      if ( (unsigned __int8)(*a1 - 97) <= 0x14u )
        result = ((1LL << (*a1 - 97)) & 0x148103) != 0;
      break;
    case 2LL:
      switch ( *a1 )
      {
        case 'b':
          result = a1[1] == 114;
          break;
        case 'd':
          result = 0;
          if ( (unsigned __int8)(a1[1] - 100) <= 0x10u )
            result = ((1LL << (a1[1] - 100)) & 0x10101) != 0;
          break;
        case 'e':
          result = a1[1] == 109;
          break;
        case 'h':
          v10 = a1[1];
          result = 0;
          if ( v10 >= 49 )
          {
            result = 1;
            if ( v10 > 54 )
              result = v10 == 114;
          }
          break;
        case 'l':
          result = a1[1] == 105;
          break;
        case 'o':
        case 'u':
          result = a1[1] == 108;
          break;
        case 't':
          result = 0;
          if ( (unsigned __int8)(a1[1] - 100) <= 0x10u )
            result = ((1LL << (a1[1] - 100)) & 0x14011) != 0;
          break;
        default:
          goto LABEL_3;
      }
      break;
    case 3LL:
      switch ( *a1 )
      {
        case 'b':
          return *(_WORD *)(a1 + 1) == 26473;
        case 'c':
          return *(_WORD *)(a1 + 1) == 27759;
        case 'd':
          v9 = a1[1];
          if ( v9 == 101 )
            return a1[2] == 108;
          if ( v9 != 105 )
            goto LABEL_3;
          return a1[2] == 118;
        case 'i':
          v8 = a1[1];
          if ( v8 == 109 )
          {
            result = a1[2] == 103;
          }
          else
          {
            if ( v8 != 110 )
              goto LABEL_3;
            result = a1[2] == 115;
          }
          break;
        case 'p':
          return *(_WORD *)(a1 + 1) == 25970;
        case 's':
          result = 0;
          if ( a1[1] == 117 )
          {
            v7 = a1[2];
            result = 1;
            if ( v7 != 98 )
              return v7 == 112;
          }
          return result;
        default:
          goto LABEL_3;
      }
      break;
    case 4LL:
      v4 = *a1;
      if ( *a1 == 102 )
      {
        if ( *(_WORD *)(a1 + 1) == 28271 && a1[3] == 116 )
        {
          v3 = 0;
          goto LABEL_7;
        }
        goto LABEL_6;
      }
      if ( v4 == 115 )
      {
        if ( *(_WORD *)(a1 + 1) == 24944 && a1[3] == 110 )
        {
          v3 = 0;
          goto LABEL_7;
        }
        goto LABEL_6;
      }
      result = 0;
      if ( v4 == 99 )
      {
        if ( *(_WORD *)(a1 + 1) == 25711 && a1[3] == 101 )
        {
          v3 = 0;
          goto LABEL_7;
        }
        goto LABEL_6;
      }
      break;
    case 5LL:
      if ( *a1 != 115 )
      {
        if ( *a1 != 116 )
          goto LABEL_3;
        v5 = a1[1];
        if ( v5 == 98 )
        {
          if ( *((_WORD *)a1 + 1) == 25711 && a1[4] == 121 )
          {
            v3 = 0;
            goto LABEL_7;
          }
        }
        else if ( v5 <= 98 )
        {
          if ( v5 != 97 )
            goto LABEL_3;
          if ( *((_WORD *)a1 + 1) == 27746 && a1[4] == 101 )
          {
            v3 = 0;
            goto LABEL_7;
          }
        }
        else if ( v5 == 102 )
        {
          if ( *((_WORD *)a1 + 1) == 28527 && a1[4] == 116 )
          {
            v3 = 0;
            goto LABEL_7;
          }
        }
        else
        {
          if ( v5 != 104 )
            goto LABEL_3;
          if ( *((_WORD *)a1 + 1) == 24933 && a1[4] == 100 )
          {
            v3 = 0;
            goto LABEL_7;
          }
        }
        goto LABEL_6;
      }
      result = *(_DWORD *)(a1 + 1) == 1819042157;
      break;
    case 6LL:
      if ( *(_WORD *)a1 != 29811 || a1[2] != 114 )
        goto LABEL_3;
      v6 = a1[3];
      if ( v6 == 105 )
      {
        result = *((_WORD *)a1 + 2) == 25963;
      }
      else
      {
        if ( v6 != 111 )
          goto LABEL_3;
        result = *((_WORD *)a1 + 2) == 26478;
      }
      break;
    case 7LL:
      if ( *(_DWORD *)a1 != 1953522019 || *((_WORD *)a1 + 2) != 28521 || a1[6] != 110 )
        goto LABEL_6;
      v3 = 0;
      goto LABEL_7;
    case 8LL:
      result = *(_QWORD *)a1 == 0x70756F72676C6F63LL;
      break;
    case 10LL:
      if ( *(_QWORD *)a1 == 0x6F75716B636F6C62LL && *((_WORD *)a1 + 4) == 25972 )
        v3 = 0;
      else
LABEL_6:
        v3 = 1;
LABEL_7:
      result = v3 == 0;
      break;
    default:
LABEL_3:
      result = 0;
      break;
  }
  return result;
}
