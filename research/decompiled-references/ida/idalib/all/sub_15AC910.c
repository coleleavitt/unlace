char *__fastcall sub_15AC910(int a1)
{
  if ( a1 == 1 )
    return (char *)"short";
  if ( a1 <= 1 )
  {
    if ( !a1 )
      return "unspecified";
  }
  else
  {
    if ( a1 == 2 )
      return (char *)"long";
    if ( a1 == 3 )
      return (char *)"long long";
  }
  return (char *)sub_15AC950();
}
