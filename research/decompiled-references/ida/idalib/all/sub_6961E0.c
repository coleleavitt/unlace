__m128i *__fastcall sub_6961E0(_QWORD *a1, __int64 a2, const __m128i **a3)
{
  __m128i *v5; // rbx
  __m128i v6; // xmm0
  __int64 v7; // rax
  __int64 v8; // rdx
  _BOOL8 v9; // rdi
  _QWORD *v10; // rcx
  __int64 v11; // rbp
  unsigned __int64 v13; // rax

  v5 = (__m128i *)operator new(0x38u);
  v6 = _mm_loadu_si128(*a3);
  v5[3].m128i_i64[0] = 0;
  v5[2] = v6;
  v7 = sub_695420(a1, a2, (__int64)v5[2].m128i_i64);
  if ( v8 )
  {
    v9 = 1;
    v10 = a1 + 1;
    if ( !v7 && (_QWORD *)v8 != v10 )
    {
      v13 = *(_QWORD *)(v8 + 32);
      if ( v5[2].m128i_i64[0] >= v13 )
      {
        v9 = 0;
        if ( v5[2].m128i_i64[0] == v13 )
          v9 = v5[2].m128i_i32[2] < *(_DWORD *)(v8 + 40);
      }
    }
    std::_Rb_tree_insert_and_rebalance(v9, v5, v8, v10);
    ++a1[5];
    return v5;
  }
  v11 = v7;
  if ( !v5 )
    return (__m128i *)v11;
  clear_tinfo_t(&v5[3]);
  operator delete(v5, 0x38u);
  return (__m128i *)v11;
}
