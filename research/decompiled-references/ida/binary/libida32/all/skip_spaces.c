char *__fastcall skip_spaces(char *a1)
{
  char *v1; // rbp
  __int64 v2; // rbx
  const unsigned __int16 *v3; // rdx

  v1 = a1;
  if ( a1 )
  {
    v2 = *a1;
    if ( (unsigned int)v2 <= 0x7F )
    {
      v3 = *__ctype_b_loc();
      do
      {
        if ( (v3[v2] & 0x2000) == 0 )
          break;
        v2 = *++v1;
      }
      while ( (unsigned int)(char)v2 <= 0x7F );
    }
  }
  return v1;
}

