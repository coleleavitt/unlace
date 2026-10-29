_QWORD *__fastcall sub_157CB0(_QWORD *a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rax
  size_t v9; // r15
  __int64 v10; // rbx
  size_t v11; // r13
  _QWORD *v12; // rax
  __int64 v13; // rdx
  _QWORD *v14; // rbp
  void *v16; // rax
  const void *v17; // rsi
  void *v18; // rax
  const void *v19; // rsi
  const char *v20; // rsi
  const char *v21; // rdi

  v8 = operator new(0x58u);
  v9 = *(_QWORD *)(a3 + 8);
  *(_QWORD *)(v8 + 32) = 0;
  v10 = v8;
  *(_OWORD *)(v8 + 40) = 0;
  if ( v9 )
  {
    v18 = (void *)qalloc_or_throw();
    *(_QWORD *)(v10 + 32) = v18;
    v19 = *(const void **)a3;
    *(_QWORD *)(v10 + 48) = v9;
    memcpy(v18, v19, v9);
    *(_QWORD *)(v10 + 40) = v9;
  }
  v11 = *(_QWORD *)(a4 + 8);
  *(_QWORD *)(v10 + 56) = 0;
  *(_OWORD *)(v10 + 64) = 0;
  if ( v11 )
  {
    v16 = (void *)qalloc_or_throw();
    *(_QWORD *)(v10 + 56) = v16;
    v17 = *(const void **)a4;
    *(_QWORD *)(v10 + 72) = v11;
    memcpy(v16, v17, v11);
    *(_QWORD *)(v10 + 64) = v11;
  }
  *(_QWORD *)(v10 + 80) = *(_QWORD *)(a4 + 24);
  v12 = sub_157AF0(a1, a2, v10 + 32);
  if ( v13 )
  {
    if ( !v12 && (_QWORD *)v13 != a1 + 1 )
    {
      v20 = s1;
      if ( *(_QWORD *)(v13 + 40) )
        v20 = *(const char **)(v13 + 32);
      v21 = s1;
      if ( *(_QWORD *)(v10 + 40) )
        v21 = *(const char **)(v10 + 32);
      strcmp(v21, v20);
    }
    std::_Rb_tree_insert_and_rebalance();
    ++a1[5];
    return (_QWORD *)v10;
  }
  else
  {
    v14 = v12;
    if ( v10 )
    {
      if ( *(_QWORD *)(v10 + 56) )
      {
        *(_QWORD *)(v10 + 64) = 0;
        qfree();
      }
      if ( *(_QWORD *)(v10 + 32) )
      {
        *(_QWORD *)(v10 + 40) = 0;
        qfree();
      }
      operator delete((void *)v10, 0x58u);
    }
  }
  return v14;
}

