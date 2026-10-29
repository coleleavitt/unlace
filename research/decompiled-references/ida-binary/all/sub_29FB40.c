__m128i *__fastcall sub_29FB40(_QWORD *a1, const __m128i *a2)
{
  __m128i *v2; // r14
  __m128i *v3; // rbx
  __int32 v4; // ebp
  __m128i *v5; // rax
  char v6; // cl
  __int32 v7; // edx
  __m128i *v8; // r12
  __int64 v10; // rax
  __int64 v11; // rax
  _BOOL4 v12; // [rsp+Ch] [rbp-3Ch]

  v2 = (__m128i *)(a1 + 1);
  v3 = (__m128i *)a1[2];
  if ( !v3 )
  {
    v3 = (__m128i *)(a1 + 1);
    if ( v2 == (__m128i *)a1[3]
      || (v10 = std::_Rb_tree_decrement(a1 + 1),
          v4 = a2->m128i_i32[0],
          v7 = *(_DWORD *)(v10 + 32),
          v8 = (__m128i *)v10,
          a2->m128i_i32[0] > v7) )
    {
      v12 = 1;
      goto LABEL_12;
    }
    goto LABEL_18;
  }
  v4 = a2->m128i_i32[0];
  while ( 1 )
  {
    v7 = v3[2].m128i_i32[0];
    if ( v4 < v7 )
    {
      v5 = (__m128i *)v3[1].m128i_i64[0];
      v6 = 1;
      goto LABEL_8;
    }
    if ( v4 == v7 && a2->m128i_i32[1] < v3[2].m128i_i32[1] )
      break;
    v5 = (__m128i *)v3[1].m128i_i64[1];
    v6 = 0;
    if ( !v5 )
      goto LABEL_9;
LABEL_5:
    v3 = v5;
  }
  v5 = (__m128i *)v3[1].m128i_i64[0];
  v6 = 1;
LABEL_8:
  if ( v5 )
    goto LABEL_5;
LABEL_9:
  v8 = v3;
  if ( !v6 )
    goto LABEL_10;
  if ( (__m128i *)a1[3] != v3 )
  {
    v11 = std::_Rb_tree_decrement(v3);
    v7 = *(_DWORD *)(v11 + 32);
    v8 = (__m128i *)v11;
LABEL_10:
    if ( v7 >= v4 )
    {
LABEL_18:
      if ( v7 == v4 && v8[2].m128i_i32[1] < a2->m128i_i32[1] )
        goto LABEL_11;
      return v8;
    }
  }
LABEL_11:
  v12 = 1;
  if ( v2 != v3 && v4 >= v3[2].m128i_i32[0] )
  {
    v12 = 0;
    if ( v4 == v3[2].m128i_i32[0] )
      v12 = a2->m128i_i32[1] < v3[2].m128i_i32[1];
  }
LABEL_12:
  v8 = (__m128i *)operator new(0x38u);
  v8[2] = _mm_loadu_si128(a2);
  v8[3].m128i_i32[0] = a2[1].m128i_i32[0];
  std::_Rb_tree_insert_and_rebalance(v12, v8, v3, v2);
  ++a1[5];
  return v8;
}
