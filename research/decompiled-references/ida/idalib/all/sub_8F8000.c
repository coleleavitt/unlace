_QWORD *__fastcall sub_8F8000(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  const char *v4; // r14
  _QWORD *v5; // rbx
  __int64 v6; // r15
  size_t v7; // rbp
  void *v8; // rax
  _QWORD *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rdi
  __int64 v12; // rcx
  _QWORD *v13; // r12
  void *v15; // rdi
  const char *v16; // rsi
  const char *v17; // rdi
  unsigned int v18; // eax
  __int64 v19; // [rsp+0h] [rbp-48h]

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
  v5[7] = *(_QWORD *)(a2 + 8);
  v9 = sub_5F6F10(a1, v6);
  if ( v10 )
  {
    v11 = 1;
    v12 = a1 + 8;
    if ( !v9 && v10 != v12 )
    {
      v16 = haystack;
      if ( *(_QWORD *)(v10 + 40) )
        v16 = *(const char **)(v10 + 32);
      v17 = haystack;
      if ( v5[5] )
        v17 = (const char *)v5[4];
      v19 = v10;
      v18 = strcmp(v17, v16);
      v12 = a1 + 8;
      v10 = v19;
      v11 = v18 >> 31;
    }
    std::_Rb_tree_insert_and_rebalance(v11, v5, v10, v12);
    ++*(_QWORD *)(a1 + 40);
    return v5;
  }
  else
  {
    v13 = v9;
    if ( v5 )
    {
      v15 = (void *)v5[4];
      if ( v15 )
      {
        v5[5] = 0;
        qfree(v15);
      }
      operator delete(v5, 0x40u);
    }
  }
  return v13;
}
