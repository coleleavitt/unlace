void __fastcall sub_47B3B0(__int64 a1, __m128i *a2, __m128i *a3, __int64 a4)
{
  const __m128i *v5; // rbx
  _BOOL4 v6; // r13d
  unsigned __int64 v7; // r13
  __m128i *v8; // r14
  _QWORD *v9; // rax

  if ( a2 != a3 )
  {
    v5 = a2;
    do
    {
      v7 = v5[2].m128i_u64[0];
      if ( !*(_QWORD *)(a1 + 40) || (v8 = *(__m128i **)(a1 + 32), v9 = nullptr, v8[2].m128i_i64[0] >= v7) )
      {
        a2 = (__m128i *)v5[2].m128i_i64[0];
        v9 = sub_469140(a1, (unsigned __int64)a2);
        v8 = a3;
      }
      if ( v8 )
      {
        v6 = v8 == (__m128i *)(a1 + 8) || v9 || v7 < v8[2].m128i_i64[0];
        a2 = (__m128i *)operator new(0x38u);
        a2[2] = _mm_loadu_si128(v5 + 2);
        a2[3].m128i_i64[0] = v5[3].m128i_i64[0];
        std::_Rb_tree_insert_and_rebalance(v6, a2, v8, a1 + 8);
        ++*(_QWORD *)(a1 + 40);
      }
      v5 = (const __m128i *)std::_Rb_tree_increment(v5, a2, a3, a4);
    }
    while ( v5 != a3 );
  }
}
