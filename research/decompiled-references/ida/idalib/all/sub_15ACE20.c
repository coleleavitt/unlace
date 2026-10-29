char *__fastcall sub_15ACE20(int a1)
{
  if ( a1 == 1 )
    return "constexpr";
  if ( a1 <= 1 )
  {
    if ( !a1 )
      return "unspecified";
  }
  else
  {
    if ( a1 == 2 )
      return "consteval";
    if ( a1 == 3 )
      return "constinit";
  }
  return (char *)sub_15ACE60();
}
