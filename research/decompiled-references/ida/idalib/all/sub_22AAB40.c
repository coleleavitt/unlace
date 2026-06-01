__int64 *__fastcall sub_22AAB40(_QWORD *a1, __m128i *a2, __int64 *a3)
{
  __m128i *v5; // rax
  __m128i *v6; // rcx
  __int64 *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rdx
  _QWORD *v10; // r14
  __int64 v11; // rax
  _QWORD *v12; // r13
  _QWORD *v13; // rcx
  char v14; // al
  __int64 v15; // r15
  __int64 v16; // rdi
  __m128i *v18; // rdi
  __m128i *v19; // [rsp+8h] [rbp-40h]

  v5 = (__m128i *)operator new(0x48u);
  v6 = (__m128i *)a2->m128i_i64[0];
  v7 = (__int64 *)v5;
  v19 = v5 + 3;
  v5[2].m128i_i64[0] = (__int64)v5[3].m128i_i64;
  if ( v6 == &a2[1] )
  {
    v5[3] = _mm_loadu_si128(a2 + 1);
  }
  else
  {
    v8 = a2[1].m128i_i64[0];
    v5[2].m128i_i64[0] = (__int64)v6;
    v5[3].m128i_i64[0] = v8;
  }
  v9 = a2->m128i_i64[1];
  a2[1].m128i_i8[0] = 0;
  a2->m128i_i64[0] = (__int64)a2[1].m128i_i64;
  v10 = (_QWORD *)a1[2];
  v11 = *a3;
  v7[5] = v9;
  v12 = a1 + 1;
  a2->m128i_i64[1] = 0;
  v7[8] = v11;
  if ( !v10 )
  {
    v10 = a1 + 1;
    if ( v12 == (_QWORD *)a1[3] )
    {
      v16 = 1;
      goto LABEL_15;
    }
LABEL_11:
    v15 = std::_Rb_tree_decrement(v10);
    if ( sub_2234B00(v15 + 32, (__int64)(v7 + 4)) )
    {
      if ( v10 )
        goto LABEL_13;
      v15 = 0;
    }
    goto LABEL_17;
  }
  while ( 1 )
  {
    v14 = sub_2234B00((__int64)(v7 + 4), (__int64)(v10 + 4));
    if ( !v14 )
      break;
    v13 = (_QWORD *)v10[2];
    if ( !v13 )
      goto LABEL_9;
LABEL_6:
    v10 = v13;
  }
  v13 = (_QWORD *)v10[3];
  if ( v13 )
    goto LABEL_6;
LABEL_9:
  if ( !v14 )
  {
    v15 = (__int64)v10;
    if ( sub_2234B00((__int64)(v10 + 4), (__int64)(v7 + 4)) )
      goto LABEL_13;
LABEL_17:
    v18 = (__m128i *)v7[4];
    if ( v19 != v18 )
      operator delete(v18);
    operator delete(v7);
    return (__int64 *)v15;
  }
  if ( v10 != (_QWORD *)a1[3] )
    goto LABEL_11;
LABEL_13:
  v16 = 1;
  if ( v12 != v10 )
    v16 = (unsigned __int8)sub_2234B00((__int64)(v7 + 4), (__int64)(v10 + 4));
LABEL_15:
  std::_Rb_tree_insert_and_rebalance(v16, v7, v10, a1 + 1);
  ++a1[5];
  return v7;
}
