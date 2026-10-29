__int64 __fastcall sub_4FE70(int a1, unsigned __int16 a2)
{
  unsigned int v2; // edx
  unsigned int v4; // edx
  __int64 v5; // rdx
  __int64 v6; // rcx

  if ( (unsigned __int16)a1 > 0x73u )
  {
    if ( (_WORD)a1 == 8193 )
    {
      return 12;
    }
    else if ( (unsigned __int16)a1 <= 0x2001u )
    {
      v2 = 13;
      if ( (_WORD)a1 != 121 )
      {
        v2 = 16;
        if ( (_WORD)a1 != 140 )
        {
          v2 = 0;
          if ( (_WORD)a1 == 116 )
            return 18;
        }
      }
    }
    else
    {
      switch ( a1 )
      {
        case 8473:
          v2 = 13;
          break;
        case 8498:
          v2 = 18;
          break;
        case 8499:
          v2 = 14;
          break;
        case 8503:
          return 10;
        case 8504:
          v2 = 3;
          break;
        default:
          return 0;
      }
    }
    return v2;
  }
  if ( (unsigned __int16)a1 > 0x55u )
  {
    if ( ((1LL << ((unsigned __int8)a1 - 86)) & 0x84081) == 0 )
    {
      if ( (_WORD)a1 == 114 )
        return 19;
      v4 = 0;
      if ( (_WORD)a1 == 115 )
        return 14;
      return v4;
    }
    return 10;
  }
  if ( (unsigned __int16)a1 > 0x43u )
  {
    v6 = 1LL << ((unsigned __int8)a1 - 68);
    v2 = 10;
    if ( (v6 & 0x12C2B) != 0 )
      return v2;
    if ( (v6 & 0x254) == 0 )
    {
      if ( (_WORD)a1 != 85 )
        return 0;
      return a2 < 5u ? 9 : 17;
    }
    return a2 < 5u ? 15 : 7;
  }
  if ( (unsigned __int16)a1 <= 0x2Du )
  {
    v2 = 6;
    if ( (_WORD)a1 == 16 )
      return v2;
    if ( (unsigned __int16)a1 <= 0x10u )
    {
      if ( (_WORD)a1 != 2 )
      {
        if ( (unsigned __int16)a1 > 2u )
        {
          return (unsigned __int16)(a1 - 11) < 3u ? 0xA : 0;
        }
        else
        {
          v2 = 0;
          if ( (_WORD)a1 == 1 )
            return 10;
        }
        return v2;
      }
      return a2 < 5u ? 15 : 7;
    }
    if ( (unsigned __int16)(a1 - 21) > 0x17u )
      return 0;
    v2 = 10;
    if ( ((1LL << a1) & 0x465200000LL) != 0 )
      return v2;
    if ( ((1LL << a1) & 0x40002000000LL) == 0 )
    {
      if ( (_WORD)a1 != 44 )
        return 0;
      return a2 < 5u ? 9 : 17;
    }
    return a2 < 5u ? 15 : 7;
  }
  v5 = 1LL << ((unsigned __int8)a1 - 46);
  if ( (v5 & 0x8028B) != 0 )
    return 10;
  if ( (v5 & 0x40400) != 0 )
    return a2 < 5u ? 15 : 7;
  return 8 * (unsigned int)((_WORD)a1 == 67);
}

