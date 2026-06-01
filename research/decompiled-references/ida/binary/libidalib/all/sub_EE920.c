_BOOL8 sub_EE920()
{
  bool v0; // dl
  _BOOL8 result; // rax

  v0 = sub_E6130();
  result = 1;
  if ( !v0 )
  {
    if ( !dword_25274C )
      return (unsigned int)sub_EDA00(-1) != -1;
    result = 0;
    if ( !byte_252750 )
    {
      if ( dbg )
      {
        if ( dword_252744 )
        {
          byte_252748 = 1;
          byte_252408 = 0;
          return 1;
        }
        if ( dword_25274C >= 0 )
          return 1;
        return (int)sub_D5C00(0, 0) > 0;
      }
    }
  }
  return result;
}

