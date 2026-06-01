__int64 *__fastcall sub_21063E0(_QWORD *a1, __m128i *a2)
{
  __m128i *v3; // rax
  __m128i *v4; // rdx
  __m128i *v5; // r14
  __int64 *v6; // rbx
  __int64 v7; // rdx
  _QWORD *v8; // r15
  _QWORD *v9; // rbp
  _QWORD *v10; // rax
  char v11; // dl
  __m128i *v12; // rdi
  __int64 v14; // rdi
  __int64 v15; // [rsp+8h] [rbp-40h]

  v3 = (__m128i *)operator new(0x48u);
  v4 = (__m128i *)a2->m128i_i64[0];
  v5 = v3 + 3;
  v6 = (__int64 *)v3;
  v3[2].m128i_i64[0] = (__int64)v3[3].m128i_i64;
  if ( v4 == &a2[1] )
  {
    v3[3] = _mm_loadu_si128(a2 + 1);
  }
  else
  {
    v3[2].m128i_i64[0] = (__int64)v4;
    v3[3].m128i_i64[0] = a2[1].m128i_i64[0];
  }
  v7 = a2->m128i_i64[1];
  a2->m128i_i64[0] = (__int64)a2[1].m128i_i64;
  v8 = a1 + 1;
  a2->m128i_i64[1] = 0;
  a2[1].m128i_i8[0] = 0;
  v9 = (_QWORD *)a1[2];
  v3[2].m128i_i64[1] = v7;
  v3[4].m128i_i64[0] = 0;
  if ( !v9 )
  {
    v9 = a1 + 1;
    if ( v8 == (_QWORD *)a1[3] )
    {
      v14 = 1;
      goto LABEL_17;
    }
LABEL_19:
    v15 = std::_Rb_tree_decrement(v9);
    if ( sub_9C4B50(v15 + 32, (__int64)(v6 + 4)) < 0 )
    {
      if ( v9 )
        goto LABEL_15;
LABEL_11:
      v12 = (__m128i *)v6[4];
      if ( v5 == v12 )
        goto LABEL_13;
    }
    else
    {
      v12 = (__m128i *)v6[4];
      v9 = (_QWORD *)v15;
      if ( v5 == v12 )
        goto LABEL_13;
    }
    operator delete(v12);
LABEL_13:
    operator delete(v6);
    return v9;
  }
  while ( sub_9C4B50((__int64)(v6 + 4), (__int64)(v9 + 4)) >= 0 )
  {
    v10 = (_QWORD *)v9[3];
    v11 = 0;
    if ( !v10 )
      goto LABEL_9;
LABEL_6:
    v9 = v10;
  }
  v10 = (_QWORD *)v9[2];
  v11 = 1;
  if ( v10 )
    goto LABEL_6;
LABEL_9:
  if ( v11 )
  {
    if ( v9 == (_QWORD *)a1[3] )
      goto LABEL_15;
    goto LABEL_19;
  }
  if ( sub_9C4B50((__int64)(v9 + 4), (__int64)(v6 + 4)) >= 0 )
    goto LABEL_11;
LABEL_15:
  v14 = 1;
  if ( v8 != v9 )
    v14 = (unsigned int)sub_9C4B50((__int64)(v6 + 4), (__int64)(v9 + 4)) >> 31;
LABEL_17:
  std::_Rb_tree_insert_and_rebalance(v14, v6, v9, a1 + 1);
  ++a1[5];
  return v6;
}
