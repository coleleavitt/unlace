char *__fastcall sub_1005ED0(int a1)
{
  char *result; // rax

  if ( a1 == 1 )
    return "runtime";
  if ( a1 <= 1 )
  {
    result = "never";
    if ( a1 )
      return "invalid";
  }
  else
  {
    if ( a1 != 2 )
      return "invalid";
    return "always";
  }
  return result;
}
