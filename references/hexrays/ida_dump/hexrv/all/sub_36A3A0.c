unsigned __int8 __fastcall sub_36A3A0(__int64 a1, unsigned int a2)
{
  unsigned __int8 result; // al
  __int64 v3; // rax
  unsigned __int64 v4; // rbx

  result = getinf_flag(67, 256);
  if ( result )
  {
    if ( a2 == 48 )
      return (*(_BYTE *)(a1 + 48) & 8) == 0;
    if ( a2 <= 0x30 )
    {
      if ( !a2 )
      {
        if ( !under_debugger )
          sub_37DDE0(52074);
        BUG();
      }
    }
    else
    {
      if ( a2 == 64 )
        return result;
      v3 = 0x100010001LL;
      v4 = a2 - 112;
      result = _bittest64(&v3, v4);
      if ( (unsigned int)v4 <= 0x20 )
        return result;
    }
    return 0;
  }
  return result;
}
