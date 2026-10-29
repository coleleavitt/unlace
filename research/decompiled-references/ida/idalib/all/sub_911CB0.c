__int64 __fastcall sub_911CB0(__int64 a1, unsigned int a2, int a3)
{
  __int64 result; // rax

  if ( !*(_DWORD *)(a1 + 3608) )
  {
    if ( a2 <= 0xCA )
    {
      if ( a2 < 0xC8 )
      {
        if ( a2 <= 0x6B )
        {
          if ( a2 >= 0x64 || a2 == 10 )
            return sub_911150(a1 + 16, a2, a3);
          return -40;
        }
        if ( a2 != 130 )
        {
          if ( a2 < 0x82 )
            return -40;
          result = -40;
          if ( a2 - 160 > 4 )
            return result;
        }
      }
    }
    else if ( a2 != 500 )
    {
      if ( a2 > 0x1F4 )
      {
        if ( a2 < 0x3E8 )
          return -40;
        if ( a2 > 0x3EA )
        {
          result = -40;
          if ( a2 - 1004 > 0xC )
            return result;
        }
      }
      else
      {
        if ( a2 == 400 )
        {
          if ( !a3 || !*(_QWORD *)(a1 + 904) )
            return sub_911150(a1 + 16, a2, a3);
          return -40;
        }
        result = -40;
        if ( a2 < 0x190 || a2 > 0x192 )
          return result;
      }
    }
    return sub_911150(a1 + 16, a2, a3);
  }
  if ( a2 - 100 > 7 || ((1LL << ((unsigned __int8)a2 - 100)) & 0xFD) == 0 )
    return -60;
  *(_DWORD *)(a1 + 4) = 1;
  return sub_911150(a1 + 16, a2, a3);
}
