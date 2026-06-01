_QWORD *__fastcall sub_8CB7E0(_QWORD *a1, _QWORD *a2, __int64 a3, _QWORD *a4)
{
  __int64 v8; // rax
  size_t v9; // r15
  _QWORD *v10; // rbx
  _QWORD *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rdi
  _QWORD *v14; // rcx
  _QWORD *v15; // rbp
  void *v17; // rdi
  void *v18; // rax
  const void *v19; // rsi
  const char *v20; // rsi
  const char *v21; // rdi
  unsigned int v22; // eax
  __int64 v23; // [rsp+0h] [rbp-48h]

  v8 = operator new(0x40u);
  v9 = *(_QWORD *)(a3 + 8);
  *(_QWORD *)(v8 + 32) = 0;
  v10 = (_QWORD *)v8;
  *(_OWORD *)(v8 + 40) = 0;
  if ( v9 )
  {
    v18 = (void *)qalloc_or_throw(v9);
    v10[4] = v18;
    v19 = *(const void **)a3;
    v10[6] = v9;
    memcpy(v18, v19, v9);
    v10[5] = v9;
  }
  v10[7] = *a4;
  v11 = sub_8CB620(a1, a2, (__int64)(v10 + 4));
  if ( v12 )
  {
    v13 = 1;
    v14 = a1 + 1;
    if ( !v11 && (_QWORD *)v12 != v14 )
    {
      v20 = haystack;
      if ( *(_QWORD *)(v12 + 40) )
        v20 = *(const char **)(v12 + 32);
      v21 = haystack;
      if ( v10[5] )
        v21 = (const char *)v10[4];
      v23 = v12;
      v22 = strcmp(v21, v20);
      v14 = a1 + 1;
      v12 = v23;
      v13 = v22 >> 31;
    }
    std::_Rb_tree_insert_and_rebalance(v13, v10, v12, v14);
    ++a1[5];
    return v10;
  }
  else
  {
    v15 = v11;
    if ( v10 )
    {
      v17 = (void *)v10[4];
      if ( v17 )
      {
        v10[5] = 0;
        qfree(v17);
      }
      operator delete(v10, 0x40u);
    }
  }
  return v15;
}
