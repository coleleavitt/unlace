__int64 __fastcall sub_21C5260(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int128 a7,
        __int64 a8)
{
  unsigned __int64 v8; // r11
  __int64 v9; // r12
  __int64 i; // r8
  __m128i v11; // xmm1
  __int64 v12; // rax
  __int64 result; // rax
  __int64 v14; // rcx
  __int64 v15; // r10
  __int64 v16; // r9
  __m128i v17; // xmm2
  __int64 v18; // rcx
  __int64 v19; // rcx
  unsigned __int64 *v20; // r10
  unsigned __int64 j; // r8
  __m128i v22; // xmm0
  __int64 v23; // rax
  __m128i v24; // xmm3
  __int64 v25; // rdx
  __m128i v26; // xmm5
  __m128i v27; // [rsp+0h] [rbp-48h] BYREF
  __int64 v28; // [rsp+10h] [rbp-38h]

  v8 = a7;
  v9 = (a3 - 1) / 2;
  if ( a2 < v9 )
  {
    for ( i = a2; ; i = result )
    {
      v14 = 2 * (i + 1);
      result = v14 - 1;
      v15 = a1 + 48 * (i + 1);
      v16 = a1 + 24 * (v14 - 1);
      if ( *(_QWORD *)v16 <= *(_QWORD *)v15 )
      {
        v11 = _mm_loadu_si128((const __m128i *)(v15 + 8));
        v12 = a1 + 24 * i;
        *(_QWORD *)v12 = *(_QWORD *)v15;
        *(__m128i *)(v12 + 8) = v11;
        if ( v9 <= v14 )
        {
          v16 = a1 + 48 * (i + 1);
          result = 2 * (i + 1);
          if ( (a3 & 1) != 0 )
            goto LABEL_9;
          goto LABEL_15;
        }
        result = 2 * (i + 1);
      }
      else
      {
        v17 = _mm_loadu_si128((const __m128i *)(v16 + 8));
        v18 = a1 + 24 * i;
        *(_QWORD *)v18 = *(_QWORD *)v16;
        *(__m128i *)(v18 + 8) = v17;
        if ( v9 <= result )
        {
          if ( (a3 & 1) == 0 )
            goto LABEL_15;
          goto LABEL_9;
        }
      }
    }
  }
  v16 = a1 + 24 * a2;
  result = a2;
  if ( (a3 & 1) != 0 )
  {
    result = a8;
    v27.m128i_i64[1] = _mm_loadu_si128((const __m128i *)&a7).m128i_i64[1];
    v28 = a8;
  }
  else
  {
LABEL_15:
    if ( (a3 - 2) / 2 == result )
    {
      result = 2 * result + 1;
      v25 = a1 + 24 * result;
      v26 = _mm_loadu_si128((const __m128i *)(v25 + 8));
      *(_QWORD *)v16 = *(_QWORD *)v25;
      *(__m128i *)(v16 + 8) = v26;
      v16 = v25;
    }
LABEL_9:
    v28 = a8;
    v27.m128i_i64[1] = _mm_loadu_si128((const __m128i *)&a7).m128i_i64[1];
    v19 = (result - 1) / 2;
    if ( result > a2 )
    {
      v20 = (unsigned __int64 *)(a1 + 24 * v19);
      for ( j = *v20; *v20 < v8; j = *v20 )
      {
        v22 = _mm_loadu_si128((const __m128i *)(v20 + 1));
        v23 = a1 + 24 * result;
        *(_QWORD *)v23 = j;
        *(__m128i *)(v23 + 8) = v22;
        result = 3 * v19;
        v16 = a1 + 24 * v19;
        if ( a2 >= v19 )
          break;
        v20 = (unsigned __int64 *)(a1 + 24 * ((v19 - 1) / 2));
        result = v19;
        v19 = (v19 - 1) / 2;
      }
    }
  }
  v24 = _mm_loadu_si128((const __m128i *)&v27.m128i_u64[1]);
  *(_QWORD *)v16 = v8;
  *(__m128i *)(v16 + 8) = v24;
  return result;
}
