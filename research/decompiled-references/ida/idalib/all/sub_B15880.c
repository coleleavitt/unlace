char *__fastcall sub_B15880(int a1)
{
  char *result; // rax

  result = "nohost";
  if ( a1 != 1 )
  {
    result = "host";
    if ( a1 )
      return (char *)"any";
  }
  return result;
}
