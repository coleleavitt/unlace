__m128i *__fastcall sub_53F230(__int64 a1, const __m128i *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r9
  __int64 v9; // r15
  unsigned int v10; // r14d
  __m128i *v11; // rax
  __m128i v12; // xmm0
  __m128i *v13; // rbx

  v6 = sub_53F130(a1, (__int64)a2, a3, a4, a5, a6);
  if ( !v7 )
    return (__m128i *)v6;
  v9 = v7;
  if ( v6
    || v7 == a1 + 8
    || (v10 = 0,
        (int)QT::QtPrivate::compareStrings(
               a2[1].m128i_i64[0],
               a2->m128i_i64[1],
               *(_QWORD *)(v7 + 48),
               *(_QWORD *)(v7 + 40),
               1,
               v8) < 0) )
  {
    v10 = 1;
  }
  v11 = (__m128i *)operator new(0x40u);
  v12 = _mm_loadu_si128(a2);
  v13 = v11;
  v11[3].m128i_i64[0] = a2[1].m128i_i64[0];
  v11[2] = v12;
  if ( v12.m128i_i64[0] )
    _InterlockedAdd((volatile signed __int32 *)v12.m128i_i64[0], 1u);
  v11[3].m128i_i64[1] = a2[1].m128i_i64[1];
  std::_Rb_tree_insert_and_rebalance(v10, v11, v9, a1 + 8);
  ++*(_QWORD *)(a1 + 40);
  return v13;
}
