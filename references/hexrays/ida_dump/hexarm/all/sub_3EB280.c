unsigned __int8 __fastcall sub_3EB280(unsigned __int64 a1)
{
  unsigned __int8 result; // al
  __int64 v2; // rax

  if ( (unsigned __int16)a1 > 0x1DDu )
  {
    if ( (unsigned __int16)a1 > 0x304u )
    {
      return (_WORD)a1 == 872;
    }
    else
    {
      result = 1;
      if ( (unsigned __int16)a1 <= 0x300u )
        return (unsigned __int16)(a1 - 634) <= 7u;
    }
  }
  else
  {
    if ( (unsigned __int16)a1 > 0x1A0u )
    {
      v2 = 0x1500000000000001LL;
      LOWORD(a1) = a1 - 417;
      return _bittest64(&v2, a1);
    }
    if ( (_WORD)a1 == 220 )
      return 1;
    if ( (unsigned __int16)a1 <= 0xDCu )
    {
      if ( (_WORD)a1 != 71 )
      {
        if ( (unsigned __int16)a1 <= 0x47u )
          return (_WORD)a1 == 32;
        else
          return (unsigned __int16)(a1 - 137) <= 1u;
      }
      return 1;
    }
    if ( (unsigned __int16)a1 > 0x156u )
    {
      return (unsigned __int16)(a1 - 412) <= 3u;
    }
    else
    {
      result = 1;
      if ( (unsigned __int16)a1 <= 0x152u )
        return (unsigned __int16)(a1 - 260) <= 2u;
    }
  }
  return result;
}
