char *__fastcall sub_FDFBE0(char a1, char a2)
{
  char *result; // rax

  if ( a1 == 1 )
  {
    result = "nullable";
    if ( !a2 )
      return "_Nullable";
  }
  else if ( a1 )
  {
    if ( a1 == 2 )
    {
      result = "null_unspecified";
      if ( !a2 )
        return "_Null_unspecified";
    }
    else
    {
      return "_Nullable_result";
    }
  }
  else
  {
    result = "nonnull";
    if ( !a2 )
      return "_Nonnull";
  }
  return result;
}
