__int64 __fastcall sub_4E9E20(__int64 *src, __int64 *a2, __int64 *a3, __int64 *a4, __int64 *a5, __int64 a6, __int64 a7)
{
  __int64 *v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rax
  size_t v13; // r14
  signed __int64 v14; // r13
  __int64 *v15; // rbp

  v10 = src;
  if ( src != a2 )
  {
    while ( a3 != a4 )
    {
      if ( sub_4DE4A0(&a7, *a3, *v10) )
      {
        v11 = *a3;
        ++a5;
        ++a3;
        *(a5 - 1) = v11;
        if ( v10 == a2 )
          break;
      }
      else
      {
        v12 = *v10++;
        *a5++ = v12;
        if ( v10 == a2 )
          break;
      }
    }
  }
  v13 = (char *)a2 - (char *)v10;
  if ( (char *)a2 - (char *)v10 <= 8 )
  {
    if ( v13 == 8 )
      *a5 = *v10;
  }
  else
  {
    memmove(a5, v10, v13);
  }
  v14 = (char *)a4 - (char *)a3;
  v15 = (__int64 *)((char *)a5 + v13);
  if ( v14 <= 8 )
  {
    if ( v14 == 8 )
      *v15 = *a3;
  }
  else
  {
    memmove(v15, a3, v14);
  }
  return (__int64)v15 + v14;
}
