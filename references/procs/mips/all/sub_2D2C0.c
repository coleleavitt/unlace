unsigned __int8 __fastcall sub_2D2C0(unsigned __int64 a1)
{
  unsigned __int8 result; // al
  __int64 v2; // rax
  __int64 v3; // rax

  result = 1;
  if ( (unsigned __int16)(a1 - 82) > 0x1Fu )
  {
    if ( (unsigned __int16)a1 > 0x34Au )
    {
      v2 = 0x7F8000000060FLL;
      LOWORD(a1) = a1 - 1500;
      result = _bittest64(&v2, a1);
      if ( (unsigned __int16)a1 >= 0x33u )
        return 0;
    }
    else if ( (unsigned __int16)a1 > 0x313u )
    {
      v3 = 0x603C000000000FLL;
      LOWORD(a1) = a1 - 788;
      return _bittest64(&v3, a1);
    }
    else if ( (unsigned __int16)a1 > 0x241u )
    {
      return (unsigned __int16)(a1 - 629) <= 3u;
    }
    else if ( (unsigned __int16)a1 <= 0x23Du )
    {
      if ( (unsigned __int16)a1 > 0xC9u )
        return (unsigned __int16)(a1 - 439) <= 1u;
      else
        return (unsigned __int16)a1 > 0xC5u;
    }
  }
  return result;
}
