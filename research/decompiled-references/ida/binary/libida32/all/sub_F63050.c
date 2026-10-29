__int64 *__fastcall sub_F63050(_QWORD *a1, __m128i *a2)
{
  __m128i *v2; // rax
  __m128i *v3; // rdx
  __m128i *v4; // r14
  __int64 *v5; // rbx
  __int64 v6; // rdx
  _QWORD *v7; // r15
  __int64 v8; // rax
  _QWORD *v9; // rbp
  _QWORD *v10; // rax
  char v11; // dl
  __m128i *v12; // rdi
  __int64 v14; // [rsp+8h] [rbp-40h]

  v2 = (__m128i *)operator new(0x48u);
  v3 = (__m128i *)a2->m128i_i64[0];
  v4 = v2 + 3;
  v5 = (__int64 *)v2;
  v2[2].m128i_i64[0] = (__int64)v2[3].m128i_i64;
  if ( v3 == &a2[1] )
  {
    v2[3] = _mm_loadu_si128(a2 + 1);
  }
  else
  {
    v2[2].m128i_i64[0] = (__int64)v3;
    v2[3].m128i_i64[0] = a2[1].m128i_i64[0];
  }
  v6 = a2->m128i_i64[1];
  a2->m128i_i64[0] = (__int64)a2[1].m128i_i64;
  v7 = a1 + 1;
  v8 = a2[2].m128i_i64[0];
  a2->m128i_i64[1] = 0;
  a2[1].m128i_i8[0] = 0;
  v9 = (_QWORD *)a1[2];
  v5[5] = v6;
  v5[8] = v8;
  if ( !v9 )
  {
    v9 = a1 + 1;
    if ( v7 == (_QWORD *)a1[3] )
      goto LABEL_17;
LABEL_19:
    v14 = std::_Rb_tree_decrement();
    if ( sub_9A0E10(v14 + 32, (__int64)(v5 + 4)) < 0 )
    {
      if ( v9 )
        goto LABEL_15;
LABEL_11:
      v12 = (__m128i *)v5[4];
      if ( v4 == v12 )
        goto LABEL_13;
    }
    else
    {
      v12 = (__m128i *)v5[4];
      v9 = (_QWORD *)v14;
      if ( v4 == v12 )
        goto LABEL_13;
    }
    operator delete(v12);
LABEL_13:
    operator delete(v5);
    return v9;
  }
  while ( sub_9A0E10((__int64)(v5 + 4), (__int64)(v9 + 4)) >= 0 )
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
  if ( sub_9A0E10((__int64)(v9 + 4), (__int64)(v5 + 4)) >= 0 )
    goto LABEL_11;
LABEL_15:
  if ( v7 != v9 )
    sub_9A0E10((__int64)(v5 + 4), (__int64)(v9 + 4));
LABEL_17:
  std::_Rb_tree_insert_and_rebalance();
  ++a1[5];
  return v5;
}

