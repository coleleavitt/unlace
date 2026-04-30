__int64 __fastcall sub_33ED40(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int128 a7,
        __int128 a8)
{
  __int64 v9; // rbp
  unsigned __int64 v10; // r9
  unsigned __int64 v11; // rsi
  __int64 v13; // r11
  __int64 i; // rcx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rax
  _QWORD *v18; // r10
  __int64 result; // rax
  __int64 v20; // r10
  __int64 v21; // rdx
  __m128i v22; // xmm0
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rdx
  __m128i v26; // [rsp+0h] [rbp-38h] BYREF
  __m128i v27; // [rsp+10h] [rbp-28h]

  v9 = a3 & 1;
  v10 = *((_QWORD *)&a7 + 1);
  v11 = a7;
  v13 = (a3 - 1) / 2;
  if ( a2 >= v13 )
  {
    result = a1 + 32 * a2;
    if ( (a3 & 1) != 0 )
    {
      v27 = _mm_loadu_si128((const __m128i *)&a8);
      goto LABEL_15;
    }
    v16 = a2;
    goto LABEL_18;
  }
  for ( i = a2; ; i = v16 )
  {
    v16 = 2 * (i + 1);
    v17 = (i + 1) << 6;
    v18 = (_QWORD *)(a1 + v17 - 32);
    result = a1 + v17;
    if ( *v18 >= *(_QWORD *)result && (*v18 != *(_QWORD *)result || *(_QWORD *)(result + 8) < v18[1]) )
    {
      --v16;
      result = a1 + 32 * v16;
    }
    v15 = a1 + 32 * i;
    *(__m128i *)v15 = _mm_loadu_si128((const __m128i *)result);
    *(__m128i *)(v15 + 9) = _mm_loadu_si128((const __m128i *)(result + 9));
    if ( v13 <= v16 )
      break;
  }
  if ( !v9 )
  {
LABEL_18:
    if ( (a3 - 2) / 2 == v16 )
    {
      v23 = v16 + 1;
      v16 = 2 * (v16 + 1) - 1;
      v24 = a1 + (v23 << 6);
      *(__m128i *)result = _mm_loadu_si128((const __m128i *)(v24 - 32));
      *(__m128i *)(result + 9) = _mm_loadu_si128((const __m128i *)(v24 - 23));
      result = a1 + 32 * v16;
    }
  }
  v26 = _mm_loadu_si128((const __m128i *)&a7);
  v27 = _mm_loadu_si128((const __m128i *)&a8);
  v20 = (v16 - 1) / 2;
  if ( v16 > a2 )
  {
    while ( 1 )
    {
      v21 = 32 * v16;
      result = a1 + 32 * v20;
      if ( v11 < *(_QWORD *)result || *(_QWORD *)result == v11 && *(_QWORD *)(result + 8) >= v10 )
        break;
      v25 = a1 + v21;
      *(__m128i *)v25 = _mm_loadu_si128((const __m128i *)result);
      *(__m128i *)(v25 + 9) = _mm_loadu_si128((const __m128i *)(result + 9));
      v16 = v20;
      if ( a2 >= v20 )
        goto LABEL_15;
      v20 = (v20 - 1) / 2;
    }
    result = a1 + v21;
  }
LABEL_15:
  v22 = _mm_unpacklo_epi64((__m128i)v11, (__m128i)v10);
  *(__m128i *)result = v22;
  v26.m128i_i64[1] = v22.m128i_i64[1];
  *(__m128i *)(result + 9) = _mm_loadu_si128((const __m128i *)((char *)&v26.m128i_u64[1] + 1));
  return result;
}
