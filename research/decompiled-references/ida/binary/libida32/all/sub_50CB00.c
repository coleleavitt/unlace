_QWORD *__fastcall sub_50CB00(_QWORD *a1, char *a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rax
  size_t v9; // r15
  __int64 v10; // rbx
  void *v11; // r13
  __m128i v12; // xmm0
  _QWORD *v13; // rax
  __int64 v14; // rdx
  _QWORD *v15; // rbp
  void *v17; // rdi
  void *v18; // rax
  const void *v19; // rsi
  const char *v20; // rsi
  const char *v21; // rdi

  v8 = operator new(0x50u);
  v9 = *(_QWORD *)(a3 + 8);
  *(_QWORD *)(v8 + 32) = 0;
  v10 = v8;
  *(_OWORD *)(v8 + 40) = 0;
  if ( v9 )
  {
    v18 = (void *)qalloc_or_throw(v9, a2);
    *(_QWORD *)(v10 + 32) = v18;
    v19 = *(const void **)a3;
    *(_QWORD *)(v10 + 48) = v9;
    memcpy(v18, v19, v9);
    *(_QWORD *)(v10 + 40) = v9;
  }
  v11 = *(void **)a4;
  v12 = _mm_loadu_si128((const __m128i *)(a4 + 8));
  *(_QWORD *)a4 = 0;
  *(_QWORD *)(v10 + 56) = v11;
  *(__m128i *)(v10 + 64) = v12;
  *(_OWORD *)(a4 + 8) = 0;
  v13 = sub_50C940(a1, a2, v10 + 32);
  if ( v14 )
  {
    if ( !v13 && (_QWORD *)v14 != a1 + 1 )
    {
      v20 = haystack;
      if ( *(_QWORD *)(v14 + 40) )
        v20 = *(const char **)(v14 + 32);
      v21 = haystack;
      if ( *(_QWORD *)(v10 + 40) )
        v21 = *(const char **)(v10 + 32);
      strcmp(v21, v20);
    }
    v15 = (_QWORD *)v10;
    std::_Rb_tree_insert_and_rebalance();
    ++a1[5];
  }
  else
  {
    v15 = v13;
    if ( v10 )
    {
      if ( v11 )
      {
        *(_QWORD *)(v10 + 64) = 0;
        qfree(v11);
      }
      v17 = *(void **)(v10 + 32);
      if ( v17 )
      {
        *(_QWORD *)(v10 + 40) = 0;
        qfree(v17);
      }
      operator delete((void *)v10, 0x50u);
    }
  }
  return v15;
}

