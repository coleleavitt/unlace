char *__fastcall std::__rotate_adaptive<int *,int *,long>(
        char *dest,
        char *src,
        char *a3,
        __int64 a4,
        __int64 a5,
        char *a6,
        __int64 a7)
{
  char *v8; // r10
  size_t v9; // rbx
  char *v10; // r14
  signed __int64 v12; // rbx
  char *v13; // r14
  signed __int64 v14; // r12
  char *v15; // [rsp+8h] [rbp-30h]
  char *v16; // [rsp+8h] [rbp-30h]

  if ( a4 > a5 && a5 <= a7 )
  {
    v8 = dest;
    if ( !a5 )
      return v8;
    v9 = a3 - src;
    if ( a3 == src )
    {
      v10 = &a6[v9];
      if ( dest == src )
        goto LABEL_6;
    }
    else
    {
      a6 = (char *)memmove(a6, src, a3 - src);
      v10 = &a6[v9];
      if ( dest == src )
      {
LABEL_6:
        if ( v10 == a6 )
          return &dest[v9];
LABEL_7:
        memmove(dest, a6, v9);
        return &dest[v9];
      }
    }
    v16 = a6;
    memmove(&a3[-(src - dest)], dest, src - dest);
    a6 = v16;
    if ( v10 == v16 )
      return &dest[v9];
    goto LABEL_7;
  }
  if ( a4 <= a7 )
  {
    v8 = a3;
    if ( a4 )
    {
      v12 = src - dest;
      if ( src != dest )
        a6 = (char *)memmove(a6, dest, src - dest);
      v13 = &a6[v12];
      if ( a3 != src )
      {
        v15 = a6;
        memmove(dest, src, a3 - src);
        a6 = v15;
      }
      v8 = &a3[-v12];
      if ( v13 != a6 )
        return (char *)memmove(&a3[-v12], a6, src - dest);
    }
    return v8;
  }
  v14 = a3 - src;
  std::_V2::__rotate<int *>(dest);
  return &dest[v14];
}

