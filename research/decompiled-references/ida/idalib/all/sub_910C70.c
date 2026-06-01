__int64 __fastcall sub_910C70(unsigned int a1)
{
  __int64 result; // rax

  if ( a1 == 400 )
    return 0;
  if ( a1 > 0x190 )
  {
    if ( a1 <= 0x3EF )
    {
      if ( a1 < 0x3EE && a1 != 1000 )
      {
        if ( a1 <= 0x3E8 )
        {
          result = 0;
          if ( a1 <= 0x192 )
            return result;
          if ( a1 != 500 )
            return -40;
        }
        else
        {
          if ( a1 == 1002 )
            return 0;
          result = 0;
          if ( a1 < 0x3EA || a1 == 1004 )
            return result;
          if ( a1 != 1005 )
            return -40;
        }
      }
    }
    else if ( a1 != 1012 )
    {
      if ( a1 <= 0x3F4 )
      {
        if ( a1 >= 0x3F2 )
          return 0;
        return 0;
      }
      if ( a1 != 1014 )
      {
        if ( a1 < 0x3F6 )
          return 0;
        result = 0;
        if ( a1 != 1015 )
        {
          if ( a1 == 1016 )
            return 0;
          return -40;
        }
        return result;
      }
    }
    return 0;
  }
  if ( a1 == 107 )
    return 0;
  if ( a1 > 0x6B )
  {
    if ( a1 == 163 )
      return 0;
    if ( a1 <= 0xA3 )
    {
      if ( a1 == 160 )
        return 0;
      result = 0;
      if ( a1 <= 0xA0 && a1 != 130 )
        return -40;
      return result;
    }
    if ( a1 != 200 )
    {
      if ( a1 <= 0xC8 )
      {
        result = 0;
        if ( a1 != 164 )
          return -40;
        return result;
      }
      if ( a1 != 201 && a1 != 202 )
        return -40;
    }
    return 0;
  }
  if ( a1 == 102 )
    return 0;
  if ( a1 > 0x66 )
  {
    if ( a1 == 104 )
      return 0;
    if ( a1 >= 0x68 )
      return 0;
    return 0;
  }
  if ( a1 == 100 )
  {
    sub_910C60();
    sub_910C50();
    return 0;
  }
  else
  {
    result = 0;
    if ( a1 <= 0x64 )
    {
      if ( a1 == 10 )
        return 0;
      return -40;
    }
  }
  return result;
}
