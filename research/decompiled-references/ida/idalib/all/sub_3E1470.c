__m128i *__fastcall sub_3E1470(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int128 a7,
        __int64 a8)
{
  __int64 v9; // rsi
  __int64 v10; // rbp
  unsigned __int8 v11; // r11
  __int8 v12; // r9
  unsigned __int64 v13; // r10
  __int64 i; // rcx
  __m128i *v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // r12
  __m128i *result; // rax
  __int8 v21; // r14
  __int64 v22; // rsi
  __m128i v23; // xmm0
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rdx
  __m128i *v27; // rdx
  __m128i v28; // [rsp+0h] [rbp-48h] BYREF
  __int64 v29; // [rsp+10h] [rbp-38h]

  v9 = (a3 - 1) / 2;
  v10 = a3 & 1;
  v11 = a8;
  v12 = BYTE8(a7);
  v13 = a7;
  if ( a2 >= v9 )
  {
    result = (__m128i *)(a1 + 24 * a2);
    if ( (a3 & 1) != 0 )
    {
      v28 = _mm_loadu_si128((const __m128i *)&a7);
      goto LABEL_19;
    }
    v17 = a2;
    goto LABEL_22;
  }
  for ( i = a2; ; i = v17 )
  {
    v17 = 2 * (i + 1);
    v18 = 48 * (i + 1);
    v19 = a1 + v18 - 24;
    result = (__m128i *)(a1 + v18);
    v21 = *(_BYTE *)(v19 + 8);
    if ( result->m128i_i8[8] < v21
      || result->m128i_i8[8] <= v21
      && (result->m128i_i64[0] < *(_QWORD *)v19
       || *(_QWORD *)v19 >= result->m128i_i64[0] && result[1].m128i_i8[0] < *(_BYTE *)(v19 + 16)) )
    {
      --v17;
      result = (__m128i *)(a1 + 24 * v17);
    }
    v16 = (__m128i *)(a1 + 24 * i);
    *v16 = _mm_loadu_si128(result);
    v16[1].m128i_i8[0] = result[1].m128i_i8[0];
    if ( v17 >= v9 )
      break;
  }
  if ( !v10 )
  {
LABEL_22:
    if ( (a3 - 2) / 2 == v17 )
    {
      v24 = v17 + 1;
      v25 = 2 * v24;
      v26 = a1 + 48 * v24;
      *result = _mm_loadu_si128((const __m128i *)(v26 - 24));
      result[1].m128i_i8[0] = *(_BYTE *)(v26 - 8);
      v17 = v25 - 1;
      result = (__m128i *)(a1 + 24 * (v25 - 1));
    }
  }
  v29 = a8;
  v28 = _mm_loadu_si128((const __m128i *)&a7);
  v22 = (v17 - 1) / 2;
  if ( v17 > a2 )
  {
    while ( 1 )
    {
      result = (__m128i *)(a1 + 24 * v22);
      if ( result->m128i_i8[8] >= v12
        && (result->m128i_i8[8] > v12
         || result->m128i_i64[0] >= v13 && (v13 < result->m128i_i64[0] || (unsigned int)result[1].m128i_i8[0] >= v11)) )
      {
        break;
      }
      v27 = (__m128i *)(a1 + 24 * v17);
      *v27 = _mm_loadu_si128(result);
      v27[1].m128i_i8[0] = result[1].m128i_i8[0];
      v17 = v22;
      if ( a2 >= v22 )
        goto LABEL_19;
      v22 = (v22 - 1) / 2;
    }
    result = (__m128i *)(a1 + 24 * v17);
  }
LABEL_19:
  v28.m128i_i64[0] = v13;
  v28.m128i_i8[8] = v12;
  v23 = _mm_load_si128(&v28);
  result[1].m128i_i8[0] = v11;
  *result = v23;
  return result;
}
