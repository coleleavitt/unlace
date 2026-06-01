__int64 __fastcall sub_1070D50(__int64 a1, _QWORD *a2, __int64 a3)
{
  _BYTE *v3; // r8
  _BOOL4 v5; // r9d
  __int64 result; // rax
  int v7; // esi
  size_t v8; // rax
  int v9; // esi
  char v10; // al
  unsigned __int8 v11; // cl

  v3 = (_BYTE *)*a2;
  switch ( *(_BYTE *)*a2 )
  {
    case 'I':
      v7 = *(_DWORD *)a3 | 0x10;
      if ( *(_DWORD *)(a1 + 612) != 2 )
        goto LABEL_22;
      v5 = sub_1070CD0(a1);
      *(_DWORD *)a3 = v7;
      if ( !v5 )
      {
        *(_BYTE *)(a3 + 16) = 1;
        v5 = 1;
        *(_QWORD *)(a3 + 8) = 0xFF00000000LL;
      }
      goto LABEL_4;
    case 'J':
      v9 = *(_DWORD *)a3 | 0x10;
      if ( *(_DWORD *)(a1 + 612) != 2 || sub_1070CD0(a1) )
      {
        *(_DWORD *)a3 = v9;
        v5 = 1;
        *(_QWORD *)(a3 + 8) = 0xFFFFFFFF001LL;
        *(_BYTE *)(a3 + 16) = 1;
      }
      else
      {
        *(_DWORD *)a3 = v9;
        v5 = 1;
        *(_QWORD *)(a3 + 8) = -255;
        *(_BYTE *)(a3 + 16) = 1;
      }
      goto LABEL_4;
    case 'K':
      v7 = *(_DWORD *)a3 | 0x10;
      if ( *(_DWORD *)(a1 + 612) != 2 )
        goto LABEL_22;
      v5 = sub_1070CD0(a1);
      *(_DWORD *)a3 = v7;
      if ( !v5 )
        goto LABEL_7;
      goto LABEL_4;
    case 'L':
      v7 = *(_DWORD *)a3 | 0x10;
      if ( *(_DWORD *)(a1 + 612) != 2 )
        goto LABEL_22;
      v5 = sub_1070CD0(a1);
      *(_DWORD *)a3 = v7;
      if ( !v5 )
      {
        *(_BYTE *)(a3 + 16) = 1;
        v5 = 1;
        *(_QWORD *)(a3 + 8) = 0x7FFFFFFF9LL;
      }
      goto LABEL_4;
    case 'M':
      v7 = *(_DWORD *)a3 | 0x10;
LABEL_22:
      *(_DWORD *)a3 = v7;
      return 1;
    case 'N':
      v5 = 0;
      if ( *(_DWORD *)(a1 + 612) == 2 && !sub_1070CD0(a1) )
      {
        *(_DWORD *)a3 |= 0x10u;
        v5 = 1;
        *(_QWORD *)(a3 + 8) = 0x1F00000000LL;
        *(_BYTE *)(a3 + 16) = 1;
      }
      goto LABEL_4;
    case 'O':
      v5 = 0;
      if ( *(_DWORD *)(a1 + 612) == 2 && !sub_1070CD0(a1) )
      {
        *(_DWORD *)a3 |= 0x10u;
        v5 = 1;
      }
      goto LABEL_4;
    case 'P':
    case 'R':
    case 'S':
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
    case 'b':
    case 'c':
    case 'd':
    case 'e':
    case 'f':
    case 'g':
    case 'i':
    case 'k':
    case 'm':
    case 'n':
    case 'o':
    case 'p':
    case 'q':
    case 'r':
    case 'u':
    case 'v':
      v5 = 0;
      goto LABEL_4;
    case 'Q':
      *(_DWORD *)a3 |= 1u;
      v5 = 1;
      goto LABEL_4;
    case 'T':
      v10 = v3[1];
      if ( v10 == 101 || (v5 = 0, v10 == 111) )
      {
        *(_DWORD *)a3 |= 2u;
        v5 = 1;
        *a2 = v3 + 1;
      }
      goto LABEL_4;
    case 'U':
      v5 = 0;
      v11 = v3[1] - 109;
      if ( v11 <= 0xCu && ((1LL << v11) & 0x12D3) != 0 )
      {
        *(_DWORD *)a3 |= 1u;
        v5 = 1;
        *a2 = v3 + 1;
      }
      goto LABEL_4;
    case 'h':
      v5 = 0;
      if ( *(_DWORD *)(a1 + 612) == 2 )
        goto LABEL_3;
      goto LABEL_4;
    case 'j':
      v8 = j__strlen("6T2");
      if ( v8 == *(_QWORD *)(a1 + 600) && (!v8 || !memcmp(*(const void **)(a1 + 592), "6T2", v8))
        || (v5 = 0, *(_DWORD *)(a1 + 624) > 6u) )
      {
        *(_DWORD *)a3 |= 0x10u;
        v5 = 1;
        *(_QWORD *)(a3 + 8) = 0xFFFF00000000LL;
        *(_BYTE *)(a3 + 16) = 1;
      }
      goto LABEL_4;
    case 'l':
      goto LABEL_3;
    case 's':
LABEL_7:
      v5 = 1;
      goto LABEL_4;
    case 't':
    case 'w':
    case 'x':
      v5 = 0;
      if ( (*(_BYTE *)(a1 + 630) & 8) == 0 )
      {
LABEL_3:
        *(_DWORD *)a3 |= 2u;
        v5 = 1;
      }
LABEL_4:
      result = v5;
      break;
    default:
      result = 0;
      break;
  }
  return result;
}
