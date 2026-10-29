_QWORD *__fastcall sub_6A100(_QWORD *a1, _QWORD *a2, __int64 a3, _QWORD *a4)
{
  __int64 v8; // rax
  size_t v9; // r15
  _QWORD *v10; // rbx
  _QWORD *v11; // rax
  __int64 v12; // rdx
  _QWORD *v13; // rbp
  void *v15; // rdi
  void *v16; // rax
  const void *v17; // rsi
  const char *v18; // rsi
  const char *v19; // rdi

  v8 = operator new(0x40u);
  v9 = *(_QWORD *)(a3 + 8);
  *(_QWORD *)(v8 + 32) = 0;
  v10 = (_QWORD *)v8;
  *(_OWORD *)(v8 + 40) = 0;
  if ( v9 )
  {
    v16 = (void *)sub_96030(v9);
    v10[4] = v16;
    v17 = *(const void **)a3;
    v10[6] = v9;
    memcpy(v16, v17, v9);
    v10[5] = v9;
  }
  v10[7] = *a4;
  v11 = sub_69F40(a1, a2, (__int64)(v10 + 4));
  if ( v12 )
  {
    if ( !v11 && (_QWORD *)v12 != a1 + 1 )
    {
      v18 = haystack;
      if ( *(_QWORD *)(v12 + 40) )
        v18 = *(const char **)(v12 + 32);
      v19 = haystack;
      if ( v10[5] )
        v19 = (const char *)v10[4];
      strcmp(v19, v18);
    }
    std::_Rb_tree_insert_and_rebalance();
    ++a1[5];
    return v10;
  }
  else
  {
    v13 = v11;
    if ( v10 )
    {
      v15 = (void *)v10[4];
      if ( v15 )
      {
        v10[5] = 0;
        j__free(v15);
      }
      operator delete(v10, 0x40u);
    }
  }
  return v13;
}

