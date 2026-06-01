char *__fastcall sub_22CA2B0(unsigned int a1)
{
  char *result; // rax

  result = "arm64";
  if ( a1 != 3 )
  {
    if ( a1 <= 3 )
    {
      result = (char *)"arm";
      if ( a1 != 1 )
        return (char *)&byte_22F0C30;
    }
    else
    {
      result = (char *)"arm";
      if ( a1 != 35 )
      {
        result = (char *)"amd64";
        if ( a1 != 38 )
          return (char *)&byte_22F0C30;
      }
    }
  }
  return result;
}
