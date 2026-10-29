__int64 __fastcall sub_F79D40(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int128 a7,
        __int128 a8,
        __int128 a9,
        __int128 a10)
{
  unsigned __int64 v10; // r9
  __int64 v11; // r11
  __int64 i; // r8
  __int64 v13; // rax
  __int64 v14; // r8
  unsigned __int64 *v15; // rcx
  unsigned __int64 v16; // r10
  __m128i v17; // xmm4
  unsigned __int64 v18; // rbp
  __int64 v19; // r8
  __m128i v20; // xmm7
  __int64 v21; // r10
  unsigned __int64 *v22; // rdx
  unsigned __int64 j; // r11
  __int64 v24; // rax
  __m128i v25; // xmm1
  __int64 v26; // r8
  __m128i v27; // xmm4
  __m128i v28; // xmm5
  __m128i v29; // xmm6
  __int64 result; // rax
  __int64 v31; // rdx
  __int64 v32; // rdx
  unsigned __int64 v33; // r8
  __m128i v34; // xmm6
  __m128i v35; // [rsp+0h] [rbp-58h] BYREF
  __m128i v36; // [rsp+10h] [rbp-48h] BYREF
  __m128i v37; // [rsp+20h] [rbp-38h] BYREF
  __m128i v38; // [rsp+30h] [rbp-28h]

  v10 = a7;
  v11 = (a3 - 1) / 2;
  if ( a2 < v11 )
  {
    for ( i = a2; ; i = v13 )
    {
      v13 = 2 * (i + 1);
      v15 = (unsigned __int64 *)(a1 + ((i + 1) << 7));
      v18 = *v15;
      if ( *v15 < *(v15 - 8) )
      {
        --v13;
        v14 = a1 + (i << 6);
        v15 = (unsigned __int64 *)(a1 + (v13 << 6));
        v16 = *v15;
        *(__m128i *)(v14 + 8) = _mm_loadu_si128((const __m128i *)(v15 + 1));
        v17 = _mm_loadu_si128((const __m128i *)(v15 + 3));
        *(_QWORD *)v14 = v16;
        *(__m128i *)(v14 + 24) = v17;
        *(__m128i *)(v14 + 40) = _mm_loadu_si128((const __m128i *)(v15 + 5));
        *(_QWORD *)(v14 + 56) = v15[7];
        if ( v13 >= v11 )
          goto LABEL_7;
      }
      else
      {
        v19 = a1 + (i << 6);
        *(__m128i *)(v19 + 8) = _mm_loadu_si128((const __m128i *)(v15 + 1));
        v20 = _mm_loadu_si128((const __m128i *)(v15 + 3));
        *(_QWORD *)v19 = v18;
        *(__m128i *)(v19 + 24) = v20;
        *(__m128i *)(v19 + 40) = _mm_loadu_si128((const __m128i *)(v15 + 5));
        *(_QWORD *)(v19 + 56) = v15[7];
        if ( v13 >= v11 )
        {
LABEL_7:
          if ( (a3 & 1) != 0 )
            goto LABEL_8;
          goto LABEL_16;
        }
      }
    }
  }
  v15 = (unsigned __int64 *)(a1 + (a2 << 6));
  if ( (a3 & 1) != 0 )
  {
    v35.m128i_i64[1] = _mm_loadu_si128((const __m128i *)&a7).m128i_i64[1];
    v36 = _mm_loadu_si128((const __m128i *)&a8);
    v37 = _mm_loadu_si128((const __m128i *)&a9);
    v38 = _mm_loadu_si128((const __m128i *)&a10);
  }
  else
  {
    v13 = a2;
LABEL_16:
    if ( (a3 - 2) / 2 == v13 )
    {
      v31 = v13 + 1;
      v13 = 2 * (v13 + 1) - 1;
      v32 = a1 + (v31 << 7) - 64;
      v33 = *(_QWORD *)v32;
      *(__m128i *)(v15 + 1) = _mm_loadu_si128((const __m128i *)(v32 + 8));
      v34 = _mm_loadu_si128((const __m128i *)(v32 + 24));
      *v15 = v33;
      *(__m128i *)(v15 + 3) = v34;
      *(__m128i *)(v15 + 5) = _mm_loadu_si128((const __m128i *)(v32 + 40));
      v15[7] = *(_QWORD *)(v32 + 56);
      v15 = (unsigned __int64 *)(a1 + (v13 << 6));
    }
LABEL_8:
    v35.m128i_i64[1] = _mm_loadu_si128((const __m128i *)&a7).m128i_i64[1];
    v37 = _mm_loadu_si128((const __m128i *)&a9);
    v36 = _mm_loadu_si128((const __m128i *)&a8);
    v21 = (v13 - 1) / 2;
    v38 = _mm_loadu_si128((const __m128i *)&a10);
    if ( v13 > a2 )
    {
      v22 = (unsigned __int64 *)(a1 + (v21 << 6));
      for ( j = *v22; *v22 < v10; j = *v22 )
      {
        v24 = a1 + (v13 << 6);
        *(__m128i *)(v24 + 8) = _mm_loadu_si128((const __m128i *)(v22 + 1));
        v25 = _mm_loadu_si128((const __m128i *)(v22 + 3));
        v15 = (unsigned __int64 *)(a1 + (v21 << 6));
        *(_QWORD *)v24 = j;
        *(__m128i *)(v24 + 24) = v25;
        *(__m128i *)(v24 + 40) = _mm_loadu_si128((const __m128i *)(v22 + 5));
        *(_QWORD *)(v24 + 56) = v22[7];
        v26 = (v21 - 1) / 2;
        if ( a2 >= v21 )
          break;
        v13 = v21;
        v21 = (v21 - 1) / 2;
        v22 = (unsigned __int64 *)(a1 + (v26 << 6));
      }
    }
  }
  v27 = _mm_loadu_si128((const __m128i *)&v35.m128i_u64[1]);
  v28 = _mm_loadu_si128((const __m128i *)&v36.m128i_u64[1]);
  *v15 = v10;
  v29 = _mm_loadu_si128((const __m128i *)&v37.m128i_u64[1]);
  result = v38.m128i_i64[1];
  *(__m128i *)(v15 + 1) = v27;
  *(__m128i *)(v15 + 3) = v28;
  *(__m128i *)(v15 + 5) = v29;
  v15[7] = result;
  return result;
}
