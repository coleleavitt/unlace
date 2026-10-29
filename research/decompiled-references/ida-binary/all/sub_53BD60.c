__m128i *__fastcall sub_53BD60(__int64 a1, __int64 a2, __int64 a3, const __m128i *a4, __int64 a5, __int64 a6)
{
  __int64 v7; // r13
  unsigned int v9; // r14d
  __m128i *v10; // rax
  __m128i v11; // xmm0
  __m128i *v12; // rbx

  v7 = a1 + 8;
  if ( a2
    || a3 == v7
    || (v9 = 0,
        (int)QT::QtPrivate::compareStrings(
               a4[1].m128i_i64[0],
               a4->m128i_i64[1],
               *(_QWORD *)(a3 + 48),
               *(_QWORD *)(a3 + 40),
               1,
               a6) < 0) )
  {
    v9 = 1;
  }
  v10 = (__m128i *)operator new(0x40u);
  v11 = _mm_loadu_si128(a4);
  v12 = v10;
  v10[3].m128i_i64[0] = a4[1].m128i_i64[0];
  v10[2] = v11;
  if ( v11.m128i_i64[0] )
    _InterlockedAdd((volatile signed __int32 *)v11.m128i_i64[0], 1u);
  v10[3].m128i_i64[1] = a4[1].m128i_i64[1];
  std::_Rb_tree_insert_and_rebalance(v9, v10, a3, v7);
  ++*(_QWORD *)(a1 + 40);
  return v12;
}
