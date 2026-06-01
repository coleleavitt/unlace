__int64 __fastcall sub_807FE0(__int64 *a1, __int64 a2, int a3)
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
  __int64 v17; // r14
  unsigned __int64 v18; // r15
  __int64 v19; // r8
  __int64 v20; // rsi
  __int64 v21; // r14
  __int64 v22; // r8
  unsigned __int64 v23; // r15
  __int64 v24; // rsi
  __int64 v25; // r14
  __int64 v26; // r14
  unsigned __int64 v27; // r15
  __int64 v28; // r8
  __int64 v29; // rsi
  __m128i si128; // xmm0
  __m128i *v31; // r14
  __int64 v32; // r13
  __int64 v33; // r15
  unsigned __int64 v34; // r14
  __int64 v35; // rsi
  __int64 v36; // rbp
  unsigned __int64 v37; // r13
  __int64 v38; // r14
  __int64 v39; // rsi
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // [rsp+8h] [rbp-40h]
  __int64 v47; // [rsp+8h] [rbp-40h]
  __int64 v48; // [rsp+8h] [rbp-40h]
  __int64 v49; // [rsp+8h] [rbp-40h]

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
  if ( !(unsigned __int8)sub_7D0290(a1) )
    return 0;
  v12 = a1[1];
  if ( !v12 )
  {
    v15 = *a1;
    v14 = 7;
    v13 = 6;
    if ( (unsigned __int64)a1[2] >= 7 )
      goto LABEL_10;
LABEL_36:
    v46 = v13;
    v40 = qvector_reserve(a1, v15, v14, 1);
    v13 = v46;
    *a1 = v40;
    v15 = v40;
    goto LABEL_10;
  }
  v13 = v12 + 5;
  v14 = v12 + 6;
  v15 = *a1;
  --v12;
  if ( a1[2] < v14 )
    goto LABEL_36;
LABEL_10:
  a1[1] = v14;
  *(_BYTE *)(v15 + v13) = 0;
  v16 = *a1 + v12;
  *(_WORD *)(v16 + 4) = 25705;
  *(_DWORD *)v16 = 539963168;
  sub_7D01E0(a1, v8);
  if ( !(unsigned __int8)sub_7D0270(a1) )
    return 0;
  v17 = a1[1];
  if ( v17 )
  {
    v19 = v17 + 10;
    v18 = v17 + 11;
    --v17;
  }
  else
  {
    v18 = 12;
    v19 = 11;
  }
  v20 = *a1;
  if ( a1[2] < v18 )
  {
    v47 = v19;
    v41 = qvector_reserve(a1, v20, v18, 1);
    v19 = v47;
    *a1 = v41;
    v20 = v41;
  }
  a1[1] = v18;
  *(_BYTE *)(v20 + v19) = 0;
  qmemcpy((void *)(*a1 + v17), " // user_id", 11);
  sub_7D01E0(a1, v8);
  if ( !(unsigned __int8)sub_7D0290(a1) )
    return 0;
  v21 = a1[1];
  if ( v21 )
  {
    v22 = v21 + 5;
    v23 = v21 + 6;
    --v21;
  }
  else
  {
    v23 = 7;
    v22 = 6;
  }
  v24 = *a1;
  if ( a1[2] < v23 )
  {
    v48 = v22;
    v42 = qvector_reserve(a1, v24, v23, 1);
    v22 = v48;
    *a1 = v42;
    v24 = v42;
  }
  a1[1] = v23;
  *(_BYTE *)(v24 + v22) = 0;
  v25 = *a1 + v21;
  *(_DWORD *)v25 = 539963168;
  *(_WORD *)(v25 + 4) = 29556;
  sub_7D01E0(a1, v8);
  if ( !(unsigned __int8)sub_7D0270(a1) )
    return 0;
  v26 = a1[1];
  if ( v26 )
  {
    v28 = v26 + 19;
    v27 = v26 + 20;
    --v26;
  }
  else
  {
    v27 = 21;
    v28 = 20;
  }
  v29 = *a1;
  if ( a1[2] < v27 )
  {
    v49 = v28;
    v43 = qvector_reserve(a1, v29, v27, 1);
    v28 = v49;
    *a1 = v43;
    v29 = v43;
  }
  a1[1] = v27;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8680);
  *(_BYTE *)(v29 + v28) = 0;
  v31 = (__m128i *)(*a1 + v26);
  v31[1].m128i_i32[0] = 1852795252;
  *v31 = si128;
  sub_7D01E0(a1, v8);
  v9 = sub_7D0270(a1);
  if ( !(_BYTE)v9 )
    return 0;
  v32 = a1[1];
  if ( v32 )
  {
    v33 = v32 + 10;
    v34 = v32 + 11;
    --v32;
  }
  else
  {
    v34 = 12;
    v33 = 11;
  }
  v35 = *a1;
  if ( a1[2] < v34 )
  {
    v45 = qvector_reserve(a1, v35, v34, 1);
    *a1 = v45;
    v35 = v45;
  }
  a1[1] = v34;
  *(_BYTE *)(v35 + v33) = 0;
  qmemcpy((void *)(*a1 + v32), " // nevents", 11);
  sub_7D01E0(a1, a3);
  v36 = a1[1];
  if ( v36 )
  {
    v37 = v36 + 1;
    v38 = a1[1];
    --v36;
  }
  else
  {
    v38 = 1;
    v37 = 2;
  }
  v39 = *a1;
  if ( a1[2] < v37 )
  {
    v44 = qvector_reserve(a1, v39, v37, 1);
    *a1 = v44;
    v39 = v44;
  }
  a1[1] = v37;
  *(_BYTE *)(v39 + v36) = 125;
  *(_BYTE *)(*a1 + v38) = 0;
  return v9;
}
