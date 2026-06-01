void __fastcall sub_2F5AF0(__int64 *a1, __int64 *a2)
{
  size_t v2; // rbp
  void *v5; // r13
  const char *v6; // rsi
  char *v7; // rax
  const char *v8; // r14
  size_t v9; // rax
  size_t v10; // rbp
  size_t v11; // rbp
  void *v12; // rdi
  size_t v13; // r15
  unsigned __int64 v14; // rbp
  __int64 v15; // rdi
  void *v16; // rdi
  const char *v17; // r15
  void *v18; // rdi
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax

  v2 = a2[1];
  if ( v2 > 1 )
  {
    v5 = (void *)qalloc_or_throw(a2[1]);
    memcpy(v5, (const void *)*a2, v2);
    v6 = (const char *)&word_3A;
    v7 = strchr((const char *)v5, 58);
    if ( v7 )
    {
      *v7 = 0;
      v8 = v7 + 1;
      if ( v5 )
      {
        v9 = strlen((const char *)v5);
        v10 = v9;
        if ( v9 )
        {
          v12 = (void *)*a1;
          v13 = v9 + 1;
          if ( a1[2] < v9 + 1 )
          {
            v19 = qvector_reserve(a1, *a1, v9 + 1, 1);
            *a1 = v19;
            v12 = (void *)v19;
          }
          a1[1] = v13;
          v6 = (const char *)v5;
          memmove(v12, v5, v10);
          *(_BYTE *)(*a1 + v10) = 0;
        }
        else
        {
          a1[1] = 0;
        }
        v11 = strlen(v8);
        if ( !v11 )
        {
          a2[1] = 0;
LABEL_8:
          qfree(v5, v6);
          return;
        }
      }
      else
      {
        a1[1] = 0;
        v11 = strlen(v7 + 1);
        if ( !v11 )
        {
          a2[1] = 0;
          return;
        }
      }
      v16 = (void *)*a2;
      if ( a2[2] < v11 + 1 )
      {
        v20 = qvector_reserve(a2, *a2, v11 + 1, 1);
        *a2 = v20;
        v16 = (void *)v20;
      }
      a2[1] = v11 + 1;
      v6 = v8;
      memmove(v16, v8, v11);
      *(_BYTE *)(*a2 + v11) = 0;
    }
    else
    {
      if ( a2 != a1 )
      {
        v14 = a2[1];
        if ( v14 > 1 )
        {
          v17 = (const char *)*a2;
          v18 = (void *)*a1;
          if ( a1[2] < v14 )
          {
            v21 = qvector_reserve(a1, *a1, a2[1], 1);
            *a1 = v21;
            v18 = (void *)v21;
          }
          a1[1] = v14;
          v6 = v17;
          memmove(v18, v17, v14 - 1);
          *(_BYTE *)(*a1 + v14 - 1) = 0;
        }
        else
        {
          a1[1] = 0;
        }
      }
      v15 = *a2;
      if ( *a2 )
      {
        a2[1] = 0;
        qfree(v15, v6);
        *a2 = 0;
        a2[2] = 0;
      }
    }
    if ( v5 )
      goto LABEL_8;
  }
}
