_QWORD *__fastcall sub_512B90(_QWORD *a1, _QWORD *a2, __int64 *a3)
{
  __int64 v5; // rax
  __int64 v6; // r14
  __int64 v7; // rbx
  size_t v8; // r13
  _QWORD *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rdi
  _QWORD *v12; // rcx
  _QWORD *v13; // rbp
  void *v15; // rdi
  void *v16; // rax
  const char *v17; // rsi
  const char *v18; // rdi
  unsigned int v19; // eax
  __int64 v20; // [rsp+0h] [rbp-38h]

  v5 = operator new(0x40u);
  v6 = *a3;
  *(_QWORD *)(v5 + 32) = 0;
  v7 = v5;
  *(_OWORD *)(v5 + 40) = 0;
  v8 = *(_QWORD *)(v6 + 8);
  if ( v8 )
  {
    v16 = (void *)qalloc_or_throw(*(_QWORD *)(v6 + 8));
    *(_QWORD *)(v7 + 32) = v16;
    *(_QWORD *)(v7 + 48) = v8;
    memcpy(v16, *(const void **)v6, v8);
    *(_QWORD *)(v7 + 40) = v8;
  }
  *(_DWORD *)(v7 + 56) = 0;
  v9 = sub_4D7320(a1, a2, v7 + 32);
  if ( v10 )
  {
    v11 = 1;
    v12 = a1 + 1;
    if ( !v9 && (_QWORD *)v10 != v12 )
    {
      v17 = haystack;
      if ( *(_QWORD *)(v10 + 40) )
        v17 = *(const char **)(v10 + 32);
      v18 = haystack;
      if ( *(_QWORD *)(v7 + 40) )
        v18 = *(const char **)(v7 + 32);
      v20 = v10;
      v19 = strcmp(v18, v17);
      v12 = a1 + 1;
      v10 = v20;
      v11 = v19 >> 31;
    }
    std::_Rb_tree_insert_and_rebalance(v11, v7, v10, v12);
    ++a1[5];
    return (_QWORD *)v7;
  }
  v13 = v9;
  if ( !v7 )
    return v13;
  v15 = *(void **)(v7 + 32);
  if ( v15 )
  {
    *(_QWORD *)(v7 + 40) = 0;
    qfree(v15);
  }
  operator delete((void *)v7, 0x40u);
  return v13;
}
