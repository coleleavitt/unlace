__int64 __fastcall sub_8032C0(__int64 *a1, __int64 a2, int a3)
{
  __int64 v5; // r12
  unsigned __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rsi
  int v9; // r12d
  unsigned int v10; // r12d
  __int64 v12; // rax
  __int64 v13; // r14
  __int64 v14; // r8
  unsigned __int64 v15; // r15
  __int64 v16; // rsi
  __m128i si128; // xmm0
  __int64 v18; // r14
  unsigned __int64 v19; // r15
  __int64 v20; // r8
  __int64 v21; // rsi
  __int64 v22; // r14
  __int64 v23; // r8
  unsigned __int64 v24; // r15
  __int64 v25; // rsi
  __int64 v26; // r14
  __int64 v27; // r14
  unsigned __int64 v28; // r15
  __int64 v29; // r8
  __int64 v30; // rsi
  __int64 v31; // r13
  __int64 v32; // r15
  unsigned __int64 v33; // r14
  __int64 v34; // rsi
  __int64 v35; // rbp
  unsigned __int64 v36; // r13
  __int64 v37; // r14
  __int64 v38; // rsi
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // [rsp+8h] [rbp-40h]
  __int64 v46; // [rsp+8h] [rbp-40h]
  __int64 v47; // [rsp+8h] [rbp-40h]
  __int64 v48; // [rsp+8h] [rbp-40h]

  sub_7D01E0(a1, a3);
  v5 = a1[1];
  if ( v5 )
  {
    v6 = v5 + 1;
    v7 = a1[1];
    v8 = *a1;
    --v5;
    if ( a1[2] >= v6 )
      goto LABEL_3;
  }
  else
  {
    v8 = *a1;
    v7 = 1;
    v6 = 2;
    if ( (unsigned __int64)a1[2] >= 2 )
      goto LABEL_3;
  }
  v12 = qvector_reserve(a1, v8, v6, 1);
  *a1 = v12;
  v8 = v12;
LABEL_3:
  a1[1] = v6;
  *(_BYTE *)(v8 + v5) = 123;
  v9 = a3 + 1;
  *(_BYTE *)(*a1 + v7) = 0;
  sub_7D01E0(a1, a3 + 1);
  if ( !(unsigned __int8)sub_802D60(a1, a2, a3 + 1) )
    return 0;
  v13 = a1[1];
  if ( !v13 )
  {
    v16 = *a1;
    v15 = 17;
    v14 = 16;
    if ( (unsigned __int64)a1[2] >= 0x11 )
      goto LABEL_10;
LABEL_36:
    v45 = v14;
    v39 = qvector_reserve(a1, v16, v15, 1);
    v14 = v45;
    *a1 = v39;
    v16 = v39;
    goto LABEL_10;
  }
  v14 = v13 + 15;
  v15 = v13 + 16;
  v16 = *a1;
  --v13;
  if ( a1[2] < v15 )
    goto LABEL_36;
LABEL_10:
  a1[1] = v15;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A85B0);
  *(_BYTE *)(v16 + v14) = 0;
  *(__m128i *)(*a1 + v13) = si128;
  sub_7D01E0(a1, v9);
  if ( !(unsigned __int8)sub_7D0470(a1) )
    return 0;
  v18 = a1[1];
  if ( v18 )
  {
    v20 = v18 + 7;
    v19 = v18 + 8;
    --v18;
  }
  else
  {
    v19 = 9;
    v20 = 8;
  }
  v21 = *a1;
  if ( a1[2] < v19 )
  {
    v46 = v20;
    v40 = qvector_reserve(a1, v21, v19, 1);
    v20 = v46;
    *a1 = v40;
    v21 = v40;
  }
  a1[1] = v19;
  *(_BYTE *)(v21 + v20) = 0;
  *(_QWORD *)(*a1 + v18) = 0x656D616E202F2F20LL;
  sub_7D01E0(a1, v9);
  if ( !(unsigned __int8)sub_7D0270(a1) )
    return 0;
  v22 = a1[1];
  if ( v22 )
  {
    v23 = v22 + 8;
    v24 = v22 + 9;
    --v22;
  }
  else
  {
    v24 = 10;
    v23 = 9;
  }
  v25 = *a1;
  if ( a1[2] < v24 )
  {
    v47 = v23;
    v41 = qvector_reserve(a1, v25, v24, 1);
    v23 = v47;
    *a1 = v41;
    v25 = v41;
  }
  a1[1] = v24;
  *(_BYTE *)(v25 + v23) = 0;
  v26 = *a1 + v22;
  *(_QWORD *)v26 = 0x6D72616B202F2F20LL;
  *(_BYTE *)(v26 + 8) = 97;
  sub_7D01E0(a1, v9);
  if ( !(unsigned __int8)sub_7D0290(a1) )
    return 0;
  v27 = a1[1];
  if ( v27 )
  {
    v29 = v27 + 14;
    v28 = v27 + 15;
    --v27;
  }
  else
  {
    v28 = 16;
    v29 = 15;
  }
  v30 = *a1;
  if ( a1[2] < v28 )
  {
    v48 = v29;
    v42 = qvector_reserve(a1, v30, v28, 1);
    v29 = v48;
    *a1 = v42;
    v30 = v42;
  }
  a1[1] = v28;
  *(_BYTE *)(v30 + v29) = 0;
  qmemcpy((void *)(*a1 + v27), " // last_active", 15);
  sub_7D01E0(a1, v9);
  v10 = sub_7D0270(a1);
  if ( !(_BYTE)v10 )
    return 0;
  v31 = a1[1];
  if ( v31 )
  {
    v32 = v31 + 11;
    v33 = v31 + 12;
    --v31;
  }
  else
  {
    v33 = 13;
    v32 = 12;
  }
  v34 = *a1;
  if ( a1[2] < v33 )
  {
    v44 = qvector_reserve(a1, v34, v33, 1);
    *a1 = v44;
    v34 = v44;
  }
  a1[1] = v33;
  *(_BYTE *)(v34 + v32) = 0;
  qmemcpy((void *)(*a1 + v31), " // features", 12);
  sub_7D01E0(a1, a3);
  v35 = a1[1];
  if ( v35 )
  {
    v36 = v35 + 1;
    v37 = a1[1];
    --v35;
  }
  else
  {
    v37 = 1;
    v36 = 2;
  }
  v38 = *a1;
  if ( a1[2] < v36 )
  {
    v43 = qvector_reserve(a1, v38, v36, 1);
    *a1 = v43;
    v38 = v43;
  }
  a1[1] = v36;
  *(_BYTE *)(v38 + v35) = 125;
  *(_BYTE *)(*a1 + v37) = 0;
  return v10;
}
