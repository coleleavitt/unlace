__int64 *__fastcall sub_755A50(__int64 *a1, const char *a2)
{
  size_t v2; // rax
  size_t v3; // r13
  size_t v4; // r12
  void *v5; // rax
  unsigned __int64 v6; // rbp
  __int64 v8; // rax
  char *v9; // rsi
  unsigned __int64 v10; // r12

  *a1 = 0;
  *(_OWORD *)(a1 + 1) = 0;
  if ( a2 )
  {
    v2 = strlen(a2);
    v3 = v2 + 1;
    v4 = v2;
    v5 = (void *)qvector_reserve(a1, 0, v2 + 1, 1);
    *a1 = (__int64)v5;
    a1[1] = v3;
    memmove(v5, a2, v4);
    *(_BYTE *)(*a1 + v4) = 0;
    v6 = a1[1];
    while ( v6 > 1 )
    {
      v9 = (char *)*a1;
      if ( *(_BYTE *)(*a1 + v6 - 2) != 47 )
        break;
      v10 = v6 - 1;
      if ( (__int64)(v6 - 1) <= 1 )
      {
        if ( v9 )
        {
          a1[1] = 0;
          qfree(v9);
          *a1 = 0;
          v6 = a1[1];
          a1[2] = 0;
        }
      }
      else
      {
        if ( a1[2] < v10 )
        {
          v8 = qvector_reserve(a1, v9, v6 - 1, 1);
          *a1 = v8;
          v9 = (char *)v8;
        }
        a1[1] = v10;
        v9[v6 - 2] = 0;
        v6 = a1[1];
      }
    }
  }
  return a1;
}

