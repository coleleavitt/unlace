__int64 __fastcall sub_10AF8D0(__int64 a1, _BYTE **a2, _DWORD *a3)
{
  _BYTE *v3; // rsi
  __int64 result; // rax

  v3 = *a2;
  switch ( *v3 )
  {
    case 'I':
    case 'J':
    case 'K':
    case 'L':
    case 'M':
      goto LABEL_4;
    case 'Q':
    case 'R':
    case 'S':
    case 'T':
      *a3 |= 1u;
      return 1;
    case 'Z':
      result = 0;
      if ( (unsigned int)((char)v3[1] - 81) <= 3 )
        goto LABEL_3;
      return result;
    case 'a':
    case 'd':
    case 'f':
    case 'v':
LABEL_3:
      *a3 |= 2u;
LABEL_4:
      result = 1;
      break;
    default:
      result = 0;
      break;
  }
  return result;
}
