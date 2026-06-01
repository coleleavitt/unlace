_QWORD *__fastcall sub_5E8020(_QWORD *a1, char *a2, __int64 *a3)
{
  __int64 v5; // rax
  __int64 v6; // r14
  __int64 v7; // rbx
  size_t v8; // r13
  _QWORD *v9; // rax
  __int64 v10; // rdx
  _QWORD *v11; // rbp
  void *v13; // rdi
  void *v14; // rax
  const char *v15; // rsi
  const char *v16; // rdi

  v5 = operator new(0x50u);
  v6 = *a3;
  *(_QWORD *)(v5 + 32) = 0;
  v7 = v5;
  *(_OWORD *)(v5 + 40) = 0;
  v8 = *(_QWORD *)(v6 + 8);
  if ( v8 )
  {
    v14 = (void *)qalloc_or_throw(*(_QWORD *)(v6 + 8), a2);
    *(_QWORD *)(v7 + 32) = v14;
    *(_QWORD *)(v7 + 48) = v8;
    memcpy(v14, *(const void **)v6, v8);
    *(_QWORD *)(v7 + 40) = v8;
  }
  *(_QWORD *)(v7 + 56) = 0;
  *(_OWORD *)(v7 + 64) = 0;
  v9 = sub_4D3870(a1, a2, v7 + 32);
  if ( v10 )
  {
    if ( !v9 && (_QWORD *)v10 != a1 + 1 )
    {
      v15 = haystack;
      if ( *(_QWORD *)(v10 + 40) )
        v15 = *(const char **)(v10 + 32);
      v16 = haystack;
      if ( *(_QWORD *)(v7 + 40) )
        v16 = *(const char **)(v7 + 32);
      strcmp(v16, v15);
    }
    std::_Rb_tree_insert_and_rebalance();
    ++a1[5];
    return (_QWORD *)v7;
  }
  v11 = v9;
  if ( !v7 )
    return v11;
  v13 = *(void **)(v7 + 32);
  if ( v13 )
  {
    *(_QWORD *)(v7 + 40) = 0;
    qfree(v13);
  }
  operator delete((void *)v7, 0x50u);
  return v11;
}

