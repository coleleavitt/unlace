const char *__fastcall sub_B60230(char a1)
{
  const char *result; // rax

  if ( a1 == 1 )
    return "weak_ordering";
  result = "partial_ordering";
  if ( a1 )
    return "strong_ordering";
  return result;
}
