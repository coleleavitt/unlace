char *__fastcall sub_206D700(int a1)
{
  char *result; // rax

  result = "None";
  if ( a1 != 2 )
  {
    result = "Apple";
    if ( a1 != 3 )
    {
      result = "GNU";
      if ( a1 != 1 )
        return nullptr;
    }
  }
  return result;
}
