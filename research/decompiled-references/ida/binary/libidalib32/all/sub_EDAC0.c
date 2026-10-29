_BOOL8 sub_EDAC0()
{
  bool v0; // dl
  _BOOL8 result; // rax

  v0 = sub_E5310();
  result = 1;
  if ( !v0 )
  {
    if ( !dword_2515A4 )
      return (unsigned int)sub_ECBA0(-1) != -1;
    result = 0;
    if ( !byte_2515A8 )
    {
      if ( dbg )
      {
        if ( dword_25159C )
        {
          byte_2515A0 = 1;
          byte_251290 = 0;
          return 1;
        }
        if ( dword_2515A4 >= 0 )
          return 1;
        return (int)sub_D46B0(0, 0) > 0;
      }
    }
  }
  return result;
}

