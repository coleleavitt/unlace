bool __fastcall sub_3EAF40(int a1, int a2, int a3)
{
  bool result; // al

  result = 0;
  if ( a2 >= a1 && (a2 > a1 + 124 || !(result = a3 == -1 || a3 == 4) || (a2 & 3) != 0) )
  {
    result = 0;
    if ( a2 <= a1 + 248 )
    {
      result = a3 == -1 || a3 == 8;
      if ( result )
        return (a2 & 7) == 0;
    }
  }
  return result;
}
