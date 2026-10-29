char *__fastcall sub_75F370(int a1)
{
  char *result; // rax

  result = "hidden";
  if ( a1 != 1 )
  {
    result = "protected";
    if ( a1 != 2 )
      return "default";
  }
  return result;
}

