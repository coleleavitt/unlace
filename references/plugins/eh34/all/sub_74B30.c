__m128i *__fastcall sub_74B30(__m128i *a1, __int64 a2, unsigned __int64 a3)
{
  _QWORD *v3; // rax
  _QWORD *v5; // rdi
  __int64 v7; // rcx
  const __m128i *v8; // rax
  __m128i v10; // xmm0

  v3 = *(_QWORD **)(a2 + 16);
  v5 = (_QWORD *)(a2 + 8);
  while ( v3 )
  {
    while ( 1 )
    {
      v7 = v3[3];
      if ( a3 < v3[4] )
        break;
      v3 = (_QWORD *)v3[3];
      if ( !v7 )
        goto LABEL_5;
    }
    v5 = v3;
    v3 = (_QWORD *)v3[2];
  }
LABEL_5:
  if ( *(_QWORD **)(a2 + 24) == v5
    || (v8 = (const __m128i *)std::_Rb_tree_decrement(v5), v8 == (const __m128i *)(a2 + 8))
    || a3 < v8[2].m128i_i64[0]
    || a3 >= v8[2].m128i_i64[1] )
  {
    a1[1].m128i_i8[0] = 0;
    return a1;
  }
  else
  {
    v10 = _mm_loadu_si128(v8 + 2);
    a1[1].m128i_i8[0] = 1;
    *a1 = v10;
    return a1;
  }
}
