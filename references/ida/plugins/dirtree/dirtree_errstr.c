char *__fastcall dirtree_errstr(unsigned __int8 a1)
{
  char *result; // rax

  result = "?";
  if ( a1 <= 9u )
    return (char *)*(&off_2B36640 + a1);
  return result;
}
