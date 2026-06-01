__int64 __fastcall sub_178D60(unsigned int a1, unsigned __int8 a2)
{
  __int64 result; // rax

  if ( a1 == 15 )
    return (unsigned int)a2 + 7;
  if ( a1 > 0xF )
  {
    if ( a1 == 63 )
    {
      return (unsigned int)a2 + 11;
    }
    else
    {
      result = (unsigned int)a2 + 9;
      if ( a1 != 72 )
        return 0;
    }
  }
  else if ( a1 == 12 )
  {
    return (unsigned int)a2 + 5;
  }
  else if ( a1 == 13 )
  {
    return (unsigned int)a2 + 3;
  }
  else
  {
    result = (unsigned int)a2 + 1;
    if ( a1 )
      return 0;
  }
  return result;
}
