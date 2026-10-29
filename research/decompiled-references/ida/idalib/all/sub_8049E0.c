__int64 __fastcall sub_8049E0(__int64 *a1, __int64 a2)
{
  __int64 v3; // rbp
  __int64 v4; // r14
  unsigned __int64 v5; // r13
  __int64 v6; // rsi
  __m128i si128; // xmm0
  __m128i *v8; // rbp
  unsigned __int64 v9; // rbp
  __int64 v11; // rax
  unsigned int v12; // r13d
  __int64 v13; // rax
  __int64 v14; // rbp
  __int64 v15; // r14
  __int64 v16; // rbp
  unsigned __int64 v17; // r12
  __int64 v18; // r14
  __int64 v19; // rsi
  __int64 v20; // rbp
  __int64 v21; // rbp
  unsigned __int64 v22; // r12
  __int64 v23; // r14
  __int64 v24; // rsi
  __int64 v25; // rax
  __int64 v26; // rax

  v3 = a1[1];
  if ( !v3 )
  {
    v6 = *a1;
    v5 = 19;
    v4 = 18;
    if ( (unsigned __int64)a1[2] >= 0x13 )
      goto LABEL_3;
LABEL_6:
    v11 = qvector_reserve(a1, v6, v5, 1);
    *a1 = v11;
    v6 = v11;
    goto LABEL_3;
  }
  v4 = v3 + 17;
  v5 = v3 + 18;
  v6 = *a1;
  --v3;
  if ( a1[2] < v5 )
    goto LABEL_6;
LABEL_3:
  a1[1] = v5;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A85E0);
  *(_BYTE *)(v6 + v4) = 0;
  v8 = (__m128i *)(*a1 + v3);
  v8[1].m128i_i16[0] = 8276;
  *v8 = si128;
  sub_7D01E0(a1, 1);
  v9 = *(_QWORD *)(a2 + 24);
  if ( v9 > 0x7FFFFFFF )
    return 0;
  v12 = sub_7D0270(a1);
  if ( !(_BYTE)v12 )
    return 0;
  if ( (_DWORD)v9 )
  {
    v13 = 3LL * (unsigned int)v9;
    v14 = 0;
    v15 = 72 * v13;
    while ( (unsigned __int8)sub_804710(a1, v14 + *(_QWORD *)(a2 + 16), 1) )
    {
      v14 += 216;
      if ( v14 == v15 )
        goto LABEL_12;
    }
    return 0;
  }
LABEL_12:
  v16 = a1[1];
  if ( v16 )
  {
    v18 = v16 + 8;
    v17 = v16 + 9;
    --v16;
  }
  else
  {
    v17 = 10;
    v18 = 9;
  }
  v19 = *a1;
  if ( a1[2] < v17 )
  {
    v26 = qvector_reserve(a1, v19, v17, 1);
    *a1 = v26;
    v19 = v26;
  }
  a1[1] = v17;
  *(_BYTE *)(v19 + v18) = 0;
  v20 = *a1 + v16;
  *(_QWORD *)v20 = 0x72656570202F2F20LL;
  *(_BYTE *)(v20 + 8) = 115;
  sub_7D01E0(a1, 1);
  v21 = a1[1];
  if ( v21 )
  {
    v22 = v21 + 1;
    v23 = a1[1];
    --v21;
  }
  else
  {
    v23 = 1;
    v22 = 2;
  }
  v24 = *a1;
  if ( a1[2] < v22 )
  {
    v25 = qvector_reserve(a1, v24, v22, 1);
    *a1 = v25;
    v24 = v25;
  }
  a1[1] = v22;
  *(_BYTE *)(v24 + v21) = 59;
  *(_BYTE *)(*a1 + v23) = 0;
  return v12;
}
