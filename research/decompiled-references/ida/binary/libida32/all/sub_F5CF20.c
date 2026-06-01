_QWORD *__fastcall sub_F5CF20(_QWORD *a1, const __m128i *a2)
{
  _QWORD *v2; // r13
  _QWORD *v3; // rax
  unsigned __int64 v4; // rdx
  _QWORD *v5; // rbx
  bool v6; // cf
  __int64 v7; // rcx
  __int64 v10; // rax
  __m128i v11; // xmm0
  _QWORD *v12; // rsi
  __m128i v13; // xmm1
  void *v14; // rbp
  __int64 v15; // r14
  _QWORD *v16; // rax
  _QWORD *v17; // rdx
  _QWORD *v18; // r15
  __int64 v19; // rax
  void *v20; // rdi
  void *v21; // rdi

  v2 = a1 + 1;
  v3 = (_QWORD *)a1[2];
  if ( !v3 )
  {
    v5 = a1 + 1;
    goto LABEL_16;
  }
  v4 = a2->m128i_i64[0];
  v5 = a1 + 1;
  do
  {
    v6 = v3[4] < v4;
    if ( v3[4] == v4 )
    {
      v7 = a2[1].m128i_i64[0];
      if ( v3[6] < v7 )
        goto LABEL_14;
      if ( v3[6] != v7 )
        goto LABEL_8;
      v6 = v3[7] < a2[1].m128i_i64[1];
    }
    if ( !v6 )
    {
LABEL_8:
      v5 = v3;
      v3 = (_QWORD *)v3[2];
      continue;
    }
LABEL_14:
    v3 = (_QWORD *)v3[3];
  }
  while ( v3 );
  if ( v2 == v5 )
    goto LABEL_16;
  if ( v5[4] == v4 )
  {
    v19 = v5[6];
    if ( a2[1].m128i_i64[0] < v19 || a2[1].m128i_i64[0] == v19 && a2[1].m128i_i64[1] < v5[7] )
      goto LABEL_16;
  }
  else
  {
    if ( v5[4] <= v4 )
      return v5 + 8;
LABEL_16:
    v10 = operator new(0x60u);
    v11 = _mm_loadu_si128(a2);
    v12 = v5;
    v13 = _mm_loadu_si128(a2 + 1);
    v14 = (void *)(v10 + 80);
    *(_BYTE *)(v10 + 80) = 0;
    v5 = (_QWORD *)v10;
    *(_QWORD *)(v10 + 64) = v10 + 80;
    v15 = v10 + 32;
    *(_QWORD *)(v10 + 72) = 0;
    *(__m128i *)(v10 + 32) = v11;
    *(__m128i *)(v10 + 48) = v13;
    v16 = sub_F5CD90(a1, v12, (unsigned __int64 *)(v10 + 32));
    v18 = v16;
    if ( v17 )
    {
      if ( !v16 && v2 != v17 && v5[4] == v17[4] )
        sub_F55E40(v15, (__int64)(v17 + 4));
      std::_Rb_tree_insert_and_rebalance();
      ++a1[5];
    }
    else
    {
      v20 = (void *)v5[8];
      if ( v14 != v20 )
        operator delete(v20);
      v21 = v5;
      v5 = v18;
      operator delete(v21);
    }
  }
  return v5 + 8;
}

