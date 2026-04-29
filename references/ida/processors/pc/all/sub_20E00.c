unsigned __int8 __fastcall sub_20E00(unsigned __int64 a1)
{
  __int64 v1; // rax
  unsigned __int8 result; // al
  __int64 v3; // rax
  __int64 v4; // rax

  if ( (unsigned __int16)a1 > 0x753u )
  {
    v3 = 0x1C207FFFE752E1LL;
    LOWORD(a1) = a1 - 1881;
    result = _bittest64(&v3, a1);
    if ( (unsigned __int16)a1 >= 0x35u )
      return 0;
  }
  else
  {
    if ( (unsigned __int16)a1 > 0x724u )
    {
      v4 = 0x7FFFFFF03F9DLL;
      LOWORD(a1) = a1 - 1829;
      return _bittest64(&v4, a1);
    }
    if ( (unsigned __int16)a1 <= 0x374u )
    {
      if ( (unsigned __int16)a1 <= 0x338u )
      {
        LOWORD(a1) = a1 - 768;
        if ( (unsigned __int16)a1 > 0x33u )
          return 0;
        v1 = 0xF0BCB8000000FLL;
        return _bittest64(&v1, a1);
      }
      return 1;
    }
    if ( (unsigned __int16)a1 > 0x534u )
    {
      if ( (unsigned __int16)a1 > 0x542u )
        return (unsigned __int16)(a1 - 1514) <= 3u;
      else
        return (unsigned __int16)a1 > 0x53Du;
    }
    else
    {
      if ( (unsigned __int16)a1 > 0x52Au )
        return 1;
      if ( (unsigned __int16)a1 > 0x44Bu )
      {
        return (unsigned __int16)(a1 - 1101) <= 3u;
      }
      else
      {
        result = 1;
        if ( (unsigned __int16)a1 <= 0x447u )
          return (unsigned __int16)(a1 - 935) <= 3u;
      }
    }
  }
  return result;
}
