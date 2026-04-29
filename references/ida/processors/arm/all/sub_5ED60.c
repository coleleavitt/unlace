__m128i *__fastcall sub_5ED60(_QWORD *a1, const __m128i *a2)
{
  __m128i *v2; // rbx
  __int32 v3; // ebp
  __int32 v4; // edx
  __m128i *v5; // rax
  __m128i *v6; // r12
  __int64 v8; // rax

  v2 = (__m128i *)a1[2];
  v3 = a2->m128i_i32[0];
  if ( v2 )
  {
    while ( 1 )
    {
      v4 = v2[2].m128i_i32[0];
      v5 = (__m128i *)v2[1].m128i_i64[1];
      if ( v3 < v4 )
        v5 = (__m128i *)v2[1].m128i_i64[0];
      if ( !v5 )
        break;
      v2 = v5;
    }
    v6 = v2;
    if ( v3 < v4 )
    {
      if ( (__m128i *)a1[3] == v2 )
        goto LABEL_9;
      v8 = std::_Rb_tree_decrement();
      v4 = *(_DWORD *)(v8 + 32);
      v6 = (__m128i *)v8;
    }
    if ( v3 <= v4 )
      return v6;
LABEL_9:
    v6 = (__m128i *)operator new(0x30u);
    v6[2] = _mm_loadu_si128(a2);
    std::_Rb_tree_insert_and_rebalance();
    ++a1[5];
    return v6;
  }
  if ( a1 + 1 == (_QWORD *)a1[3] )
    goto LABEL_9;
  v6 = (__m128i *)std::_Rb_tree_decrement();
  if ( v3 > v6[2].m128i_i32[0] )
    goto LABEL_9;
  return v6;
}
