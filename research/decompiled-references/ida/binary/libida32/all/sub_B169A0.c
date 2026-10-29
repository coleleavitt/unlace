const char *__fastcall sub_B169A0(int a1)
{
  const char *result; // rax

  result = "[out]";
  if ( a1 != 1 )
  {
    result = "[in,out]";
    if ( a1 != 2 )
      return "[in]";
  }
  return result;
}

