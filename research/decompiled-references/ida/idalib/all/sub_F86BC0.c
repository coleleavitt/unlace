__int64 *__fastcall sub_F86BC0(_QWORD *a1, __m128i *a2)
{
  __m128i *v3; // rax
  __m128i *v4; // rdx
  __m128i *v5; // r14
  __int64 *v6; // rbx
  __int64 v7; // rdx
  _QWORD *v8; // r15
  __int64 v9; // rax
  _QWORD *v10; // rbp
  _QWORD *v11; // rax
  char v12; // dl
  __m128i *v13; // rdi
  __int64 v15; // rdi
  __int64 v16; // [rsp+8h] [rbp-40h]

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
  v9 = a2[2].m128i_i64[0];
  a2->m128i_i64[1] = 0;
  a2[1].m128i_i8[0] = 0;
  v10 = (_QWORD *)a1[2];
  v6[5] = v7;
  v6[8] = v9;
  if ( !v10 )
  {
    v10 = a1 + 1;
    if ( v8 == (_QWORD *)a1[3] )
    {
      v15 = 1;
      goto LABEL_17;
    }
LABEL_19:
    v16 = std::_Rb_tree_decrement(v10);
    if ( sub_9C4B50(v16 + 32, (__int64)(v6 + 4)) < 0 )
    {
      if ( v10 )
        goto LABEL_15;
LABEL_11:
      v13 = (__m128i *)v6[4];
      if ( v5 == v13 )
        goto LABEL_13;
    }
    else
    {
      v13 = (__m128i *)v6[4];
      v10 = (_QWORD *)v16;
      if ( v5 == v13 )
        goto LABEL_13;
    }
    operator delete(v13);
LABEL_13:
    operator delete(v6);
    return v10;
  }
  while ( sub_9C4B50((__int64)(v6 + 4), (__int64)(v10 + 4)) >= 0 )
  {
    v11 = (_QWORD *)v10[3];
    v12 = 0;
    if ( !v11 )
      goto LABEL_9;
LABEL_6:
    v10 = v11;
  }
  v11 = (_QWORD *)v10[2];
  v12 = 1;
  if ( v11 )
    goto LABEL_6;
LABEL_9:
  if ( v12 )
  {
    if ( v10 == (_QWORD *)a1[3] )
      goto LABEL_15;
    goto LABEL_19;
  }
  if ( sub_9C4B50((__int64)(v10 + 4), (__int64)(v6 + 4)) >= 0 )
    goto LABEL_11;
LABEL_15:
  v15 = 1;
  if ( v8 != v10 )
    v15 = (unsigned int)sub_9C4B50((__int64)(v6 + 4), (__int64)(v10 + 4)) >> 31;
LABEL_17:
  std::_Rb_tree_insert_and_rebalance(v15, v6, v10, a1 + 1);
  ++a1[5];
  return v6;
}
