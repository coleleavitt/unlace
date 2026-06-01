_QWORD *__fastcall sub_8C9220(__int64 a1, const char **a2, const __m128i *a3)
{
  __int64 v5; // rax
  const char *v6; // r14
  __int64 v7; // rbx
  __int64 v8; // r15
  size_t v9; // rbp
  void *v10; // rax
  __m128i v11; // xmm0
  __int64 v12; // rax
  _QWORD *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rdi
  __int64 v16; // rcx
  _QWORD *v17; // r12
  void *v19; // rdi
  const char *v20; // rsi
  const char *v21; // rdi
  unsigned int v22; // eax
  __int64 v23; // [rsp+0h] [rbp-48h]

  v5 = operator new(0x58u);
  v6 = *a2;
  *(_QWORD *)(v5 + 32) = 0;
  v7 = v5;
  v8 = v5 + 32;
  *(_OWORD *)(v5 + 40) = 0;
  if ( v6 )
  {
    v8 = v5 + 32;
    v9 = strlen(v6);
    v10 = (void *)qvector_reserve(v7 + 32, 0, v9 + 1, 1);
    *(_QWORD *)(v7 + 32) = v10;
    *(_QWORD *)(v7 + 40) = v9 + 1;
    memmove(v10, v6, v9);
    *(_BYTE *)(*(_QWORD *)(v7 + 32) + v9) = 0;
  }
  v11 = _mm_loadu_si128(a3 + 1);
  *(_QWORD *)(v7 + 56) = a3->m128i_i64[0];
  v12 = a3->m128i_i64[1];
  *(__m128i *)(v7 + 72) = v11;
  *(_QWORD *)(v7 + 64) = v12;
  v13 = sub_8C90D0(a1, v8);
  if ( v14 )
  {
    v15 = 1;
    v16 = a1 + 8;
    if ( !v13 && v14 != v16 )
    {
      v20 = haystack;
      if ( *(_QWORD *)(v14 + 40) )
        v20 = *(const char **)(v14 + 32);
      v21 = haystack;
      if ( *(_QWORD *)(v7 + 40) )
        v21 = *(const char **)(v7 + 32);
      v23 = v14;
      v22 = strcmp(v21, v20);
      v16 = a1 + 8;
      v14 = v23;
      v15 = v22 >> 31;
    }
    v17 = (_QWORD *)v7;
    std::_Rb_tree_insert_and_rebalance(v15, v7, v14, v16);
    ++*(_QWORD *)(a1 + 40);
  }
  else
  {
    v17 = v13;
    if ( v7 )
    {
      v19 = *(void **)(v7 + 32);
      if ( v19 )
      {
        *(_QWORD *)(v7 + 40) = 0;
        qfree(v19);
      }
      operator delete((void *)v7, 0x58u);
    }
  }
  return v17;
}
