_QWORD *__fastcall sub_22D70(
        __m128i *a1,
        __m128i *a2,
        _QWORD *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        _QWORD *a7,
        _QWORD *a8)
{
  __m128i *v10; // rbp
  const __m128i *v11; // r15
  _QWORD *v12; // r14
  unsigned __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rax
  _QWORD *v16; // rax
  __int64 v18; // rax
  unsigned __int64 v19; // [rsp+8h] [rbp-50h]
  unsigned __int64 v20; // [rsp+8h] [rbp-50h]
  _BOOL4 v21; // [rsp+8h] [rbp-50h]
  __m128i *v22; // [rsp+8h] [rbp-50h]
  __int64 v23; // [rsp+10h] [rbp-48h]
  unsigned __int64 v24; // [rsp+10h] [rbp-48h]

  if ( a1 != a2 )
  {
    v10 = a2;
    v11 = a1;
    v12 = a3 + 1;
    do
    {
      v13 = v11[2].m128i_u64[0];
      if ( *a8 == v13 )
      {
        ++*a7;
        goto LABEL_15;
      }
      if ( (_QWORD *)a4 == v12 )
      {
        if ( !a3[5] )
          goto LABEL_8;
        v14 = a3[4];
        a4 = 0;
        if ( *(_QWORD *)(v14 + 32) >= v13 )
          goto LABEL_8;
      }
      else
      {
        a2 = *(__m128i **)(a4 + 32);
        if ( v13 < (unsigned __int64)a2 )
        {
          v14 = a3[3];
          if ( a4 == v14 )
            goto LABEL_9;
          v19 = v11[2].m128i_u64[0];
          v15 = std::_Rb_tree_decrement(a4, a2);
          v13 = v19;
          v14 = v15;
          if ( *(_QWORD *)(v15 + 32) >= v19 )
          {
LABEL_8:
            a2 = (__m128i *)v13;
            v20 = v13;
            v16 = sub_1EE80((__int64)a3, v13);
            v13 = v20;
            a4 = (__int64)v16;
            goto LABEL_9;
          }
          if ( *(_QWORD *)(v15 + 24) )
          {
            v14 = a4;
            goto LABEL_9;
          }
LABEL_30:
          a4 = 0;
          goto LABEL_9;
        }
        v22 = *(__m128i **)(a4 + 32);
        if ( (unsigned __int64)a2 >= v13 )
          goto LABEL_14;
        v14 = a3[4];
        if ( a4 == v14 )
          goto LABEL_30;
        v24 = v11[2].m128i_u64[0];
        v18 = std::_Rb_tree_increment(a4, a2);
        v13 = v24;
        v14 = v18;
        if ( v24 >= *(_QWORD *)(v18 + 32) )
          goto LABEL_8;
        a2 = v22;
        if ( !*(_QWORD *)(a4 + 24) )
        {
          v14 = a4;
          if ( !a4 )
            goto LABEL_14;
LABEL_29:
          v21 = v13 < (unsigned __int64)a2;
          goto LABEL_13;
        }
        a4 = v18;
      }
LABEL_9:
      if ( v14 )
      {
        if ( !a4 && v12 != (_QWORD *)v14 )
        {
          a2 = *(__m128i **)(v14 + 32);
          goto LABEL_29;
        }
        v21 = 1;
LABEL_13:
        v23 = v14;
        a2 = (__m128i *)operator new(0x30u);
        a4 = (__int64)a2;
        a2[2] = _mm_loadu_si128(v11 + 2);
        std::_Rb_tree_insert_and_rebalance(v21, a2, v23, v12);
        ++a3[5];
      }
LABEL_14:
      a4 = std::_Rb_tree_increment(a4, a2);
LABEL_15:
      v11 = (const __m128i *)std::_Rb_tree_increment(v11);
    }
    while ( v11 != v10 );
  }
  return a3;
}
