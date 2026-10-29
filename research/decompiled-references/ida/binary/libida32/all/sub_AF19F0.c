char *__fastcall sub_AF19F0(int a1)
{
  char *result; // rax

  result = "inbranch";
  if ( a1 != 1 )
  {
    result = (char *)&byte_22CD811;
    if ( a1 )
      return "notinbranch";
  }
  return result;
}

