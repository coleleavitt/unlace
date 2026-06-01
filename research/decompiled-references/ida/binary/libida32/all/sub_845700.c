unsigned __int8 *__fastcall sub_845700(_BYTE *a1, char *a2, unsigned __int8 *a3, int *a4, int *a5, _QWORD *a6)
{
  unsigned __int8 *v8; // r10
  char v9; // bl
  char v10; // cl
  __int64 v12; // rax
  __int64 *v13; // r9
  __int64 v14; // r10
  __int64 v15; // r11
  __int64 v16; // rdx
  char v17; // cl
  unsigned __int8 *v18; // rbx
  char v19; // dl
  int v20; // edx

  v8 = a1 + 1;
  *a2 = *a1;
  *a5 = 0;
  v9 = *a2;
  switch ( *a2 )
  {
    case '!':
    case '"':
    case '#':
    case '$':
    case '%':
    case '&':
    case '\'':
    case '(':
    case ')':
    case '*':
    case '+':
    case ',':
    case '-':
      *a3 = 29;
      switch ( *a2 )
      {
        case '#':
        case '$':
          goto LABEL_12;
        case '\'':
        case '(':
        case '-':
          goto LABEL_8;
        case ')':
          goto LABEL_14;
        case '+':
          goto LABEL_15;
        default:
          goto LABEL_10;
      }
    case '.':
    case '/':
    case '0':
    case '1':
    case '2':
    case '3':
    case '4':
    case '5':
    case '6':
    case '7':
    case '8':
    case '9':
    case ':':
      *a3 = 30;
      v10 = *a2 - 13;
      goto LABEL_3;
    case ';':
    case '<':
    case '=':
    case '>':
    case '?':
    case '@':
    case 'A':
    case 'B':
    case 'C':
    case 'D':
    case 'E':
    case 'F':
    case 'G':
      *a3 = 31;
      v10 = *a2 - 26;
      goto LABEL_3;
    case 'H':
    case 'I':
    case 'J':
    case 'K':
    case 'L':
    case 'M':
    case 'N':
    case 'O':
    case 'P':
    case 'Q':
    case 'R':
    case 'S':
    case 'T':
      *a3 = 32;
      v10 = *a2 - 39;
LABEL_3:
      *a2 = v10;
      switch ( v10 )
      {
        case '#':
        case '$':
          goto LABEL_12;
        case '\'':
        case '(':
        case '-':
          goto LABEL_8;
        case ')':
          goto LABEL_14;
        case '+':
          goto LABEL_15;
        default:
          goto LABEL_9;
      }
    case 'U':
    case 'V':
    case 'W':
    case 'X':
    case 'Y':
    case 'Z':
    case '[':
    case '\\':
    case ']':
    case '^':
    case '_':
    case '`':
    case 'a':
      *a2 = v9 - 52;
      *a3 = 0;
      switch ( *a2 )
      {
        case '#':
        case '$':
LABEL_12:
          *a5 = 1;
          *a2 -= 2;
          if ( *a3 )
            goto LABEL_10;
          goto LABEL_13;
        case '\'':
        case '(':
        case '-':
LABEL_8:
          v8 = a1 + 3;
          *a4 = (unsigned __int16)__ROL2__(*(_WORD *)(a1 + 1), 8);
          goto LABEL_9;
        case ')':
LABEL_14:
          v8 = a1 + 3;
          *a5 = (unsigned __int16)__ROL2__(*(_WORD *)(a1 + 1), 8);
          goto LABEL_9;
        case '+':
LABEL_15:
          *a5 = 1;
          *a2 = 42;
LABEL_9:
          if ( !*a3 )
            goto LABEL_13;
LABEL_10:
          *a6 = v8 + 1;
          return v8;
        default:
LABEL_13:
          *a3 = *v8;
          v12 = sub_845640(v8);
          *v13 = v12;
          return (unsigned __int8 *)v14;
      }
    default:
      *a3 = v9;
      if ( (unsigned __int8)v9 <= 0x6Fu )
      {
        v16 = 33;
        LODWORD(v15) = 33;
      }
      else
      {
        v15 = (unsigned __int16)__ROL2__(*(_WORD *)(a1 + 1), 8);
        v16 = v15;
      }
      v17 = a1[v16];
      v18 = &a1[v16 + 1];
      *a2 = v17;
      if ( (unsigned __int8)(v17 - 98) <= 5u )
      {
        *a2 = v17 - 65;
        *a6 = v18;
        if ( (unsigned __int8)(*a2 - 35) <= 1u )
        {
          *a5 = 1;
          *a2 -= 2;
        }
      }
      else
      {
        if ( (unsigned __int8)(v17 - 106) > 2u )
        {
          *a4 = (unsigned __int8)a1[(int)v15 + 4] | ((unsigned __int8)a1[(int)v15 + 3] << 8);
          *a5 = (*v18 << 8) | (unsigned __int8)a1[(int)v15 + 2];
          *a6 = &a1[v16 + 5];
          if ( *a4 )
          {
            v20 = *a4 - *a5;
            *a4 = v20;
            if ( !v20 )
            {
              *a2 = 41;
              return v8;
            }
            if ( *a2 != 104 )
            {
              if ( *a2 == 109 )
                *a2 = 45;
              else
                *a2 = 2 * (v20 != 1) + 38;
              return v8;
            }
          }
          else if ( *a2 != 104 )
          {
            v19 = 34;
            if ( *a2 == 109 )
              v19 = 45;
            *a2 = v19;
            return v8;
          }
          *a2 = 39;
          return v8;
        }
        *a2 = v17 - 64;
        *a6 = v18;
        if ( *a2 == 43 )
        {
          *a5 = 1;
          *a2 = 42;
        }
      }
      return v8;
  }
}

