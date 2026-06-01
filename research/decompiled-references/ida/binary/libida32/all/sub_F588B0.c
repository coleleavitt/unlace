__int64 __fastcall sub_F588B0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int128 a7,
        __int128 a8,
        __int128 a9,
        __int64 a10)
{
  __int64 v10; // rbp
  __int64 i; // r14
  __int64 v12; // rbx
  __m128i *v13; // r15
  __m128i *v14; // rax
  __m128i v15; // xmm3
  __m128i v16; // xmm4
  __m128i v17; // xmm1
  __int64 v18; // r14
  const __m128i *v19; // r13
  __m128i v20; // xmm7
  __m128i v21; // xmm2
  __int64 result; // rax
  __int64 v23; // rcx
  __int64 v24; // rax
  __m128 *v25; // [rsp+8h] [rbp-C0h] BYREF
  __m128 v26; // [rsp+10h] [rbp-B8h] BYREF
  __int64 v27; // [rsp+20h] [rbp-A8h]
  __int64 v28; // [rsp+28h] [rbp-A0h]
  __m128i si128; // [rsp+30h] [rbp-98h] BYREF
  __m128 v30; // [rsp+40h] [rbp-88h] BYREF
  __m128 v31; // [rsp+50h] [rbp-78h] BYREF
  __m128i v32; // [rsp+60h] [rbp-68h] BYREF
  __m128i v33; // [rsp+70h] [rbp-58h] BYREF
  __int64 v34; // [rsp+80h] [rbp-48h]

  v10 = (a3 - 1) / 2;
  v27 = a2;
  v28 = a3;
  v26.m128_u64[0] = a3 & 1;
  if ( a2 >= v10 )
  {
    v13 = (__m128i *)(a1 + 56 * a2);
    if ( v26.m128_u64[0] )
    {
      v31 = (__m128)_mm_loadu_si128((const __m128i *)&a7);
      v32 = _mm_loadu_si128((const __m128i *)&a8);
      v33 = _mm_loadu_si128((const __m128i *)&a9);
      v34 = a10;
      goto LABEL_13;
    }
    v12 = a2;
    goto LABEL_16;
  }
  for ( i = a2; ; i = v12 )
  {
    v12 = 2 * (i + 1);
    v13 = (__m128i *)(a1 + 112 * (i + 1));
    v25 = (__m128 *)&v13[-4].m128i_u64[1];
    v31 = _mm_loadh_ps((const double *)&v25);
    v25 = (__m128 *)v13;
    v30 = _mm_loadh_ps((const double *)&v25);
    if ( (unsigned __int8)sub_F58800(&v30, (__int64 **)&v31) )
    {
      --v12;
      v13 = (__m128i *)(a1 + 56 * v12);
    }
    v14 = (__m128i *)(a1 + 56 * i);
    *v14 = _mm_loadu_si128(v13);
    v14[1] = _mm_loadu_si128(v13 + 1);
    v14[2] = _mm_loadu_si128(v13 + 2);
    v14[3].m128i_i64[0] = v13[3].m128i_i64[0];
    if ( v12 >= v10 )
      break;
  }
  if ( !v26.m128_u64[0] )
  {
LABEL_16:
    if ( (v28 - 2) / 2 == v12 )
    {
      v23 = 14 * (v12 + 1);
      v12 = 2 * (v12 + 1) - 1;
      v24 = a1 + 8 * v23;
      *v13 = _mm_loadu_si128((const __m128i *)(v24 - 56));
      v13[1] = _mm_loadu_si128((const __m128i *)(v24 - 40));
      v13[2] = _mm_loadu_si128((const __m128i *)(v24 - 24));
      v13[3].m128i_i64[0] = *(_QWORD *)(v24 - 8);
      v13 = (__m128i *)(a1 + 56 * v12);
    }
  }
  v15 = _mm_loadu_si128((const __m128i *)&a7);
  v16 = _mm_loadu_si128((const __m128i *)&a8);
  v17 = _mm_loadu_si128((const __m128i *)&a9);
  v34 = a10;
  v31 = (__m128)v15;
  v32 = v16;
  v33 = v17;
  v18 = (v12 - 1) / 2;
  if ( v12 > v27 )
  {
    v25 = &v31;
    v26 = _mm_loadh_ps((const double *)&v25);
    while ( 1 )
    {
      v19 = (const __m128i *)(a1 + 56 * v18);
      si128 = _mm_load_si128((const __m128i *)&v26);
      v25 = (__m128 *)v19;
      v30 = _mm_loadh_ps((const double *)&v25);
      v13 = (__m128i *)(a1 + 56 * v12);
      if ( !(unsigned __int8)sub_F58800(&v30, (__int64 **)&si128) )
        break;
      v12 = v18;
      *v13 = _mm_loadu_si128(v19);
      v13[1] = _mm_loadu_si128(v19 + 1);
      v13[2] = _mm_loadu_si128(v19 + 2);
      v13[3].m128i_i64[0] = v19[3].m128i_i64[0];
      if ( v27 >= v18 )
      {
        v13 = (__m128i *)(a1 + 56 * v18);
        break;
      }
      v18 = (v18 - 1) / 2;
    }
  }
LABEL_13:
  v20 = _mm_load_si128(&v32);
  v21 = _mm_load_si128(&v33);
  result = v34;
  *v13 = _mm_load_si128((const __m128i *)&v31);
  v13[1] = v20;
  v13[2] = v21;
  v13[3].m128i_i64[0] = result;
  return result;
}

