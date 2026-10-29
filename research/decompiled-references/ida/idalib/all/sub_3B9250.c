__m128i *__fastcall sub_3B9250(_QWORD *a1, _QWORD *a2, unsigned __int64 **a3)
{
  __m128i *v5; // rax
  __m128i si128; // xmm0
  __m128i *v7; // rbx
  unsigned __int64 v8; // r13
  __int64 v9; // rcx
  _QWORD *v10; // rax
  _QWORD *v11; // rdx
  _BOOL8 v12; // rdi
  _QWORD *v13; // rcx
  _QWORD *v14; // rbp

  v5 = (__m128i *)operator new(0x50u);
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A76C0);
  v7 = v5;
  v8 = **a3;
  v5[2].m128i_i64[1] = 0;
  v5[4].m128i_i64[0] = 0;
  v5[2].m128i_i64[0] = v8;
  v5[4].m128i_i64[1] = 0;
  v5[3] = si128;
  v10 = sub_3B9180(a1, a2, v8, v9);
  if ( v11 )
  {
    v12 = 1;
    v13 = a1 + 1;
    if ( !v10 && v11 != v13 )
      v12 = v8 < v11[4];
    std::_Rb_tree_insert_and_rebalance(v12, v7, v11, v13);
    ++a1[5];
    return v7;
  }
  v14 = v10;
  if ( !v7 )
    return (__m128i *)v14;
  operator delete(v7, 0x50u);
  return (__m128i *)v14;
}
