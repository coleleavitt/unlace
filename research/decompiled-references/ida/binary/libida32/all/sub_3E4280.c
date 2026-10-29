_QWORD *__fastcall sub_3E4280(_QWORD *a1, _QWORD *a2, __int64 *a3)
{
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r14
  __int64 v11; // rbx
  size_t v12; // r13
  _QWORD *v13; // rax
  __int64 v14; // rdx
  _QWORD *v15; // rbp
  void *v17; // rdi
  void *v18; // rax
  const char *v19; // rsi
  const char *v20; // rdi

  v5 = operator new(0x40u);
  v10 = *a3;
  *(_QWORD *)(v5 + 32) = 0;
  v11 = v5;
  *(_OWORD *)(v5 + 40) = 0;
  v12 = *(_QWORD *)(v10 + 8);
  if ( v12 )
  {
    v18 = (void *)qalloc_or_throw(*(_QWORD *)(v10 + 8), a2, v6, v7, v8, v9);
    *(_QWORD *)(v11 + 32) = v18;
    *(_QWORD *)(v11 + 48) = v12;
    memcpy(v18, *(const void **)v10, v12);
    *(_QWORD *)(v11 + 40) = v12;
  }
  *(_DWORD *)(v11 + 56) = 0;
  v13 = sub_3D8410(a1, a2, v11 + 32);
  if ( v14 )
  {
    if ( !v13 && (_QWORD *)v14 != a1 + 1 )
    {
      v19 = haystack;
      if ( *(_QWORD *)(v14 + 40) )
        v19 = *(const char **)(v14 + 32);
      v20 = haystack;
      if ( *(_QWORD *)(v11 + 40) )
        v20 = *(const char **)(v11 + 32);
      strcmp(v20, v19);
    }
    std::_Rb_tree_insert_and_rebalance();
    ++a1[5];
    return (_QWORD *)v11;
  }
  v15 = v13;
  if ( !v11 )
    return v15;
  v17 = *(void **)(v11 + 32);
  if ( v17 )
  {
    *(_QWORD *)(v11 + 40) = 0;
    qfree(v17);
  }
  operator delete((void *)v11, 0x40u);
  return v15;
}

