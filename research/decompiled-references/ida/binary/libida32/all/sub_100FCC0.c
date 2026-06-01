bool __fastcall sub_100FCC0(__int64 a1, _QWORD *a2, _DWORD *a3)
{
  _BYTE *v3; // r8
  bool result; // al

  v3 = (_BYTE *)*a2;
  switch ( *(_BYTE *)*a2 )
  {
    case 'I':
    case 'J':
    case 'K':
    case 'L':
    case 'M':
    case 'N':
    case 'O':
    case 'P':
      goto LABEL_3;
    case 'R':
      *a3 |= 1u;
      result = 1;
      break;
    case 'Z':
      result = 0;
      if ( v3[1] == 67 )
      {
        *a3 |= 1u;
        *a2 = v3 + 1;
        result = 1;
      }
      break;
    case 'c':
    case 'd':
    case 'l':
    case 'r':
    case 'x':
    case 'y':
      *a3 |= 2u;
LABEL_3:
      result = 1;
      break;
    case 'f':
      *a3 |= 2u;
      result = *(_DWORD *)(a1 + 552) != 1;
      break;
    default:
      result = 0;
      break;
  }
  return result;
}

