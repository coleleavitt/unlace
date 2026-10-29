char *__fastcall sub_EB8E60(char *src, char *a2, char *a3, __int64 a4, __int64 a5, void *a6, __int64 a7)
{
  char *v9; // r10
  size_t v10; // rbp
  signed __int64 v12; // rbp
  signed __int64 v13; // r13

  if ( a4 > a5 && a5 <= a7 )
  {
    v9 = src;
    if ( a5 )
    {
      v10 = a3 - a2;
      if ( a2 != a3 )
        memmove(a6, a2, a3 - a2);
      if ( a2 != src )
        memmove(&a3[-(a2 - src)], src, a2 - src);
      if ( v10 )
        memmove(src, a6, v10);
      return &src[v10];
    }
    return v9;
  }
  if ( a4 > a7 )
  {
    v13 = a3 - a2;
    sub_EB2A40(src, a2, a3);
    return &src[v13];
  }
  else
  {
    v9 = a3;
    if ( !a4 )
      return v9;
    v12 = a2 - src;
    if ( a2 != src )
      memmove(a6, src, a2 - src);
    if ( a2 != a3 )
      memmove(src, a2, a3 - a2);
    v9 = &a3[-v12];
    if ( !v12 )
      return v9;
    return (char *)memmove(&a3[-v12], a6, a2 - src);
  }
}

