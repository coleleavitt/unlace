_QWORD *__fastcall sub_5DB1C0(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  const char *v4; // r14
  _QWORD *v5; // rbx
  __int64 v6; // r15
  size_t v7; // rbp
  void *v8; // rax
  _QWORD *v9; // rax
  __int64 v10; // rdx
  _QWORD *v11; // r12
  void *v13; // rdi
  const char *v14; // rsi
  const char *v15; // rdi

  v3 = operator new(0x40u);
  v4 = *(const char **)a2;
  *(_QWORD *)(v3 + 32) = 0;
  v5 = (_QWORD *)v3;
  v6 = v3 + 32;
  *(_OWORD *)(v3 + 40) = 0;
  if ( v4 )
  {
    v6 = v3 + 32;
    v7 = strlen(v4);
    v8 = (void *)qvector_reserve(v5 + 4, 0, v7 + 1, 1);
    v5[4] = v8;
    v5[5] = v7 + 1;
    memmove(v8, v4, v7);
    *(_BYTE *)(v5[4] + v7) = 0;
  }
  v5[7] = *(int *)(a2 + 8);
  v9 = sub_5DB070(a1, v6);
  if ( v10 )
  {
    if ( !v9 && v10 != a1 + 8 )
    {
      v14 = haystack;
      if ( *(_QWORD *)(v10 + 40) )
        v14 = *(const char **)(v10 + 32);
      v15 = haystack;
      if ( v5[5] )
        v15 = (const char *)v5[4];
      strcmp(v15, v14);
    }
    std::_Rb_tree_insert_and_rebalance();
    ++*(_QWORD *)(a1 + 40);
    return v5;
  }
  else
  {
    v11 = v9;
    if ( v5 )
    {
      v13 = (void *)v5[4];
      if ( v13 )
      {
        v5[5] = 0;
        qfree(v13);
      }
      operator delete(v5, 0x40u);
    }
  }
  return v11;
}

