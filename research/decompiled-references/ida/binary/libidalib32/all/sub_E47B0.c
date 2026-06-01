_QWORD *__fastcall sub_E47B0(__int64 a1, const char **a2)
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
  _QWORD *v15; // rax
  __int64 v16; // rdx
  _QWORD *v17; // r12
  const char *v19; // rsi
  const char *v20; // rdi

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
    v9 = (void *)qvector_reserve();
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
    v14 = (void *)qvector_reserve();
    *(_QWORD *)(v5 + 56) = v14;
    *(_QWORD *)(v5 + 64) = v12;
    memmove(v14, v10, v13);
    *(_BYTE *)(*(_QWORD *)(v5 + 56) + v13) = 0;
  }
  v15 = sub_E4660(a1, v5 + 32);
  if ( v16 )
  {
    if ( !v15 && v16 != a1 + 8 )
    {
      v19 = s1;
      if ( *(_QWORD *)(v16 + 40) )
        v19 = *(const char **)(v16 + 32);
      v20 = s1;
      if ( *(_QWORD *)(v5 + 40) )
        v20 = *(const char **)(v5 + 32);
      strcmp(v20, v19);
    }
    std::_Rb_tree_insert_and_rebalance();
    ++*(_QWORD *)(a1 + 40);
    return (_QWORD *)v5;
  }
  else
  {
    v17 = v15;
    if ( v5 )
    {
      if ( *(_QWORD *)(v5 + 56) )
      {
        *(_QWORD *)(v5 + 64) = 0;
        qfree();
      }
      if ( *(_QWORD *)(v5 + 32) )
      {
        *(_QWORD *)(v5 + 40) = 0;
        qfree();
      }
      operator delete((void *)v5, 0x50u);
    }
  }
  return v17;
}

