const char *__fastcall sub_B3C4F0(char a1)
{
  const char *result; // rax

  if ( a1 == 1 )
    return "weak_ordering";
  result = "partial_ordering";
  if ( a1 )
    return "strong_ordering";
  return result;
}

