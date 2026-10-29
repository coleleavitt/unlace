unsigned __int64 __fastcall sub_40E340(__int64 a1, const char **a2)
{
  __int64 v2; // rdi
  __int64 v4; // rbx
  void *v5; // rdi
  const char *v6; // r13
  const char *i; // rbx
  const char *v9; // rax
  const char *v10; // rdx
  const char *v11; // rsi
  size_t v12; // r15
  char *v13; // r14
  __int64 v14; // rax
  void *v15; // rax
  void *v16; // rsi
  char *v17; // rbp
  size_t v18; // r14
  const char *v19; // rbp
  __int64 v20; // rax
  void *v21; // rdi
  void *v22; // rax
  char *v23; // rbp
  char *v24; // rax
  void *src; // [rsp+0h] [rbp-58h] BYREF
  size_t n[2]; // [rsp+8h] [rbp-50h]
  unsigned __int64 v27; // [rsp+18h] [rbp-40h]

  v2 = *(int *)(a1 + 8);
  v27 = __readfsqword(0x28u);
  src = nullptr;
  v4 = *(_QWORD *)(switch_dbctx(v2) + 1448);
  *(_OWORD *)n = 0;
  src = (void *)qvector_reserve(&src, 0, 15, 1);
  n[0] = 15;
  strcpy((char *)src, "Group:Selector");
  v5 = src;
  v6 = (const char *)*(unsigned int *)(v4 + 72);
  i = a2[1];
  if ( v6 < i )
  {
    v19 = v6;
    do
    {
      v20 = (__int64)&(*a2)[24 * (_QWORD)v19];
      v21 = *(void **)v20;
      if ( *(_QWORD *)v20 )
      {
        *(_QWORD *)(v20 + 8) = 0;
        qfree(v21);
      }
      ++v19;
    }
    while ( v19 < i );
    a2[1] = v6;
    v5 = src;
    goto LABEL_3;
  }
  if ( i >= v6 )
    goto LABEL_3;
  v9 = *a2;
  v10 = a2[2];
  v11 = *a2;
  if ( &src < (void **)*a2 || &src >= (void **)&v9[24 * (_QWORD)v10] )
  {
    if ( v10 >= v6
      || (v14 = qvector_reserve(a2, v11, v6, 24), i = a2[1], *a2 = (const char *)v14, v11 = (const char *)v14, i < v6) )
    {
      while ( 1 )
      {
        v17 = (char *)&v11[24 * (_QWORD)i];
        *(_QWORD *)v17 = 0;
        *(_OWORD *)(v17 + 8) = 0;
        v18 = n[0];
        if ( n[0] )
        {
          v15 = (void *)qalloc_or_throw(n[0], v11);
          *(_QWORD *)v17 = v15;
          v16 = src;
          *((_QWORD *)v17 + 2) = v18;
          memcpy(v15, v16, v18);
          *((_QWORD *)v17 + 1) = v18;
        }
        if ( ++i >= v6 )
          break;
        v11 = *a2;
      }
    }
    a2[1] = v6;
    v5 = src;
    goto LABEL_3;
  }
  v12 = n[0];
  if ( n[0] )
  {
    v24 = (char *)qalloc_or_throw(n[0], v11);
    v11 = (const char *)src;
    v13 = v24;
    memcpy(v24, src, v12);
    if ( a2[2] >= v6 )
      goto LABEL_11;
    v9 = *a2;
  }
  else
  {
    v13 = nullptr;
    if ( v10 >= v6 )
      goto LABEL_29;
  }
  v11 = v9;
  *a2 = (const char *)qvector_reserve(a2, v9, v6, 24);
LABEL_11:
  for ( i = a2[1]; i < v6; ++i )
  {
    v9 = *a2;
LABEL_29:
    v23 = (char *)&v9[24 * (_QWORD)i];
    *(_QWORD *)v23 = 0;
    *(_OWORD *)(v23 + 8) = 0;
    if ( v12 )
    {
      v22 = (void *)qalloc_or_throw(v12, v11);
      *(_QWORD *)v23 = v22;
      v11 = v13;
      *((_QWORD *)v23 + 2) = v12;
      memcpy(v22, v13, v12);
      *((_QWORD *)v23 + 1) = v12;
    }
  }
  a2[1] = v6;
  if ( v13 )
    qfree(v13);
  v5 = src;
LABEL_3:
  if ( v5 )
  {
    n[0] = 0;
    qfree(v5);
  }
  return v27 - __readfsqword(0x28u);
}

