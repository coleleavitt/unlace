const char *__fastcall sub_206D4D0(int a1)
{
  const char *result; // rax

  result = "Decimal";
  if ( a1 != 1 )
  {
    result = "Binary";
    if ( a1 )
    {
      result = "Rational";
      if ( a1 != 2 )
        return nullptr;
    }
  }
  return result;
}
