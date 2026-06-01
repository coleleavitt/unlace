__int64 __fastcall dwarf_is_32bit_abs_reloc(int a1, __int64 a2)
{
  __int64 result; // rax
  int v3; // eax

  if ( (unsigned int)a2 <= 0x3E )
  {
    if ( (unsigned int)a2 > 1 )
    {
      switch ( a2 )
      {
        case 2LL:
        case 18LL:
          result = (a1 == 76) | (unsigned __int8)(a1 == 23);
          break;
        case 3LL:
          result = ((a1 & 0xFFFFFFFB) == 32) | (unsigned __int8)((a1 & 0xFFFFFFF7) - 1 <= 1);
          break;
        case 8LL:
          result = (a1 == 39) | (unsigned __int8)(a1 == 2);
          break;
        case 20LL:
          result = (a1 == 78) | (unsigned __int8)(a1 == 1);
          break;
        case 21LL:
          result = (a1 == 110) | (unsigned __int8)(a1 == 1);
          break;
        case 22LL:
          result = (a1 == 52) | (unsigned __int8)(a1 == 4);
          break;
        case 40LL:
          goto LABEL_11;
        case 42LL:
          result = a1 == 1;
          break;
        case 43LL:
          result = a1 == 23;
          break;
        case 50LL:
          result = (a1 == 181) | (unsigned __int8)((a1 & 0xFFFFFFBF) == 37);
          break;
        case 62LL:
          return (a1 == 21) | (unsigned __int8)((a1 & 0xFFFFFFF7) == 2);
        default:
          return 0;
      }
      return result;
    }
    return 0;
  }
  if ( (unsigned int)a2 > 0xB5 )
  {
    if ( (_DWORD)a2 == 183 )
    {
LABEL_11:
      v3 = a1;
      BYTE1(v3) = BYTE1(a1) & 0xFE;
      return (a1 == 106) | (unsigned __int8)(v3 == 2);
    }
    return 0;
  }
  if ( (unsigned int)a2 > 0xB3 )
    return (a1 == 21) | (unsigned __int8)((a1 & 0xFFFFFFF7) == 2);
  result = a1 == 6;
  if ( (_DWORD)a2 != 164 )
    return 0;
  return result;
}

