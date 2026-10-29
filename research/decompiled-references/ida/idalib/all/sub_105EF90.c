__int64 __fastcall sub_105EF90(__int64 a1, __int64 *a2, _DWORD *a3)
{
  __int64 v3; // rbp
  __int64 result; // rax
  char v5; // cl
  int v7; // edx

  v3 = *a2;
  switch ( *(_BYTE *)*a2 )
  {
    case '@':
      v7 = sub_105EDC0(*a2);
      result = 0;
      if ( v7 )
      {
        *a2 = v3 + (unsigned int)(v7 - 1);
        *a3 |= 2u;
        result = 1;
      }
      break;
    case 'I':
    case 'J':
    case 'K':
    case 'L':
    case 'M':
    case 'N':
    case 'Y':
    case 'Z':
      goto LABEL_3;
    case 'Q':
      *a3 |= 1u;
      result = 1;
      break;
    case 'S':
    case 'w':
    case 'x':
    case 'y':
    case 'z':
      *a3 |= 2u;
LABEL_3:
      result = 1;
      break;
    case 'U':
      v5 = *(_BYTE *)(v3 + 1);
      if ( v5 == 112 )
      {
        result = *(_BYTE *)(v3 + 2) & 0xFB;
        LOBYTE(result) = *(_BYTE *)(v3 + 2) == 97 || (*(_BYTE *)(v3 + 2) & 0xFB) == 104;
        if ( (_BYTE)result )
        {
          *a3 |= 2u;
          *a2 = v3 + 2;
        }
      }
      else
      {
        result = 0;
        if ( v5 == 99 && (unsigned __int8)(*(_BYTE *)(v3 + 2) - 105) <= 1u )
        {
          *a3 |= 2u;
          *a2 = v3 + 2;
          result = 1;
        }
      }
      break;
    default:
      result = 0;
      break;
  }
  return result;
}
