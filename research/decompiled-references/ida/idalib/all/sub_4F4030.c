__m128i *__fastcall sub_4F4030(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        unsigned __int128 a7,
        __int64 a8)
{
  __int64 v8; // r9
  __int64 v10; // rbp
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rax
  _OWORD *v14; // r13
  __m128i *result; // rax
  __m128i *v16; // rsi
  __int64 v17; // rsi
  __m128i *v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rsi
  __int64 v21; // rdx
  __int32 v22; // [rsp+10h] [rbp-38h]

  v8 = a2;
  v10 = a3 & 1;
  v11 = (a3 - 1) / 2;
  if ( a2 >= v11 )
  {
    v12 = a2;
    result = (__m128i *)(a1 + 24 * a2);
    if ( v10 )
    {
      v22 = a8;
      goto LABEL_16;
    }
    goto LABEL_13;
  }
  while ( 1 )
  {
    v12 = 2 * (a2 + 1);
    v13 = 48 * (a2 + 1);
    v14 = (_OWORD *)(a1 + v13 - 24);
    result = (__m128i *)(a1 + v13);
    if ( (unsigned __int128)*result < *v14 )
    {
      --v12;
      result = (__m128i *)(a1 + 24 * v12);
    }
    v16 = (__m128i *)(a1 + 24 * a2);
    *v16 = _mm_loadu_si128(result);
    v16[1].m128i_i32[0] = result[1].m128i_i32[0];
    if ( v11 <= v12 )
      break;
    a2 = v12;
  }
  if ( !v10 )
  {
LABEL_13:
    if ( (a3 - 2) / 2 == v12 )
    {
      v19 = v12 + 1;
      v20 = 2 * v19;
      v21 = a1 + 48 * v19;
      *result = _mm_loadu_si128((const __m128i *)(v21 - 24));
      result[1].m128i_i32[0] = *(_DWORD *)(v21 - 8);
      v12 = v20 - 1;
      result = (__m128i *)(a1 + 24 * (v20 - 1));
    }
  }
  v22 = a8;
  v17 = (v12 - 1) / 2;
  if ( v12 > v8 )
  {
    while ( 1 )
    {
      result = (__m128i *)(a1 + 24 * v17);
      if ( (unsigned __int128)*result >= a7 )
        break;
      v18 = (__m128i *)(a1 + 24 * v12);
      *v18 = _mm_loadu_si128(result);
      v18[1].m128i_i32[0] = result[1].m128i_i32[0];
      v12 = v17;
      if ( v8 >= v17 )
        goto LABEL_16;
      v17 = (v17 - 1) / 2;
    }
    result = (__m128i *)(a1 + 24 * v12);
  }
LABEL_16:
  result[1].m128i_i32[0] = v22;
  *result = _mm_unpacklo_epi64((__m128i)(unsigned __int64)a7, (__m128i)*((unsigned __int64 *)&a7 + 1));
  return result;
}
