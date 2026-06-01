_QWORD *__fastcall sub_308B10(_QWORD *a1, char *a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rax
  size_t v9; // r15
  __int64 v10; // rbx
  size_t v11; // r13
  _QWORD *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rdi
  _QWORD *v15; // rcx
  _QWORD *v16; // rbp
  __int64 v18; // rdi
  __int64 v19; // rdi
  void *v20; // rax
  const void *v21; // rsi
  void *v22; // rax
  const void *v23; // rsi
  const char *v24; // rsi
  const char *v25; // rdi
  unsigned int v26; // eax
  __int64 v27; // [rsp+0h] [rbp-48h]

  v8 = operator new(0x58u);
  v9 = *(_QWORD *)(a3 + 8);
  *(_QWORD *)(v8 + 32) = 0;
  v10 = v8;
  *(_OWORD *)(v8 + 40) = 0;
  if ( v9 )
  {
    v22 = (void *)qalloc_or_throw(v9);
    *(_QWORD *)(v10 + 32) = v22;
    v23 = *(const void **)a3;
    *(_QWORD *)(v10 + 48) = v9;
    memcpy(v22, v23, v9);
    *(_QWORD *)(v10 + 40) = v9;
  }
  v11 = *(_QWORD *)(a4 + 8);
  *(_QWORD *)(v10 + 56) = 0;
  *(_OWORD *)(v10 + 64) = 0;
  if ( v11 )
  {
    v20 = (void *)qalloc_or_throw(v11);
    *(_QWORD *)(v10 + 56) = v20;
    v21 = *(const void **)a4;
    *(_QWORD *)(v10 + 72) = v11;
    memcpy(v20, v21, v11);
    *(_QWORD *)(v10 + 64) = v11;
  }
  *(_QWORD *)(v10 + 80) = *(_QWORD *)(a4 + 24);
  v12 = sub_308950(a1, a2, v10 + 32);
  if ( v13 )
  {
    v14 = 1;
    v15 = a1 + 1;
    if ( !v12 && (_QWORD *)v13 != v15 )
    {
      v24 = &s1;
      if ( *(_QWORD *)(v13 + 40) )
        v24 = *(const char **)(v13 + 32);
      v25 = &s1;
      if ( *(_QWORD *)(v10 + 40) )
        v25 = *(const char **)(v10 + 32);
      v27 = v13;
      v26 = strcmp(v25, v24);
      v15 = a1 + 1;
      v13 = v27;
      v14 = v26 >> 31;
    }
    std::_Rb_tree_insert_and_rebalance(v14, v10, v13, v15);
    ++a1[5];
    return (_QWORD *)v10;
  }
  else
  {
    v16 = v12;
    if ( v10 )
    {
      v18 = *(_QWORD *)(v10 + 56);
      if ( v18 )
      {
        *(_QWORD *)(v10 + 64) = 0;
        qfree(v18, a2);
      }
      v19 = *(_QWORD *)(v10 + 32);
      if ( v19 )
      {
        *(_QWORD *)(v10 + 40) = 0;
        qfree(v19, a2);
      }
      operator delete((void *)v10, 0x58u);
    }
  }
  return v16;
}
