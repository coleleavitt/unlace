char __fastcall sub_4B6A10(int a1, unsigned int a2)
{
  char result; // al

  if ( a2 <= 0x5E )
  {
    if ( a2 > 0x22 )
    {
      switch ( a2 )
      {
        case '#':
          if ( (a1 & 0x3000) == 0x1000 )
            return 1;
          return is_valid_cp(a2, 2, 0);
        case '$':
          if ( (a1 & 0xE00) == 0x800 )
            return 1;
          return is_valid_cp(a2, 2, 0);
        case '%':
          if ( (a1 & 0xE0000) == (_DWORD)&stru_40000 )
            return 1;
          return is_valid_cp(a2, 2, 0);
        case '\'':
          if ( (a1 & 0xC0000) == 0x80000 )
            return 1;
          result = (a1 & 0x1C000) == 114688 || (a1 & 0x1C000) == 0x10000;
          if ( result )
            return result;
          if ( (a1 & 0xE00) == 0x200 )
            return 1;
          return is_valid_cp(a2, 2, 0);
        case '+':
        case ':':
          return 1;
        case '.':
          if ( (a1 & 0x2000) != 0 )
            return 1;
          return is_valid_cp(a2, 2, 0);
        case '@':
          if ( (a1 & 0x1C000) == 0xC000 )
            return 1;
          return is_valid_cp(a2, 2, 0);
        case '^':
          if ( (a1 & 0xE0000) == 0x20000 )
            return 1;
          return is_valid_cp(a2, 2, 0);
        default:
          return is_valid_cp(a2, 2, 0);
      }
    }
    return is_valid_cp(a2, 2, 0);
  }
  if ( a2 != 126 || (a1 & 0x1C000) != 0x18000 )
    return is_valid_cp(a2, 2, 0);
  return 1;
}

