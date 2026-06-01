const char *__fastcall sub_206D6C0(int a1)
{
  const char *result; // rax

  result = "FullDebug";
  if ( a1 != 1 )
  {
    result = "NoDebug";
    if ( a1 )
    {
      result = "LineTablesOnly";
      if ( a1 != 2 )
      {
        result = "DebugDirectivesOnly";
        if ( a1 != 3 )
          return nullptr;
      }
    }
  }
  return result;
}
