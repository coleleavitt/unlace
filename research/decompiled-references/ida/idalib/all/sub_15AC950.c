char *__fastcall sub_15AC950(int a1)
{
  char *result; // rax

  result = (char *)"imaginary";
  if ( a1 != 1 )
  {
    result = "unspecified";
    if ( a1 )
      return (char *)"complex";
  }
  return result;
}
