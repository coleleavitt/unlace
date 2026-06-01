__int64 __fastcall sub_7DE170(__int64 *a1, __int64 a2)
{
  __int64 v3; // rbp
  __int64 v4; // r14
  unsigned __int64 v5; // r13
  __int64 v6; // rsi
  __m128i si128; // xmm0
  __int64 v8; // rbp
  unsigned __int64 v9; // r14
  unsigned int v10; // ebp
  __int64 v12; // rax
  __int64 v13; // rbp
  __int64 v14; // rbp
  unsigned __int64 v15; // r13
  __int64 v16; // r14
  __int64 v17; // rsi
  __int64 v18; // r12
  unsigned __int64 v19; // r13
  __int64 v20; // r14
  __int64 v21; // rsi
  __int64 v22; // r12
  __int64 v23; // r12
  unsigned __int64 v24; // r13
  __int64 v25; // r14
  __int64 v26; // rsi
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax

  v3 = a1[1];
  if ( v3 )
  {
    v4 = v3 + 18;
    v5 = v3 + 19;
    v6 = *a1;
    --v3;
    if ( a1[2] >= v5 )
      goto LABEL_3;
  }
  else
  {
    v6 = *a1;
    v5 = 20;
    v4 = 19;
    if ( (unsigned __int64)a1[2] >= 0x14 )
      goto LABEL_3;
  }
  v12 = qvector_reserve(a1, v6, v5, 1);
  *a1 = v12;
  v6 = v12;
LABEL_3:
  si128 = _mm_load_si128(xmmword_2384560);
  a1[1] = v5;
  *(_BYTE *)(v6 + v4) = 0;
  v8 = *a1 + v3;
  *(__m128i *)v8 = si128;
  *(_DWORD *)(v8 + 15) = 542328137;
  sub_7ACD80(a1, 1);
  v9 = *(_QWORD *)(a2 + 24);
  if ( v9 > 0x7FFFFFFF || !(unsigned __int8)sub_7ACE10(a1) )
    return 0;
  v13 = 0;
  if ( (_DWORD)v9 )
  {
    while ( (unsigned __int8)sub_7DDB20(a1, v13 + *(_QWORD *)(a2 + 16), 1) )
    {
      v13 += 32;
      if ( 32LL * (unsigned int)v9 == v13 )
        goto LABEL_14;
    }
    return 0;
  }
LABEL_14:
  v14 = a1[1];
  if ( v14 )
  {
    v16 = v14 + 14;
    v15 = v14 + 15;
    --v14;
  }
  else
  {
    v15 = 16;
    v16 = 15;
  }
  v17 = *a1;
  if ( a1[2] < v15 )
  {
    v27 = qvector_reserve(a1, v17, v15, 1);
    *a1 = v27;
    v17 = v27;
  }
  a1[1] = v15;
  *(_BYTE *)(v17 + v16) = 0;
  qmemcpy((void *)(*a1 + v14), " // pattern_ids", 15);
  sub_7ACD80(a1, 1);
  v10 = sub_7ACE10(a1);
  if ( !(_BYTE)v10 )
    return 0;
  v18 = a1[1];
  if ( v18 )
  {
    v20 = v18 + 8;
    v19 = v18 + 9;
    --v18;
  }
  else
  {
    v19 = 10;
    v20 = 9;
  }
  v21 = *a1;
  if ( a1[2] < v19 )
  {
    v29 = qvector_reserve(a1, v21, v19, 1);
    *a1 = v29;
    v21 = v29;
  }
  a1[1] = v19;
  *(_BYTE *)(v21 + v20) = 0;
  v22 = *a1 + v18;
  *(_QWORD *)v22 = 0x67616C66202F2F20LL;
  *(_BYTE *)(v22 + 8) = 115;
  sub_7ACD80(a1, 1);
  v23 = a1[1];
  if ( v23 )
  {
    v24 = v23 + 1;
    v25 = a1[1];
    --v23;
  }
  else
  {
    v25 = 1;
    v24 = 2;
  }
  v26 = *a1;
  if ( a1[2] < v24 )
  {
    v28 = qvector_reserve(a1, v26, v24, 1);
    *a1 = v28;
    v26 = v28;
  }
  a1[1] = v24;
  *(_BYTE *)(v26 + v23) = 59;
  *(_BYTE *)(*a1 + v25) = 0;
  return v10;
}

