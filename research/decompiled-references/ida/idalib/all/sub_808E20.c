__int64 __fastcall sub_808E20(__int64 *a1, __int64 a2, int a3)
{
  __int64 v4; // r12
  unsigned __int64 v5; // r14
  __int64 v6; // r15
  __int64 v7; // rsi
  int v8; // r12d
  unsigned int v9; // r12d
  __int64 v11; // rax
  __int64 v12; // r14
  __int64 v13; // r8
  unsigned __int64 v14; // r15
  __int64 v15; // rsi
  __int64 v16; // r14
  unsigned __int64 v17; // r15
  __int64 v18; // r8
  __int64 v19; // rsi
  __int64 v20; // r14
  __int64 v21; // r8
  unsigned __int64 v22; // r15
  __int64 v23; // rsi
  __int64 v24; // r13
  unsigned __int64 v25; // r14
  __int64 v26; // r15
  __int64 v27; // rsi
  __m128i si128; // xmm0
  __int64 v29; // rbp
  unsigned __int64 v30; // r13
  __int64 v31; // r14
  __int64 v32; // rsi
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // [rsp+8h] [rbp-40h]
  __int64 v39; // [rsp+8h] [rbp-40h]
  __int64 v40; // [rsp+8h] [rbp-40h]

  sub_7D01E0(a1, a3);
  v4 = a1[1];
  if ( v4 )
  {
    v5 = v4 + 1;
    v6 = a1[1];
    v7 = *a1;
    --v4;
    if ( a1[2] >= v5 )
      goto LABEL_3;
  }
  else
  {
    v7 = *a1;
    v6 = 1;
    v5 = 2;
    if ( (unsigned __int64)a1[2] >= 2 )
      goto LABEL_3;
  }
  v11 = qvector_reserve(a1, v7, v5, 1);
  *a1 = v11;
  v7 = v11;
LABEL_3:
  a1[1] = v5;
  *(_BYTE *)(v7 + v4) = 123;
  v8 = a3 + 1;
  *(_BYTE *)(*a1 + v6) = 0;
  sub_7D01E0(a1, a3 + 1);
  if ( !(unsigned __int8)sub_7D0470(a1) )
    return 0;
  v12 = a1[1];
  if ( !v12 )
  {
    v15 = *a1;
    v14 = 12;
    v13 = 11;
    if ( (unsigned __int64)a1[2] >= 0xC )
      goto LABEL_10;
LABEL_31:
    v38 = v13;
    v33 = qvector_reserve(a1, v15, v14, 1);
    v13 = v38;
    *a1 = v33;
    v15 = v33;
    goto LABEL_10;
  }
  v13 = v12 + 10;
  v14 = v12 + 11;
  v15 = *a1;
  --v12;
  if ( a1[2] < v14 )
    goto LABEL_31;
LABEL_10:
  a1[1] = v14;
  *(_BYTE *)(v15 + v13) = 0;
  qmemcpy((void *)(*a1 + v12), " // macaddr", 11);
  sub_7D01E0(a1, v8);
  if ( !(unsigned __int8)sub_7D0470(a1) )
    return 0;
  v16 = a1[1];
  if ( v16 )
  {
    v18 = v16 + 9;
    v17 = v16 + 10;
    --v16;
  }
  else
  {
    v17 = 11;
    v18 = 10;
  }
  v19 = *a1;
  if ( a1[2] < v17 )
  {
    v39 = v18;
    v34 = qvector_reserve(a1, v19, v17, 1);
    v18 = v39;
    *a1 = v34;
    v19 = v34;
  }
  a1[1] = v17;
  *(_BYTE *)(v19 + v18) = 0;
  qmemcpy((void *)(*a1 + v16), " // verstr", 10);
  sub_7D01E0(a1, v8);
  if ( !(unsigned __int8)sub_7D0290(a1) )
    return 0;
  v20 = a1[1];
  if ( v20 )
  {
    v21 = v20 + 13;
    v22 = v20 + 14;
    --v20;
  }
  else
  {
    v22 = 15;
    v21 = 14;
  }
  v23 = *a1;
  if ( a1[2] < v22 )
  {
    v40 = v21;
    v35 = qvector_reserve(a1, v23, v22, 1);
    v21 = v40;
    *a1 = v35;
    v23 = v35;
  }
  a1[1] = v22;
  *(_BYTE *)(v23 + v21) = 0;
  qmemcpy((void *)(*a1 + v20), " // start_time", 14);
  sub_7D01E0(a1, v8);
  v9 = sub_7D0290(a1);
  if ( !(_BYTE)v9 )
    return 0;
  v24 = a1[1];
  if ( v24 )
  {
    v26 = v24 + 15;
    v25 = v24 + 16;
    --v24;
  }
  else
  {
    v25 = 17;
    v26 = 16;
  }
  v27 = *a1;
  if ( a1[2] < v25 )
  {
    v37 = qvector_reserve(a1, v27, v25, 1);
    *a1 = v37;
    v27 = v37;
  }
  a1[1] = v25;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A86C0);
  *(_BYTE *)(v27 + v26) = 0;
  *(__m128i *)(*a1 + v24) = si128;
  sub_7D01E0(a1, a3);
  v29 = a1[1];
  if ( v29 )
  {
    v30 = v29 + 1;
    v31 = a1[1];
    --v29;
  }
  else
  {
    v31 = 1;
    v30 = 2;
  }
  v32 = *a1;
  if ( a1[2] < v30 )
  {
    v36 = qvector_reserve(a1, v32, v30, 1);
    *a1 = v36;
    v32 = v36;
  }
  a1[1] = v30;
  *(_BYTE *)(v32 + v29) = 125;
  *(_BYTE *)(*a1 + v31) = 0;
  return v9;
}
