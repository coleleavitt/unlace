unsigned __int64 __fastcall sub_421A30(__int64 a1, __int64 *a2)
{
  __int64 v2; // rdi
  __int64 v4; // rbx
  void *v5; // rdi
  unsigned __int64 v6; // r13
  unsigned __int64 i; // rbx
  __int64 v9; // rax
  unsigned __int64 v10; // rdx
  __int64 v11; // rsi
  size_t v12; // r15
  void *v13; // r14
  __int64 v14; // rax
  void *v15; // rax
  void *v16; // rsi
  __int64 v17; // rbp
  size_t v18; // r14
  unsigned __int64 v19; // rbp
  __int64 v20; // rax
  void *v21; // rdi
  void *v22; // rax
  unsigned __int64 v23; // rbp
  void *src; // [rsp+0h] [rbp-58h] BYREF
  size_t n[2]; // [rsp+8h] [rbp-50h]
  unsigned __int64 v26; // [rsp+18h] [rbp-40h]

  v2 = *(int *)(a1 + 8);
  v26 = __readfsqword(0x28u);
  src = nullptr;
  v4 = *(_QWORD *)(switch_dbctx(v2) + 1640);
  *(_OWORD *)n = 0;
  src = (void *)qvector_reserve(&src, 0, 15, 1);
  n[0] = 15;
  strcpy((char *)src, "Group:Selector");
  v5 = src;
  v6 = *(unsigned int *)(v4 + 136);
  i = a2[1];
  if ( v6 < i )
  {
    v19 = v6;
    do
    {
      v20 = *a2 + 24 * v19;
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
  if ( (unsigned __int64)&src < *a2 || (unsigned __int64)&src >= v9 + 24 * v10 )
  {
    if ( v10 >= v6 || (v14 = qvector_reserve(a2, v11, v6, 24), i = a2[1], *a2 = v14, v11 = v14, i < v6) )
    {
      while ( 1 )
      {
        v17 = v11 + 24 * i;
        *(_QWORD *)v17 = 0;
        *(_OWORD *)(v17 + 8) = 0;
        v18 = n[0];
        if ( n[0] )
        {
          v15 = (void *)qalloc_or_throw(n[0]);
          *(_QWORD *)v17 = v15;
          v16 = src;
          *(_QWORD *)(v17 + 16) = v18;
          memcpy(v15, v16, v18);
          *(_QWORD *)(v17 + 8) = v18;
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
    v13 = (void *)qalloc_or_throw(n[0]);
    memcpy(v13, src, v12);
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
  *a2 = qvector_reserve(a2, v9, v6, 24);
LABEL_11:
  for ( i = a2[1]; i < v6; ++i )
  {
    v9 = *a2;
LABEL_29:
    v23 = v9 + 24 * i;
    *(_QWORD *)v23 = 0;
    *(_OWORD *)(v23 + 8) = 0;
    if ( v12 )
    {
      v22 = (void *)qalloc_or_throw(v12);
      *(_QWORD *)v23 = v22;
      *(_QWORD *)(v23 + 16) = v12;
      memcpy(v22, v13, v12);
      *(_QWORD *)(v23 + 8) = v12;
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
  return v26 - __readfsqword(0x28u);
}
