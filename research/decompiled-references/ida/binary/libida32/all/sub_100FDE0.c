__int64 __fastcall sub_100FDE0(__int64 a1, _QWORD *a2, int *a3)
{
  _BYTE *v3; // r8
  __int64 result; // rax
  int v5; // eax

  v3 = (_BYTE *)*a2;
  switch ( *(_BYTE *)*a2 )
  {
    case 'G':
    case 'H':
    case 'I':
    case 'J':
    case 'K':
    case 'L':
    case 'M':
    case 'N':
    case 'O':
    case 'P':
    case 'R':
    case 'S':
    case 'T':
    case 'U':
    case 'W':
    case 'j':
    case 't':
      goto LABEL_4;
    case 'Q':
      v5 = *a3 | 2;
      goto LABEL_11;
    case 'Z':
      v5 = *a3;
LABEL_11:
      *a3 = v5 | 1;
      return 1;
    case 'b':
    case 'c':
    case 'h':
    case 'l':
    case 'q':
    case 'x':
    case 'y':
    case 'z':
      goto LABEL_3;
    case 'd':
    case 'f':
    case 'v':
      result = 0;
      if ( *(_DWORD *)(a1 + 552) != 1 )
      {
LABEL_3:
        *a3 |= 2u;
LABEL_4:
        result = 1;
      }
      break;
    case 'e':
    case 'm':
      result = 0;
      if ( v3[1] == 115 )
      {
        *a3 |= 1u;
        *a2 = v3 + 1;
        result = 1;
      }
      break;
    case 'w':
      result = 0;
      if ( (unsigned __int8)(v3[1] - 97) <= 0x16u && ((1LL << (v3[1] - 97)) & 0x44012D) != 0 )
      {
        *a3 |= 2u;
        *a2 = v3 + 1;
        result = 1;
      }
      break;
    default:
      result = 0;
      break;
  }
  return result;
}

