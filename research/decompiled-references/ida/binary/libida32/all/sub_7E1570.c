__int64 __fastcall sub_7E1570(__int64 *a1, __int64 a2, int a3)
{
  __int64 v5; // r12
  unsigned __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rsi
  int v9; // r12d
  unsigned int v10; // r14d
  __int64 v12; // rax
  __int64 v13; // r14
  __int64 v14; // r8
  unsigned __int64 v15; // r15
  __int64 v16; // rsi
  __int64 v17; // r14
  unsigned __int64 v18; // r15
  __int64 v19; // rax
  __int64 v20; // r15
  __int64 v21; // rbp
  unsigned __int64 v22; // r12
  __int64 v23; // r15
  __int64 v24; // rsi
  __m128i si128; // xmm0
  __int64 v26; // rbp
  __int64 v27; // rbp
  unsigned __int64 v28; // r12
  __int64 v29; // r13
  __int64 v30; // rsi
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // [rsp+8h] [rbp-40h]
  __int64 v35; // [rsp+8h] [rbp-40h]

  sub_7ACD80(a1, a3);
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
  sub_7ACD80(a1, a3 + 1);
  if ( !(unsigned __int8)sub_7DFEC0(a1, a2 + 160, a3 + 1) )
    return 0;
  v13 = a1[1];
  if ( !v13 )
  {
    v16 = *a1;
    v15 = 10;
    v14 = 9;
    if ( (unsigned __int64)a1[2] >= 0xA )
      goto LABEL_10;
LABEL_26:
    v35 = v14;
    v31 = qvector_reserve(a1, v16, v15, 1);
    v14 = v35;
    *a1 = v31;
    v16 = v31;
    goto LABEL_10;
  }
  v14 = v13 + 8;
  v15 = v13 + 9;
  v16 = *a1;
  --v13;
  if ( a1[2] < v15 )
    goto LABEL_26;
LABEL_10:
  a1[1] = v15;
  *(_BYTE *)(v16 + v14) = 0;
  v17 = *a1 + v13;
  *(_QWORD *)v17 = 0x72657571202F2F20LL;
  *(_BYTE *)(v17 + 8) = 121;
  sub_7ACD80(a1, v9);
  v18 = *(_QWORD *)(a2 + 200);
  if ( v18 > 0x7FFFFFFF )
    return 0;
  v10 = sub_7ACE10(a1);
  if ( !(_BYTE)v10 )
    return 0;
  if ( (_DWORD)v18 )
  {
    v19 = 24LL * (unsigned int)v18;
    v20 = 0;
    v34 = v19;
    while ( (unsigned __int8)sub_7E0E90(a1, v20 + *(_QWORD *)(a2 + 192), v9) )
    {
      v20 += 24;
      if ( v34 == v20 )
        goto LABEL_16;
    }
    return 0;
  }
LABEL_16:
  v21 = a1[1];
  if ( v21 )
  {
    v23 = v21 + 18;
    v22 = v21 + 19;
    --v21;
  }
  else
  {
    v22 = 20;
    v23 = 19;
  }
  v24 = *a1;
  if ( a1[2] < v22 )
  {
    v33 = qvector_reserve(a1, v24, v22, 1);
    *a1 = v33;
    v24 = v33;
  }
  si128 = _mm_load_si128((const __m128i *)&xmmword_23845A0);
  a1[1] = v22;
  *(_BYTE *)(v24 + v23) = 0;
  v26 = *a1 + v21;
  *(__m128i *)v26 = si128;
  *(_DWORD *)(v26 + 15) = 2037542772;
  sub_7ACD80(a1, a3);
  v27 = a1[1];
  if ( v27 )
  {
    v28 = v27 + 1;
    v29 = a1[1];
    --v27;
  }
  else
  {
    v29 = 1;
    v28 = 2;
  }
  v30 = *a1;
  if ( a1[2] < v28 )
  {
    v32 = qvector_reserve(a1, v30, v28, 1);
    *a1 = v32;
    v30 = v32;
  }
  a1[1] = v28;
  *(_BYTE *)(v30 + v27) = 125;
  *(_BYTE *)(*a1 + v29) = 0;
  return v10;
}

