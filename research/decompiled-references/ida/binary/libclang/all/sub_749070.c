char *__fastcall sub_749070(int a1)
{
  char *result; // rax

  result = "nohost";
  if ( a1 != 1 )
  {
    result = "any";
    if ( a1 != 2 )
      return "host";
  }
  return result;
}

