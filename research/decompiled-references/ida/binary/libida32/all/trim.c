const char *__fastcall trim(const char *a1)
{
  size_t v1; // rax
  const char *v2; // rbx
  __int64 v3; // rbp

  if ( a1 )
  {
    v1 = strlen(a1);
    v2 = &a1[v1];
    if ( a1 < &a1[v1] )
    {
      do
      {
        v3 = *(v2 - 1);
        if ( (unsigned int)v3 > 0x7F )
          break;
        if ( ((*__ctype_b_loc())[v3] & 0x2000) == 0 )
          break;
        --v2;
      }
      while ( a1 != v2 );
    }
    *v2 = 0;
  }
  return a1;
}

