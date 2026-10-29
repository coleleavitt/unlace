void *__fastcall sub_39EC70(_QWORD *a1, __int64 a2, const __m128i *a3)
{
  __int64 v4; // rax
  __m128i v5; // xmm0
  void *v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rbp

  v4 = operator new(0x28u);
  v5 = _mm_loadl_epi64(a3);
  v6 = (void *)v4;
  *(_QWORD *)(v4 + 32) = v5.m128i_i64[0];
  v7 = sub_39B200(a1, a2, _mm_cvtsi128_si32(v5));
  if ( v8 )
  {
    std::_Rb_tree_insert_and_rebalance();
    ++a1[5];
    return v6;
  }
  v9 = v7;
  if ( !v6 )
    return (void *)v9;
  operator delete(v6, 0x28u);
  return (void *)v9;
}

