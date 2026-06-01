__int64 sub_3EED80()
{
  __int64 v0; // r12
  _QWORD *v1; // r13
  __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r15
  __int64 v5; // rax
  _QWORD *v6; // rax
  _QWORD *v7; // rcx
  __int64 v8; // rsi
  __int64 v9; // rdx
  __m128i *v10; // rax
  __int64 v11; // rdx
  _QWORD *v12; // r8
  __m128i v13; // xmm2
  __m128i *v14; // r9
  unsigned __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rax
  _BOOL8 v18; // rdi
  __m128i *v20; // rax
  __m128i si128; // xmm3
  _QWORD *v22; // rax
  __int64 v23; // rax
  __int64 v24; // [rsp+8h] [rbp-4E0h]
  _QWORD *v25; // [rsp+8h] [rbp-4E0h]
  __int64 *v26; // [rsp+10h] [rbp-4D8h]
  _QWORD *v27; // [rsp+10h] [rbp-4D8h]
  _QWORD *v28; // [rsp+18h] [rbp-4D0h]
  __m128i *v29; // [rsp+18h] [rbp-4D0h]
  __m128i *v30; // [rsp+18h] [rbp-4D0h]
  __m128i *v31; // [rsp+18h] [rbp-4D0h]
  _QWORD *v32; // [rsp+20h] [rbp-4C8h]
  _QWORD *v33; // [rsp+20h] [rbp-4C8h]
  _QWORD v34[2]; // [rsp+30h] [rbp-4B8h] BYREF
  _BYTE v35[24]; // [rsp+40h] [rbp-4A8h] BYREF
  __int64 v36; // [rsp+58h] [rbp-490h]
  __int64 v37; // [rsp+60h] [rbp-488h]
  _BYTE v38[48]; // [rsp+70h] [rbp-478h] BYREF
  _BYTE v39[1032]; // [rsp+A0h] [rbp-448h] BYREF
  unsigned __int64 v40; // [rsp+4A8h] [rbp-40h]

  v40 = __readfsqword(0x28u);
  v0 = qword_2CCB598;
  v1 = *(_QWORD **)(qword_2CCB598 + 1672);
  netnode_check(v1 + 308, "$ fixups", 0, 1);
  v2 = sub_7BEB80(v1 + 308, v0, 83);
  if ( v2 != -1 )
  {
    while ( 1 )
    {
      v3 = sub_7BE950(v1 + 308, v0, v2, v39, 1024, 83);
      if ( v3 > 0 )
        break;
LABEL_3:
      v2 = sub_7BEBF0(v1 + 308, v0, v2, 83);
      if ( v2 == -1 )
        return 1;
    }
    *(__m128i *)&v35[8] = _mm_load_si128((const __m128i *)&xmmword_23A76C0);
    v34[1] = &v39[v3];
    *(_QWORD *)v35 = 0;
    v36 = 0;
    v37 = 0;
    v34[0] = v39;
    sub_41C0A0(v35, v34);
    v4 = sub_3BDE50(v1, v2);
    v5 = sub_41C230(v38, 48, v35);
    sub_7BE7C0(v1 + 308, v0, v4, v38, v5, 339);
    v6 = (_QWORD *)v1[311];
    if ( !v6 )
      goto LABEL_27;
    v7 = v1 + 310;
    do
    {
      while ( 1 )
      {
        v8 = v6[2];
        v9 = v6[3];
        if ( v6[4] < v4 )
          break;
        v7 = v6;
        v6 = (_QWORD *)v6[2];
        if ( !v8 )
          goto LABEL_10;
      }
      v6 = (_QWORD *)v6[3];
    }
    while ( v9 );
LABEL_10:
    if ( v1 + 310 == v7 )
    {
LABEL_27:
      v24 = (__int64)(v1 + 309);
      v20 = (__m128i *)operator new(0x50u);
      si128 = _mm_load_si128((const __m128i *)&xmmword_23A76C0);
      v12 = v1 + 310;
      v20[2].m128i_i64[0] = v4;
      v14 = v20;
      v20[2].m128i_i64[1] = 0;
      v20[4].m128i_i64[0] = 0;
      v20[4].m128i_i64[1] = 0;
      v20[3] = si128;
      if ( v1[314] )
      {
        v16 = v1[313];
        v7 = nullptr;
        if ( *(_QWORD *)(v16 + 32) < v4 )
          goto LABEL_17;
      }
    }
    else
    {
      if ( v4 >= v7[4] )
      {
LABEL_22:
        *(__m128i *)(v7 + 5) = _mm_load_si128((const __m128i *)v35);
        *(__m128i *)(v7 + 7) = _mm_load_si128((const __m128i *)&v35[16]);
        v7[9] = v37;
        goto LABEL_3;
      }
      v28 = v7;
      v24 = (__int64)(v1 + 309);
      v10 = (__m128i *)operator new(0x50u);
      v7 = v28;
      v12 = v1 + 310;
      v13 = _mm_load_si128((const __m128i *)&xmmword_23A76C0);
      v10[2].m128i_i64[0] = v4;
      v14 = v10;
      v10[2].m128i_i64[1] = 0;
      v10[4].m128i_i64[0] = 0;
      v10[4].m128i_i64[1] = 0;
      v10[3] = v13;
      v15 = v28[4];
      if ( v4 >= v15 )
      {
        if ( v15 >= v4 )
          goto LABEL_25;
        if ( (_QWORD *)v1[313] != v28 )
        {
          v31 = v10;
          v33 = v7;
          v23 = std::_Rb_tree_increment(v7, v15, v11, v7);
          v12 = v1 + 310;
          v14 = v31;
          v16 = v23;
          if ( v4 >= *(_QWORD *)(v23 + 32) )
            goto LABEL_29;
          v7 = v33;
          if ( v33[3] )
          {
            v7 = (_QWORD *)v23;
            goto LABEL_17;
          }
        }
        v16 = (__int64)v7;
        if ( v7 )
          goto LABEL_35;
        goto LABEL_25;
      }
      v16 = (__int64)v28;
      if ( (_QWORD *)v1[312] == v28 )
        goto LABEL_17;
      v29 = v10;
      v32 = v7;
      v17 = std::_Rb_tree_decrement(v7);
      v12 = v1 + 310;
      v14 = v29;
      v16 = v17;
      if ( *(_QWORD *)(v17 + 32) < v4 )
      {
        v7 = nullptr;
        if ( *(_QWORD *)(v17 + 24) )
        {
          v7 = v32;
          v16 = (__int64)v32;
        }
LABEL_17:
        if ( v16 )
        {
          if ( v12 == (_QWORD *)v16 || v7 )
          {
            v18 = 1;
LABEL_21:
            v26 = (__int64 *)v14;
            std::_Rb_tree_insert_and_rebalance(v18, v14, v16, v12);
            v7 = v26;
            ++*(_QWORD *)(v24 + 40);
            goto LABEL_22;
          }
          v15 = *(_QWORD *)(v16 + 32);
LABEL_35:
          v18 = v4 < v15;
          goto LABEL_21;
        }
LABEL_25:
        if ( v14 )
        {
          v25 = v7;
          operator delete(v14, 0x50u);
          v7 = v25;
        }
        goto LABEL_22;
      }
    }
LABEL_29:
    v30 = v14;
    v27 = v12;
    v22 = sub_3EEA80(v24, v4);
    v12 = v27;
    v14 = v30;
    v7 = v22;
    goto LABEL_17;
  }
  return 1;
}
