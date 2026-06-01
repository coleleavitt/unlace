__int64 __fastcall sub_808430(__int64 *a1, __int64 a2)
{
  __int64 v3; // rbp
  __int64 v4; // r14
  unsigned __int64 v5; // r13
  __int64 v6; // rsi
  __m128i si128; // xmm0
  __int64 v8; // rbp
  unsigned __int64 v9; // rbp
  unsigned int v10; // ebp
  __int64 v12; // rax
  __int64 v13; // r13
  __int64 v14; // rbp
  __int64 v15; // r13
  __int64 v16; // rbp
  unsigned __int64 v17; // r13
  __int64 v18; // r14
  __int64 v19; // rsi
  __int64 v20; // r12
  unsigned __int64 v21; // r13
  __int64 v22; // r14
  __int64 v23; // rsi
  __m128i v24; // xmm0
  __m128i *v25; // r12
  __int64 v26; // r12
  unsigned __int64 v27; // r13
  __int64 v28; // r14
  __int64 v29; // rsi
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax

  v3 = a1[1];
  if ( v3 )
  {
    v4 = v3 + 24;
    v5 = v3 + 25;
    v6 = *a1;
    --v3;
    if ( a1[2] >= v5 )
      goto LABEL_3;
  }
  else
  {
    v6 = *a1;
    v5 = 26;
    v4 = 25;
    if ( (unsigned __int64)a1[2] >= 0x1A )
      goto LABEL_3;
  }
  v12 = qvector_reserve(a1, v6, v5, 1);
  *a1 = v12;
  v6 = v12;
LABEL_3:
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8690);
  a1[1] = v5;
  *(_BYTE *)(v6 + v4) = 0;
  v8 = *a1 + v3;
  *(__m128i *)v8 = si128;
  *(__m128i *)(v8 + 9) = _mm_load_si128((const __m128i *)&xmmword_23A86A0);
  sub_7D01E0(a1, 1);
  v9 = *(_QWORD *)(a2 + 24);
  if ( v9 > 0x7FFFFFFF || !(unsigned __int8)sub_7D0270(a1) )
    return 0;
  if ( (_DWORD)v9 )
  {
    v13 = 13LL * (unsigned int)v9;
    v14 = 0;
    v15 = 8 * v13;
    while ( (unsigned __int8)sub_807FE0(a1, v14 + *(_QWORD *)(a2 + 16), 1) )
    {
      v14 += 104;
      if ( v15 == v14 )
        goto LABEL_14;
    }
    return 0;
  }
LABEL_14:
  v16 = a1[1];
  if ( v16 )
  {
    v18 = v16 + 10;
    v17 = v16 + 11;
    --v16;
  }
  else
  {
    v17 = 12;
    v18 = 11;
  }
  v19 = *a1;
  if ( a1[2] < v17 )
  {
    v30 = qvector_reserve(a1, v19, v17, 1);
    *a1 = v30;
    v19 = v30;
  }
  a1[1] = v17;
  *(_BYTE *)(v19 + v18) = 0;
  qmemcpy((void *)(*a1 + v16), " // results", 11);
  sub_7D01E0(a1, 1);
  v10 = sub_7D0270(a1);
  if ( !(_BYTE)v10 )
    return 0;
  v20 = a1[1];
  if ( v20 )
  {
    v22 = v20 + 19;
    v21 = v20 + 20;
    --v20;
  }
  else
  {
    v21 = 21;
    v22 = 20;
  }
  v23 = *a1;
  if ( a1[2] < v21 )
  {
    v32 = qvector_reserve(a1, v23, v21, 1);
    *a1 = v32;
    v23 = v32;
  }
  a1[1] = v21;
  v24 = _mm_load_si128((const __m128i *)&xmmword_23A8610);
  *(_BYTE *)(v23 + v22) = 0;
  v25 = (__m128i *)(*a1 + v20);
  v25[1].m128i_i32[0] = 1937009781;
  *v25 = v24;
  sub_7D01E0(a1, 1);
  v26 = a1[1];
  if ( v26 )
  {
    v27 = v26 + 1;
    v28 = a1[1];
    --v26;
  }
  else
  {
    v28 = 1;
    v27 = 2;
  }
  v29 = *a1;
  if ( a1[2] < v27 )
  {
    v31 = qvector_reserve(a1, v29, v27, 1);
    *a1 = v31;
    v29 = v31;
  }
  a1[1] = v27;
  *(_BYTE *)(v29 + v26) = 59;
  *(_BYTE *)(*a1 + v28) = 0;
  return v10;
}
