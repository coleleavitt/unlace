char *__fastcall sub_1543BE0(int a1)
{
  char *result; // rax

  result = (char *)"volatile";
  if ( a1 != 1 )
  {
    result = "unspecified";
    if ( a1 )
    {
      result = "inline";
      if ( a1 != 2 )
        return "goto";
    }
  }
  return result;
}
