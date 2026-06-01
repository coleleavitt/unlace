char *__fastcall sub_B15730(int a1)
{
  char *result; // rax

  result = "inbranch";
  if ( a1 != 1 )
  {
    result = (char *)&byte_22F0C30;
    if ( a1 )
      return "notinbranch";
  }
  return result;
}
