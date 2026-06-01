__int64 __fastcall sub_2D11B0(__int64 *a1, __int64 a2, char a3, char a4)
{
  __int64 v6; // rbp
  __int64 v7; // rsi
  unsigned __int64 v8; // r14
  __int64 v9; // r15
  __int64 result; // rax
  unsigned __int64 v11; // rbp
  __int64 v12; // rsi
  unsigned __int64 v13; // r14
  __int64 v14; // r15
  __m128i si128; // xmm0
  __m128i *v16; // rbp
  size_t v17; // r15
  __int64 v18; // r14
  size_t v19; // r8
  __int64 v20; // rsi
  __int64 v21; // rbp
  __int64 v22; // rsi
  __int64 v23; // r13
  unsigned __int64 v24; // r12
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  size_t v29; // [rsp+8h] [rbp-40h]

  v6 = a1[1];
  if ( a3 )
  {
    if ( v6 )
    {
      v9 = v6 + 9;
      v8 = v6 + 10;
      v7 = *a1;
      --v6;
      if ( a1[2] >= v8 )
        goto LABEL_4;
    }
    else
    {
      v7 = *a1;
      v8 = 11;
      v9 = 10;
      if ( (unsigned __int64)a1[2] >= 0xB )
        goto LABEL_4;
    }
    v26 = qvector_reserve(a1, v7, v8, 1);
    *a1 = v26;
    v7 = v26;
LABEL_4:
    a1[1] = v8;
    result = 0x4847494C48474948LL;
    *(_BYTE *)(v7 + v9) = 0;
    qmemcpy((void *)(*a1 + v6), "HIGHLIGHT ", 10);
    v11 = *(_QWORD *)(a2 + 8);
    if ( !v11 )
      goto LABEL_5;
    goto LABEL_10;
  }
  if ( v6 )
  {
    v14 = v6 + 17;
    v13 = v6 + 18;
    v12 = *a1;
    --v6;
    if ( a1[2] >= v13 )
      goto LABEL_9;
  }
  else
  {
    v12 = *a1;
    v13 = 19;
    v14 = 18;
    if ( (unsigned __int64)a1[2] >= 0x13 )
      goto LABEL_9;
  }
  v25 = qvector_reserve(a1, v12, v13, 1);
  *a1 = v25;
  v12 = v25;
LABEL_9:
  si128 = _mm_load_si128((const __m128i *)&xmmword_5DCDA0);
  a1[1] = v13;
  result = 8276;
  *(_BYTE *)(v12 + v14) = 0;
  v16 = (__m128i *)(*a1 + v6);
  v16[1].m128i_i16[0] = 8276;
  *v16 = si128;
  v11 = *(_QWORD *)(a2 + 8);
  if ( !v11 )
    goto LABEL_5;
LABEL_10:
  v17 = v11 - 1;
  if ( v11 == 1 )
  {
LABEL_5:
    if ( !a4 )
      return result;
LABEL_16:
    v21 = a1[1];
    if ( v21 )
    {
      v24 = v21 + 1;
      v23 = a1[1];
      v22 = *a1;
      --v21;
      if ( a1[2] >= v24 )
        goto LABEL_18;
    }
    else
    {
      v22 = *a1;
      v23 = 1;
      v24 = 2;
      if ( (unsigned __int64)a1[2] >= 2 )
      {
LABEL_18:
        a1[1] = v24;
        *(_BYTE *)(v22 + v21) = 10;
        result = *a1;
        *(_BYTE *)(*a1 + v23) = 0;
        return result;
      }
    }
    v27 = qvector_reserve(a1, v22, v24, 1);
    *a1 = v27;
    v22 = v27;
    goto LABEL_18;
  }
  v18 = a1[1];
  v19 = v11 - 1;
  if ( v18 )
  {
    --v18;
    v19 = v17 + v18;
    v11 += v18;
  }
  v20 = *a1;
  if ( a1[2] < v11 )
  {
    v29 = v19;
    v28 = qvector_reserve(a1, v20, v11, 1);
    v19 = v29;
    *a1 = v28;
    v20 = v28;
  }
  a1[1] = v11;
  *(_BYTE *)(v20 + v19) = 0;
  result = (__int64)memcpy((void *)(v18 + *a1), *(const void **)a2, v17);
  if ( a4 )
    goto LABEL_16;
  return result;
}
