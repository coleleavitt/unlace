char *__fastcall sub_986660(int a1)
{
  char *result; // rax

  if ( a1 == 1 )
    return "unknown";
  if ( !a1 )
    return "none";
  result = "unconsumed";
  if ( a1 != 2 )
    return "consumed";
  return result;
}

