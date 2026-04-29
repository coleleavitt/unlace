unsigned __int8 __fastcall sub_72AA0(unsigned __int64 a1)
{
  unsigned __int8 result; // al
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rax

  if ( (unsigned __int16)a1 > 0x1119u )
  {
    v2 = 0x8180BF0000103LL;
    LOWORD(a1) = a1 - 4394;
    result = _bittest64(&v2, a1);
    if ( (unsigned __int16)a1 >= 0x34u )
      return 0;
  }
  else if ( (unsigned __int16)a1 > 0x1101u )
  {
    LOWORD(a1) = a1 - 4354;
    v3 = 13393927;
    return _bittest64(&v3, a1);
  }
  else if ( (unsigned __int16)a1 > 0x101Bu )
  {
    return 0;
  }
  else if ( (unsigned __int16)a1 > 0x100Fu )
  {
    LOWORD(a1) = a1 - 4112;
    v4 = 3171;
    return _bittest64(&v4, a1);
  }
  else if ( (unsigned __int16)a1 > 0x208u )
  {
    return (unsigned __int16)(a1 - 768) <= 1u;
  }
  else
  {
    result = 1;
    if ( (unsigned __int16)a1 <= 0x203u )
      return (unsigned __int16)(a1 - 260) <= 4u;
  }
  return result;
}
