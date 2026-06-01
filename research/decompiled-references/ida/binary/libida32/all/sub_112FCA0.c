char *__fastcall sub_112FCA0(char *a1, __int64 a2)
{
  char *result; // rax

  result = a1;
  if ( a2 == 3 )
  {
    if ( *(_WORD *)a1 == 13167 && a1[2] == 50 )
    {
      return "32";
    }
    else if ( *(_WORD *)a1 == 13934 && a1[2] == 52 )
    {
      return "64";
    }
  }
  return result;
}

