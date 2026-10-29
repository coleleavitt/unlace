char *__fastcall sub_2241590(char *dest, char *src, char *a3, __int64 a4, __int64 a5, void *a6, __int64 a7)
{
  char *result; // rax
  size_t v10; // rbx
  signed __int64 v11; // rbx
  char *v12; // r12

  if ( a4 <= a5 || a5 > a7 )
  {
    if ( a4 > a7 )
    {
      sub_22403A0(dest, src, a3);
      return &dest[a3 - src];
    }
    else
    {
      result = a3;
      if ( a4 )
      {
        v11 = src - dest;
        if ( dest != src )
          memmove(a6, dest, src - dest);
        if ( a3 != src )
          memmove(dest, src, a3 - src);
        v12 = &a3[-v11];
        if ( v11 )
          memmove(v12, a6, src - dest);
        return v12;
      }
    }
  }
  else
  {
    result = dest;
    if ( a5 )
    {
      v10 = a3 - src;
      if ( a3 != src )
        memmove(a6, src, a3 - src);
      if ( dest != src )
        memmove(&a3[-(src - dest)], dest, src - dest);
      if ( v10 )
        memmove(dest, a6, v10);
      return &dest[v10];
    }
  }
  return result;
}
