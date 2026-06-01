__int64 __fastcall sub_7DD600(__int64 *a1, __int64 a2, int a3)
{
  __int64 v5; // rbp
  __int64 v6; // r15
  unsigned __int64 v7; // r14
  __int64 v8; // rsi
  __int64 v9; // rbp
  unsigned int v10; // ebp
  __int64 v12; // rax
  __int64 v13; // rbp
  __int64 v14; // r15
  unsigned __int64 v15; // r14
  __int64 v16; // rsi
  __m128i si128; // xmm0
  __m128i *v18; // rbp
  __int64 v19; // rbp
  unsigned __int64 v20; // r14
  __int64 v21; // r15
  __int64 v22; // rsi
  _DWORD *v23; // rbp
  __int64 v24; // r8
  int v25; // r9d
  __int64 v26; // rbp
  __int64 v27; // r15
  unsigned __int64 v28; // r14
  __int64 v29; // rsi
  __int64 v30; // r14
  unsigned __int64 v31; // r15
  __int64 v32; // r8
  __int64 v33; // rsi
  __int64 v34; // r13
  __int64 v35; // r15
  unsigned __int64 v36; // r14
  __int64 v37; // rsi
  __int64 v38; // r12
  __int64 v39; // r14
  unsigned __int64 v40; // r13
  __int64 v41; // rsi
  __int64 v42; // r12
  unsigned __int64 v43; // r13
  __int64 v44; // r14
  __int64 v45; // rsi
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // [rsp+8h] [rbp-40h]

  v5 = a1[1];
  if ( v5 )
  {
    v6 = v5 + 4;
    v7 = v5 + 5;
    v8 = *a1;
    --v5;
    if ( a1[2] >= v7 )
      goto LABEL_3;
  }
  else
  {
    v8 = *a1;
    v7 = 6;
    v6 = 5;
    if ( (unsigned __int64)a1[2] >= 6 )
      goto LABEL_3;
  }
  v12 = qvector_reserve(a1, v8, v7, 1);
  *a1 = v12;
  v8 = v12;
LABEL_3:
  a1[1] = v7;
  *(_BYTE *)(v8 + v6) = 0;
  v9 = *a1 + v5;
  *(_DWORD *)v9 = 1330398536;
  *(_BYTE *)(v9 + 4) = 32;
  sub_7ACD80(a1, 1);
  if ( !(unsigned __int8)sub_7ACE10(a1) )
    return 0;
  v13 = a1[1];
  if ( !v13 )
  {
    v16 = *a1;
    v15 = 19;
    v14 = 18;
    if ( (unsigned __int64)a1[2] >= 0x13 )
      goto LABEL_10;
LABEL_43:
    v46 = qvector_reserve(a1, v16, v15, 1);
    *a1 = v46;
    v16 = v46;
    goto LABEL_10;
  }
  v14 = v13 + 17;
  v15 = v13 + 18;
  v16 = *a1;
  --v13;
  if ( a1[2] < v15 )
    goto LABEL_43;
LABEL_10:
  a1[1] = v15;
  si128 = _mm_load_si128((const __m128i *)&xmmword_2384550);
  *(_BYTE *)(v16 + v14) = 0;
  v18 = (__m128i *)(*a1 + v13);
  v18[1].m128i_i16[0] = 28271;
  *v18 = si128;
  sub_7ACD80(a1, 1);
  if ( !(unsigned __int8)sub_7ACFC0(a1, a2 + 16, 1) )
    return 0;
  v19 = a1[1];
  if ( v19 )
  {
    v21 = v19 + 6;
    v20 = v19 + 7;
    --v19;
  }
  else
  {
    v20 = 8;
    v21 = 7;
  }
  v22 = *a1;
  if ( a1[2] < v20 )
  {
    v47 = qvector_reserve(a1, v22, v20, 1);
    *a1 = v47;
    v22 = v47;
  }
  a1[1] = v20;
  *(_BYTE *)(v22 + v21) = 0;
  v23 = (_DWORD *)(*a1 + v19);
  *v23 = 539963168;
  *(_DWORD *)((char *)v23 + 3) = 2036689696;
  sub_7ACD80(a1, 1);
  if ( !(unsigned __int8)sub_7ACE70(a1, (_BYTE *)(a2 + 40), 6u, 1, v24, v25) )
    return 0;
  v26 = a1[1];
  if ( v26 )
  {
    v27 = v26 + 13;
    v28 = v26 + 14;
    --v26;
  }
  else
  {
    v28 = 15;
    v27 = 14;
  }
  v29 = *a1;
  if ( a1[2] < v28 )
  {
    v48 = qvector_reserve(a1, v29, v28, 1);
    *a1 = v48;
    v29 = v48;
  }
  a1[1] = v28;
  *(_BYTE *)(v29 + v27) = 0;
  qmemcpy((void *)(*a1 + v26), " // license_id", 14);
  sub_7ACD80(a1, 1);
  v10 = sub_7ACE10(a1);
  if ( !(_BYTE)v10 )
    return 0;
  v30 = a1[1];
  if ( v30 )
  {
    v32 = v30 + 14;
    v31 = v30 + 15;
    --v30;
  }
  else
  {
    v31 = 16;
    v32 = 15;
  }
  v33 = *a1;
  if ( a1[2] < v31 )
  {
    v53 = v32;
    v49 = qvector_reserve(a1, v33, v31, 1);
    v32 = v53;
    *a1 = v49;
    v33 = v49;
  }
  a1[1] = v31;
  *(_BYTE *)(v33 + v32) = 0;
  qmemcpy((void *)(*a1 + v30), " // record_conv", 15);
  if ( a3 > 2 )
  {
    sub_7ACD80(a1, 1);
    if ( !(unsigned __int8)sub_7AD010(a1) )
      return 0;
    v34 = a1[1];
    if ( v34 )
    {
      v35 = v34 + 11;
      v36 = v34 + 12;
      --v34;
    }
    else
    {
      v36 = 13;
      v35 = 12;
    }
    v37 = *a1;
    if ( a1[2] < v36 )
    {
      v51 = qvector_reserve(a1, v37, v36, 1);
      *a1 = v51;
      v37 = v51;
    }
    a1[1] = v36;
    *(_BYTE *)(v37 + v35) = 0;
    qmemcpy((void *)(*a1 + v34), " // username", 12);
    sub_7ACD80(a1, 1);
    if ( !(unsigned __int8)sub_7AD010(a1) )
      return 0;
    v38 = a1[1];
    if ( v38 )
    {
      v39 = v38 + 11;
      v40 = v38 + 12;
      --v38;
    }
    else
    {
      v40 = 13;
      v39 = 12;
    }
    v41 = *a1;
    if ( a1[2] < v40 )
    {
      v52 = qvector_reserve(a1, v41, v40, 1);
      *a1 = v52;
      v41 = v52;
    }
    a1[1] = v40;
    *(_BYTE *)(v41 + v39) = 0;
    qmemcpy((void *)(*a1 + v38), " // password", 12);
  }
  sub_7ACD80(a1, 1);
  v42 = a1[1];
  if ( v42 )
  {
    v43 = v42 + 1;
    v44 = a1[1];
    --v42;
  }
  else
  {
    v44 = 1;
    v43 = 2;
  }
  v45 = *a1;
  if ( a1[2] < v43 )
  {
    v50 = qvector_reserve(a1, v45, v43, 1);
    *a1 = v50;
    v45 = v50;
  }
  a1[1] = v43;
  *(_BYTE *)(v45 + v42) = 59;
  *(_BYTE *)(*a1 + v44) = 0;
  return v10;
}

