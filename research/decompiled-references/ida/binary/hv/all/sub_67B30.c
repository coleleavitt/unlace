_QWORD *__fastcall sub_67B30(__int64 a1, const char **a2, const __m128i *a3)
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
  _QWORD *v15; // r12
  void *v17; // rdi
  const char *v18; // rsi
  const char *v19; // rdi

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
    v10 = (void *)sub_96080(v7 + 32, 0, v9 + 1, 1);
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
  v13 = sub_679E0(a1, v8);
  if ( v14 )
  {
    if ( !v13 && v14 != a1 + 8 )
    {
      v18 = haystack;
      if ( *(_QWORD *)(v14 + 40) )
        v18 = *(const char **)(v14 + 32);
      v19 = haystack;
      if ( *(_QWORD *)(v7 + 40) )
        v19 = *(const char **)(v7 + 32);
      strcmp(v19, v18);
    }
    v15 = (_QWORD *)v7;
    std::_Rb_tree_insert_and_rebalance();
    ++*(_QWORD *)(a1 + 40);
  }
  else
  {
    v15 = v13;
    if ( v7 )
    {
      v17 = *(void **)(v7 + 32);
      if ( v17 )
      {
        *(_QWORD *)(v7 + 40) = 0;
        j__free(v17);
      }
      operator delete((void *)v7, 0x58u);
    }
  }
  return v15;
}

