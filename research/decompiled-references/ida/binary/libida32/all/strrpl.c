const char *__fastcall strrpl(const char *a1, int a2, int a3)
{
  char v4; // bl
  char *i; // rdi

  if ( a2 != a3 )
  {
    if ( a1 )
    {
      v4 = a3;
      for ( i = strchr(a1, a2); i; i = strchr(i, a2) )
        *i = v4;
    }
  }
  return a1;
}

