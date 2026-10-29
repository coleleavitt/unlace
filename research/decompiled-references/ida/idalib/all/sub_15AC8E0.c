char *__fastcall sub_15AC8E0(int a1)
{
  char *result; // rax

  result = "__thread";
  if ( a1 != 1 )
  {
    result = "unspecified";
    if ( a1 )
    {
      result = "thread_local";
      if ( a1 != 2 )
        return "_Thread_local";
    }
  }
  return result;
}
