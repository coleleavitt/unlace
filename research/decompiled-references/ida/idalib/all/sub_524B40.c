_QWORD *__fastcall sub_524B40(_QWORD *a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rax
  size_t v9; // r15
  __int64 v10; // rbx
  void *v11; // r13
  __m128i v12; // xmm0
  _QWORD *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rdi
  _QWORD *v16; // rcx
  _QWORD *v17; // rbp
  void *v19; // rdi
  void *v20; // rax
  const void *v21; // rsi
  const char *v22; // rsi
  const char *v23; // rdi
  unsigned int v24; // eax
  __int64 v25; // [rsp+0h] [rbp-48h]

  v8 = operator new(0x50u);
  v9 = *(_QWORD *)(a3 + 8);
  *(_QWORD *)(v8 + 32) = 0;
  v10 = v8;
  *(_OWORD *)(v8 + 40) = 0;
  if ( v9 )
  {
    v20 = (void *)qalloc_or_throw(v9);
    *(_QWORD *)(v10 + 32) = v20;
    v21 = *(const void **)a3;
    *(_QWORD *)(v10 + 48) = v9;
    memcpy(v20, v21, v9);
    *(_QWORD *)(v10 + 40) = v9;
  }
  v11 = *(void **)a4;
  v12 = _mm_loadu_si128((const __m128i *)(a4 + 8));
  *(_QWORD *)a4 = 0;
  *(_QWORD *)(v10 + 56) = v11;
  *(__m128i *)(v10 + 64) = v12;
  *(_OWORD *)(a4 + 8) = 0;
  v13 = sub_524980(a1, a2, v10 + 32);
  if ( v14 )
  {
    v15 = 1;
    v16 = a1 + 1;
    if ( !v13 && (_QWORD *)v14 != v16 )
    {
      v22 = haystack;
      if ( *(_QWORD *)(v14 + 40) )
        v22 = *(const char **)(v14 + 32);
      v23 = haystack;
      if ( *(_QWORD *)(v10 + 40) )
        v23 = *(const char **)(v10 + 32);
      v25 = v14;
      v24 = strcmp(v23, v22);
      v16 = a1 + 1;
      v14 = v25;
      v15 = v24 >> 31;
    }
    v17 = (_QWORD *)v10;
    std::_Rb_tree_insert_and_rebalance(v15, v10, v14, v16);
    ++a1[5];
  }
  else
  {
    v17 = v13;
    if ( v10 )
    {
      if ( v11 )
      {
        *(_QWORD *)(v10 + 64) = 0;
        qfree(v11);
      }
      v19 = *(void **)(v10 + 32);
      if ( v19 )
      {
        *(_QWORD *)(v10 + 40) = 0;
        qfree(v19);
      }
      operator delete((void *)v10, 0x50u);
    }
  }
  return v17;
}
