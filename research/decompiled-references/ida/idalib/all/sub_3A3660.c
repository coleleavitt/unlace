__m128i *__fastcall sub_3A3660(_QWORD *a1, _QWORD *a2, const __m128i *a3)
{
  __m128i *v5; // rax
  __m128i v6; // xmm0
  __m128i *v7; // rbx
  __int64 v8; // rcx
  _QWORD *v9; // rax
  _QWORD *v10; // rdx
  _BOOL8 v11; // rdi
  _QWORD *v12; // rcx
  _QWORD *v13; // rbp

  v5 = (__m128i *)operator new(0x30u);
  v6 = _mm_loadu_si128(a3);
  v7 = v5;
  v5[2] = v6;
  v9 = sub_39FF80(a1, a2, v6.m128i_u64[0], v8);
  if ( v10 )
  {
    v11 = 1;
    v12 = a1 + 1;
    if ( !v9 && v10 != v12 )
      v11 = v6.m128i_i64[0] < v10[4];
    std::_Rb_tree_insert_and_rebalance(v11, v7, v10, v12);
    ++a1[5];
    return v7;
  }
  v13 = v9;
  if ( !v7 )
    return (__m128i *)v13;
  operator delete(v7, 0x30u);
  return (__m128i *)v13;
}
