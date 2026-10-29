char __fastcall sub_13D0F50(__int64 a1, __int64 a2)
{
  unsigned __int16 v2; // dx
  char result; // al

  v2 = *(_WORD *)(a1 + 16);
  if ( v2 <= 0xB3u )
  {
    if ( v2 >= 0xB1u )
      return sub_FDE0B0(*(_WORD **)(a1 + 8), a2);
    if ( v2 > 0x6Cu )
    {
      if ( v2 == 155 )
        return sub_FDE0B0(*(_WORD **)(a1 + 8), a2);
      if ( v2 <= 0x9Bu )
      {
        if ( v2 != 114 && v2 != 127 )
          return 0;
        return sub_FDE0B0(*(_WORD **)(a1 + 8), a2);
      }
      if ( v2 >= 0xA0u )
      {
        if ( v2 > 0xA1u && v2 != 163 )
          return 0;
        return sub_FDE0B0(*(_WORD **)(a1 + 8), a2);
      }
    }
    else
    {
      if ( v2 >= 0x6Bu || v2 == 92 )
        return sub_FDE0B0(*(_WORD **)(a1 + 8), a2);
      if ( v2 > 0x5Cu )
      {
        if ( v2 == 95 )
          return sub_FDE0B0(*(_WORD **)(a1 + 8), a2);
        if ( v2 >= 0x5Fu )
        {
          result = 0;
          if ( (unsigned __int16)(v2 - 98) <= 1u )
            return sub_FDE0B0(*(_WORD **)(a1 + 8), a2);
          return result;
        }
      }
      else if ( v2 == 84 || v2 == 88 || v2 == 79 )
      {
        return sub_FDE0B0(*(_WORD **)(a1 + 8), a2);
      }
    }
    return 0;
  }
  if ( v2 <= 0x111u )
  {
    if ( v2 >= 0x102u )
      return sub_FDE0B0(*(_WORD **)(a1 + 8), a2);
    if ( v2 > 0xCBu )
    {
      if ( v2 != 205 && v2 != 211 )
        return 0;
      return sub_FDE0B0(*(_WORD **)(a1 + 8), a2);
    }
    if ( v2 >= 0xCAu )
      return sub_FDE0B0(*(_WORD **)(a1 + 8), a2);
    result = 0;
    if ( (unsigned __int16)(v2 - 181) <= 2u )
      return sub_FDE0B0(*(_WORD **)(a1 + 8), a2);
  }
  else
  {
    if ( v2 == 394 )
      return sub_FDE0B0(*(_WORD **)(a1 + 8), a2);
    if ( v2 > 0x18Au )
    {
      result = 1;
      if ( v2 == 417 )
        return result;
      if ( v2 >= 0x1A1u )
        return (unsigned __int16)(v2 - 424) < 2u;
      return 0;
    }
    result = 0;
    if ( (unsigned __int16)(v2 - 371) <= 1u )
      return sub_FDE0B0(*(_WORD **)(a1 + 8), a2);
  }
  return result;
}
