char *__fastcall sub_748D30(int a1)
{
  char *result; // rax

  result = "inbranch";
  if ( a1 != 1 )
  {
    result = "notinbranch";
    if ( a1 != 2 )
      return (char *)&byte_3B9466E;
  }
  return result;
}

