__int64 __fastcall sub_8A5860(_QWORD *a1, _QWORD *a2, void ***a3)
{
  __int64 v5; // rbx
  void **v6; // rax
  __m128i v7; // xmm0
  void *v8; // r13
  _QWORD *v9; // rax
  __int64 v10; // rdx
  _QWORD *v11; // rbp
  const char *v13; // rsi
  const char *v14; // rdi

  v5 = operator new(0x58u);
  v6 = *a3;
  v7 = _mm_loadu_si128((const __m128i *)(*a3 + 1));
  v8 = **a3;
  *v6 = nullptr;
  *(__m128i *)(v5 + 40) = v7;
  *(_QWORD *)(v5 + 32) = v8;
  *(_OWORD *)(v6 + 1) = 0;
  *(_OWORD *)(v5 + 56) = 0;
  *(_OWORD *)(v5 + 72) = 0;
  v9 = sub_8A56A0(a1, a2, v5 + 32);
  if ( v10 )
  {
    if ( !v9 && (_QWORD *)v10 != a1 + 1 )
    {
      v13 = haystack;
      if ( *(_QWORD *)(v10 + 40) )
        v13 = *(const char **)(v10 + 32);
      v14 = haystack;
      if ( *(_QWORD *)(v5 + 40) )
        v14 = *(const char **)(v5 + 32);
      strcmp(v14, v13);
    }
    std::_Rb_tree_insert_and_rebalance();
    ++a1[5];
    return v5;
  }
  v11 = v9;
  if ( !v5 )
    return (__int64)v11;
  if ( v8 )
  {
    *(_QWORD *)(v5 + 40) = 0;
    qfree(v8);
  }
  operator delete((void *)v5, 0x58u);
  return (__int64)v11;
}

