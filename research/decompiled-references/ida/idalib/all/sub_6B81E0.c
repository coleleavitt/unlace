bool __fastcall sub_6B81E0(unsigned __int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  bool result; // al
  __int64 v5; // rcx
  __int64 v6; // rsi

  result = 0;
  if ( a4 | a2 )
  {
    if ( a2 )
    {
      if ( a4 )
      {
        if ( a1 + a2 - 1 >= a3 )
          return a3 + a4 - 1 >= a1;
      }
      else
      {
        v6 = a2 - 1;
        result = v6 != 0 && a3 >= a1 + 1;
        if ( result )
          return a1 + v6 >= a3;
      }
    }
    else
    {
      v5 = a4 - 1;
      result = v5 != 0 && a1 >= a3 + 1;
      if ( result )
        return a3 + v5 >= a1;
    }
  }
  return result;
}
