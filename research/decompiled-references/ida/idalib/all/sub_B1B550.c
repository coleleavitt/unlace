char *__fastcall sub_B1B550(int a1)
{
  char *result; // rax

  result = "hidden";
  if ( a1 != 1 )
  {
    result = "default";
    if ( a1 )
      return "protected";
  }
  return result;
}
