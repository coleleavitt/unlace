__m128i *__fastcall sub_22ABC80(_QWORD *a1, _QWORD *a2, __m128i **a3)
{
  __m128i *v5; // rbx
  __m128i *v6; // rax
  __int64 v7; // rax
  _QWORD *v8; // rdx
  __int64 v9; // r13
  _QWORD *v10; // rcx
  __int64 v11; // rdi
  unsigned __int8 v13; // al
  __m128i *v14; // rdi
  _QWORD *v15; // [rsp+0h] [rbp-38h]

  v5 = (__m128i *)operator new(0x48u);
  v6 = *a3;
  v5[2].m128i_i64[0] = (__int64)v5[3].m128i_i64;
  if ( (__m128i *)v6->m128i_i64[0] == &v6[1] )
  {
    v5[3] = _mm_loadu_si128(v6 + 1);
  }
  else
  {
    v5[2].m128i_i64[0] = v6->m128i_i64[0];
    v5[3].m128i_i64[0] = v6[1].m128i_i64[0];
  }
  v5[2].m128i_i64[1] = v6->m128i_i64[1];
  v6->m128i_i64[0] = (__int64)v6[1].m128i_i64;
  v6->m128i_i64[1] = 0;
  v6[1].m128i_i8[0] = 0;
  v5[4].m128i_i64[0] = 0;
  v7 = sub_22ABB50(a1, a2, v5[2].m128i_i8);
  v9 = v7;
  if ( v8 )
  {
    v10 = a1 + 1;
    v11 = 1;
    if ( !v7 && v8 != v10 )
    {
      v15 = v8;
      v13 = sub_2234B00((__int64)v5[2].m128i_i64, (__int64)(v8 + 4));
      v10 = a1 + 1;
      v8 = v15;
      v11 = v13;
    }
    std::_Rb_tree_insert_and_rebalance(v11, v5, v8, v10);
    ++a1[5];
    return v5;
  }
  else
  {
    v14 = (__m128i *)v5[2].m128i_i64[0];
    if ( &v5[3] != v14 )
      operator delete(v14);
    operator delete(v5);
    return (__m128i *)v9;
  }
}
