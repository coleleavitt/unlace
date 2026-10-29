char *__fastcall sub_65640(char a1, char a2)
{
  char *result; // rax
  int v3; // edi

  result = "none";
  v3 = a1 & 7;
  if ( v3 )
  {
    result = "list";
    if ( a2 )
    {
      if ( v3 != 1 )
      {
        result = "read";
        if ( v3 != 3 )
        {
          result = "write";
          if ( v3 != 7 )
            return "?";
        }
      }
    }
    else if ( v3 != 7 )
    {
      result = "read";
      if ( v3 != 6 )
      {
        result = "write";
        if ( v3 != 4 )
          return "?";
      }
    }
  }
  return result;
}

