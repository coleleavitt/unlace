unsigned __int8 __fastcall sub_36420(int a1, signed int a2)
{
  unsigned __int8 result; // al

  if ( a2 <= 15 )
  {
    result = 0;
    if ( a2 != -1 )
      return _bittest(&a1, a2);
  }
  else
  {
    if ( (unsigned int)(a2 - 29) <= 5 )
    {
      a2 -= 13;
      return _bittest(&a1, a2);
    }
    return 0;
  }
  return result;
}
