void __fastcall sub_274880(const char **a1, const char *a2, unsigned __int64 a3)
{
  unsigned __int64 i; // rbx
  const char *v6; // rax
  unsigned __int64 v8; // rdx
  const char *v9; // rsi
  size_t v10; // r14
  __int128 v11; // xmm0
  char *v12; // rbp
  size_t v13; // r14
  void *v14; // rax
  const char *v15; // rbp
  const char *v16; // rax
  __int64 v17; // rdi
  __int64 v18; // rax
  void *v19; // rax
  char *v20; // rbp
  char *v21; // rax
  const char *src; // [rsp+8h] [rbp-40h]

  i = (unsigned __int64)a1[1];
  if ( (unsigned __int64)a2 < i )
  {
    v15 = a2;
    do
    {
      v16 = &(*a1)[24 * (_QWORD)v15];
      v17 = *(_QWORD *)v16;
      if ( *(_QWORD *)v16 )
      {
        *((_QWORD *)v16 + 1) = 0;
        qfree(v17, a2);
      }
      ++v15;
    }
    while ( (const char *)i != v15 );
    a1[1] = a2;
    return;
  }
  if ( i >= (unsigned __int64)a2 )
    return;
  v6 = *a1;
  v8 = (unsigned __int64)a1[2];
  v9 = *a1;
  if ( a3 >= (unsigned __int64)*a1 && a3 < (unsigned __int64)&v6[24 * v8] )
  {
    v10 = *(_QWORD *)(a3 + 8);
    if ( v10 )
    {
      v21 = (char *)qalloc_or_throw(*(_QWORD *)(a3 + 8));
      v9 = *(const char **)a3;
      src = v21;
      memcpy(v21, *(const void **)a3, v10);
      if ( a1[2] >= a2 )
        goto LABEL_8;
      v6 = *a1;
    }
    else
    {
      src = nullptr;
      if ( v8 >= (unsigned __int64)a2 )
        goto LABEL_28;
    }
    v9 = v6;
    *a1 = (const char *)qvector_reserve(a1, v6, a2, 24);
LABEL_8:
    for ( i = (unsigned __int64)a1[1]; i < (unsigned __int64)a2; ++i )
    {
      v6 = *a1;
LABEL_28:
      v20 = (char *)&v6[24 * i];
      *(_QWORD *)v20 = 0;
      *(_OWORD *)(v20 + 8) = 0;
      if ( v10 )
      {
        v19 = (void *)qalloc_or_throw(v10);
        *(_QWORD *)v20 = v19;
        v9 = src;
        *((_QWORD *)v20 + 2) = v10;
        memcpy(v19, src, v10);
        *((_QWORD *)v20 + 1) = v10;
      }
    }
    a1[1] = a2;
    if ( src )
      qfree(src, v9);
    return;
  }
  if ( v8 >= (unsigned __int64)a2
    || (v18 = qvector_reserve(a1, v9, a2, 24),
        i = (unsigned __int64)a1[1],
        *a1 = (const char *)v18,
        v9 = (const char *)v18,
        i < (unsigned __int64)a2) )
  {
    v11 = 0;
    while ( 1 )
    {
      v12 = (char *)&v9[24 * i];
      *(_QWORD *)v12 = 0;
      *(_OWORD *)(v12 + 8) = v11;
      v13 = *(_QWORD *)(a3 + 8);
      if ( v13 )
      {
        ++i;
        v14 = (void *)qalloc_or_throw(*(_QWORD *)(a3 + 8));
        *((_QWORD *)v12 + 2) = v13;
        *(_QWORD *)v12 = v14;
        memcpy(v14, *(const void **)a3, v13);
        *((_QWORD *)v12 + 1) = v13;
        v11 = 0;
        if ( i >= (unsigned __int64)a2 )
          break;
      }
      else if ( ++i >= (unsigned __int64)a2 )
      {
        break;
      }
      v9 = *a1;
    }
  }
  a1[1] = a2;
}
