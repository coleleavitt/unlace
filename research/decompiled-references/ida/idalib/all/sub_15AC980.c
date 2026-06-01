char *__fastcall sub_15AC980(int a1)
{
  char *result; // rax

  result = "signed";
  if ( a1 != 1 )
  {
    result = "unsigned";
    if ( a1 != 2 )
      return "unspecified";
  }
  return result;
}
