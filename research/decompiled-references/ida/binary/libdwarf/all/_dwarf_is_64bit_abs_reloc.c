__int64 __fastcall dwarf_is_64bit_abs_reloc(int a1, __int64 a2)
{
  __int64 result; // rax

  if ( (unsigned int)a2 <= 0x3E )
  {
    if ( (unsigned int)a2 > 1 )
    {
      switch ( a2 )
      {
        case 2LL:
        case 43LL:
          result = (a1 == 77) | (unsigned __int8)(a1 == 54);
          break;
        case 8LL:
          result = (a1 == 41) | (unsigned __int8)((a1 & 0xFFFFFFEF) == 2);
          break;
        case 18LL:
          result = a1 == 54;
          break;
        case 21LL:
          result = (a1 == 78) | (unsigned __int8)(a1 == 38);
          break;
        case 22LL:
          result = (a1 == 53) | (unsigned __int8)(a1 == 22);
          break;
        case 50LL:
          result = (a1 == 183) | (unsigned __int8)((a1 & 0xFFFFFFF7) == 101 || (a1 & 0xFFFFFFBF) == 39);
          break;
        case 62LL:
          return (a1 == 24) | (unsigned __int8)((a1 & 0xFFFFFFEF) == 1);
        default:
          return 0;
      }
      return result;
    }
    return 0;
  }
  if ( (unsigned int)a2 <= 0xB5 )
  {
    if ( (unsigned int)a2 > 0xB3 )
      return (a1 == 24) | (unsigned __int8)((a1 & 0xFFFFFFEF) == 1);
    return 0;
  }
  result = a1 == 257;
  if ( (_DWORD)a2 != 183 )
    return 0;
  return result;
}

