__int64 __fastcall sub_19E9EE0(unsigned int a1)
{
  __int64 result; // rax
  _BOOL8 v2; // rax

  if ( a1 > 0x3F8 )
  {
    if ( a1 == 1141 )
      return 4;
    if ( a1 <= 0x475 )
    {
      if ( a1 <= 0x408 )
      {
        if ( a1 < 0x404 && a1 != 1022 )
        {
          if ( a1 > 0x3FE )
            v2 = a1 - 1025 < 2;
          else
            v2 = a1 == 1019;
          return 4 * v2;
        }
        return 4;
      }
      if ( a1 == 1057 )
        return 4;
      if ( a1 <= 0x421 )
      {
        return 4LL * (a1 - 1035 < 2);
      }
      else
      {
        result = 8;
        if ( a1 != 1059 )
          return 8LL * (a1 == 1071);
      }
    }
    else
    {
      if ( a1 == 1454 )
        return 4;
      if ( a1 <= 0x5AE )
      {
        if ( a1 == 1170 )
          return 4;
        result = 4;
        if ( a1 > 0x492 )
        {
          if ( a1 != 1209 )
            return 4LL * (a1 == 1451);
        }
        else if ( a1 != 1144 )
        {
          return 4LL * (a1 == 1162);
        }
      }
      else
      {
        if ( a1 == 1469 )
          return 4;
        result = 4;
        if ( a1 > 0x5BD )
        {
          if ( a1 != 1471 )
            return 4LL * (a1 == 1473);
        }
        else if ( a1 != 1459 )
        {
          return 4LL * (a1 == 1461);
        }
      }
    }
  }
  else
  {
    if ( a1 >= 0x3F7 || a1 == 557 )
      return 4;
    if ( a1 <= 0x22D )
    {
      if ( a1 == 220 )
        return 8;
      if ( a1 <= 0xDC )
      {
        if ( a1 != 210 )
        {
          result = 8;
          if ( a1 > 0xD2 )
          {
            if ( a1 != 217 )
              return 4LL * (a1 == 219);
          }
          else if ( a1 != 124 )
          {
            return 8LL * (a1 == 200);
          }
          return result;
        }
        return 8;
      }
      if ( a1 != 229 )
      {
        if ( a1 <= 0xE5 )
          return 8LL * (a1 - 226 < 2);
        result = 8;
        if ( a1 != 230 )
          return 8LL * (a1 == 260);
        return result;
      }
      return 4;
    }
    if ( a1 == 653 )
      return 4;
    if ( a1 > 0x28D )
    {
      result = 8;
      if ( a1 != 941 )
      {
        if ( a1 > 0x3AD )
        {
          return 4LL * (a1 - 968 < 2);
        }
        else
        {
          result = 4;
          if ( a1 != 904 )
            return 8LL * (a1 == 937);
        }
      }
    }
    else
    {
      if ( a1 == 640 )
        return 4;
      if ( a1 > 0x280 )
      {
        result = 8;
        if ( a1 != 641 )
          return 4LL * (a1 == 651);
      }
      else
      {
        result = 4;
        if ( a1 != 560 )
          return 8LL * (a1 == 636);
      }
    }
  }
  return result;
}
