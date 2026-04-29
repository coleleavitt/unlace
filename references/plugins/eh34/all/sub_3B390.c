_QWORD *__fastcall sub_3B390(_QWORD *a1, _QWORD *a2, const __m128i *a3)
{
  _QWORD *v5; // rbx
  __m128i *v6; // rax
  unsigned __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __m128i v10; // xmm0
  __int64 v11; // r14
  unsigned __int64 v12; // r15
  __int64 *v13; // r12
  unsigned __int64 v14; // rcx
  __int64 v15; // rax
  _BOOL8 v16; // rdi
  __int64 v18; // rax
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // [rsp+8h] [rbp-40h]

  v5 = a2;
  v6 = (__m128i *)operator new(0x40u);
  v10 = _mm_loadu_si128(a3 + 1);
  v11 = a3->m128i_i64[1];
  a3->m128i_i64[1] = 0;
  v12 = a3->m128i_i64[0];
  v13 = (__int64 *)v6;
  v6[3] = v10;
  a3[1] = 0;
  v6[2].m128i_i64[0] = v12;
  v6[2].m128i_i64[1] = v11;
  if ( a1 + 1 == a2 )
  {
    if ( a1[5] )
    {
      v7 = a1[4];
      v5 = nullptr;
      if ( *(_QWORD *)(v7 + 32) < v12 )
        goto LABEL_6;
    }
LABEL_5:
    v5 = sub_38900((__int64)a1, v12, v7, v8, v9);
    goto LABEL_6;
  }
  v14 = a2[4];
  if ( v12 < v14 )
  {
    v7 = (unsigned __int64)a2;
    if ( (_QWORD *)a1[3] == a2 )
      goto LABEL_6;
    v15 = std::_Rb_tree_decrement(a2, a2, a2, v14, v9);
    v7 = v15;
    if ( *(_QWORD *)(v15 + 32) >= v12 )
      goto LABEL_5;
    if ( *(_QWORD *)(v15 + 24) )
      v7 = (unsigned __int64)a2;
    else
      v5 = nullptr;
LABEL_6:
    if ( v7 )
    {
      if ( a1 + 1 == (_QWORD *)v7 || v5 )
      {
        v16 = 1;
LABEL_10:
        v5 = v13;
        std::_Rb_tree_insert_and_rebalance(v16, v13, v7, a1 + 1);
        ++a1[5];
        return v5;
      }
      goto LABEL_27;
    }
    goto LABEL_12;
  }
  v20 = a2[4];
  if ( v14 >= v12 )
    goto LABEL_12;
  if ( (_QWORD *)a1[4] != a2 )
  {
    v18 = std::_Rb_tree_increment(a2);
    v7 = v18;
    if ( v12 < *(_QWORD *)(v18 + 32) )
    {
      v19 = v20;
      if ( !a2[3] )
      {
        v7 = (unsigned __int64)a2;
        if ( a2 )
          goto LABEL_28;
        goto LABEL_12;
      }
      v5 = (_QWORD *)v18;
      goto LABEL_6;
    }
    goto LABEL_5;
  }
  v7 = (unsigned __int64)a2;
  if ( a2 )
  {
LABEL_27:
    v19 = *(_QWORD *)(v7 + 32);
LABEL_28:
    v16 = v12 < v19;
    goto LABEL_10;
  }
LABEL_12:
  if ( v13 )
  {
    if ( v11 )
    {
      v13[6] = 0;
      qfree(v11);
    }
    operator delete(v13, 0x40u);
  }
  return v5;
}
