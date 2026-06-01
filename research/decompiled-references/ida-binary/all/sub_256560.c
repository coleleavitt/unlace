_QWORD *__fastcall sub_256560(__int64 a1, const char **a2)
{
  __int64 v3; // rax
  const char *v4; // r14
  __int64 v5; // rbx
  size_t v6; // rax
  size_t v7; // r15
  size_t v8; // rbp
  void *v9; // rax
  const char *v10; // rbp
  size_t v11; // rax
  size_t v12; // r14
  size_t v13; // r13
  void *v14; // rax
  const char *v15; // rsi
  _QWORD *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rdi
  __int64 v19; // rcx
  _QWORD *v20; // r12
  __int64 v22; // rdi
  __int64 v23; // rdi
  const char *v24; // rsi
  const char *v25; // rdi
  unsigned int v26; // eax
  __int64 v27; // [rsp+0h] [rbp-48h]

  v3 = operator new(0x50u);
  v4 = *a2;
  *(_QWORD *)(v3 + 32) = 0;
  v5 = v3;
  *(_OWORD *)(v3 + 40) = 0;
  if ( v4 )
  {
    v6 = strlen(v4);
    v7 = v6 + 1;
    v8 = v6;
    v9 = (void *)qvector_reserve(v5 + 32, 0, v6 + 1, 1);
    *(_QWORD *)(v5 + 32) = v9;
    *(_QWORD *)(v5 + 40) = v7;
    memmove(v9, v4, v8);
    *(_BYTE *)(*(_QWORD *)(v5 + 32) + v8) = 0;
  }
  v10 = a2[1];
  *(_QWORD *)(v5 + 56) = 0;
  *(_OWORD *)(v5 + 64) = 0;
  if ( v10 )
  {
    v11 = strlen(v10);
    v12 = v11 + 1;
    v13 = v11;
    v14 = (void *)qvector_reserve(v5 + 56, 0, v11 + 1, 1);
    *(_QWORD *)(v5 + 56) = v14;
    *(_QWORD *)(v5 + 64) = v12;
    memmove(v14, v10, v13);
    *(_BYTE *)(*(_QWORD *)(v5 + 56) + v13) = 0;
  }
  v15 = (const char *)(v5 + 32);
  v16 = sub_256410(a1, v5 + 32);
  if ( v17 )
  {
    v18 = 1;
    v19 = a1 + 8;
    if ( !v16 && v17 != v19 )
    {
      v24 = &s1;
      if ( *(_QWORD *)(v17 + 40) )
        v24 = *(const char **)(v17 + 32);
      v25 = &s1;
      if ( *(_QWORD *)(v5 + 40) )
        v25 = *(const char **)(v5 + 32);
      v27 = v17;
      v26 = strcmp(v25, v24);
      v19 = a1 + 8;
      v17 = v27;
      v18 = v26 >> 31;
    }
    std::_Rb_tree_insert_and_rebalance(v18, v5, v17, v19);
    ++*(_QWORD *)(a1 + 40);
    return (_QWORD *)v5;
  }
  else
  {
    v20 = v16;
    if ( v5 )
    {
      v22 = *(_QWORD *)(v5 + 56);
      if ( v22 )
      {
        *(_QWORD *)(v5 + 64) = 0;
        qfree(v22, v15);
      }
      v23 = *(_QWORD *)(v5 + 32);
      if ( v23 )
      {
        *(_QWORD *)(v5 + 40) = 0;
        qfree(v23, v15);
      }
      operator delete((void *)v5, 0x50u);
    }
  }
  return v20;
}
