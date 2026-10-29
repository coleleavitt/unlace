_QWORD *__fastcall sub_82ED20(_QWORD *a1, char *a2, __int64 *a3)
{
  __int64 v5; // rax
  __int64 v6; // r14
  _QWORD *v7; // rbx
  size_t v8; // r13
  _QWORD *v9; // rax
  __int64 v10; // rdx
  _QWORD *v11; // rbp
  void *v13; // rdi
  void *v14; // rax
  const char *v15; // rsi
  const char *v16; // rdi

  v5 = operator new(0x40u);
  v6 = *a3;
  *(_QWORD *)(v5 + 32) = 0;
  v7 = (_QWORD *)v5;
  *(_OWORD *)(v5 + 40) = 0;
  v8 = *(_QWORD *)(v6 + 8);
  if ( v8 )
  {
    v14 = (void *)qalloc_or_throw(*(_QWORD *)(v6 + 8), a2);
    v7[4] = v14;
    v7[6] = v8;
    memcpy(v14, *(const void **)v6, v8);
    v7[5] = v8;
  }
  v7[7] = 0;
  v9 = sub_82EB60(a1, a2, (__int64)(v7 + 4));
  if ( v10 )
  {
    if ( !v9 && (_QWORD *)v10 != a1 + 1 )
    {
      v15 = haystack;
      if ( *(_QWORD *)(v10 + 40) )
        v15 = *(const char **)(v10 + 32);
      v16 = haystack;
      if ( v7[5] )
        v16 = (const char *)v7[4];
      strcmp(v16, v15);
    }
    std::_Rb_tree_insert_and_rebalance();
    ++a1[5];
    return v7;
  }
  v11 = v9;
  if ( !v7 )
    return v11;
  v13 = (void *)v7[4];
  if ( v13 )
  {
    v7[5] = 0;
    qfree(v13);
  }
  operator delete(v7, 0x40u);
  return v11;
}

