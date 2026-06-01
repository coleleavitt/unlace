__int64 __fastcall sub_118FE10(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        __int32 a6)
{
  unsigned __int64 v7; // rax
  __int64 v8; // rdx
  __m128i si128; // xmm0
  __int64 *v10; // rbx
  __int64 v11; // rbp
  __m128 v12; // xmm1
  __int64 v13; // r15
  __m128 *v14; // r13
  __int64 v15; // rsi
  __m128i v16; // xmm1
  __int64 v17; // r13
  __int64 v18; // rax
  __int64 *v19; // rbx
  __int64 v20; // r15
  __m128 *v21; // r14
  __int64 v22; // rsi
  __m128i v24[2]; // [rsp+0h] [rbp-98h] BYREF
  __int32 v25; // [rsp+20h] [rbp-78h]
  __m128 v26; // [rsp+30h] [rbp-68h] BYREF
  __m128i v27; // [rsp+40h] [rbp-58h] BYREF
  __int32 v28; // [rsp+50h] [rbp-48h]

  v27.m128i_i32[0] = a6;
  v26 = (__m128)_mm_unpacklo_epi64(
                  _mm_unpacklo_epi32(_mm_cvtsi32_si128(a2), _mm_cvtsi32_si128(a3)),
                  _mm_unpacklo_epi32(_mm_cvtsi32_si128(a4), _mm_cvtsi32_si128(a5)));
  v24[0] = (__m128i)v26;
  v7 = sub_21B6DA0(a1, &v26, 5);
  v8 = *(_QWORD *)(a1 + 8);
  si128 = _mm_load_si128(v24);
  v25 = a6;
  v28 = a6;
  v10 = (__int64 *)(v8 + 8LL * (unsigned int)v7);
  v11 = v8 + 8 * HIDWORD(v7);
  v24[1] = si128;
  v24[0].m128i_i64[0] = v11;
  v27 = si128;
  v12 = _mm_loadh_ps((const double *)v24[0].m128i_i64);
  v26 = v12;
  if ( v10 != (__int64 *)v11 )
  {
    do
    {
      v13 = *v10;
      v14 = &v26;
      if ( *v10 )
      {
        do
        {
          v15 = v14[1].m128_u32[0];
          if ( !(_DWORD)v15 )
            break;
          if ( (unsigned __int8)sub_21B9810(v13, v15) )
          {
            v24[0].m128i_i64[0] = v11;
            v26 = _mm_loadh_ps((const double *)v24[0].m128i_i64);
            if ( (__int64 *)v11 != v10 )
              goto LABEL_9;
            return 0;
          }
          v14 = (__m128 *)((char *)v14 + 4);
        }
        while ( (__m128 *)((char *)v27.m128i_i64 + 4) != v14 );
      }
      v26.m128_u64[0] = (unsigned __int64)++v10;
    }
    while ( (__int64 *)v11 != v10 );
    v24[0].m128i_i64[0] = v11;
    v16 = _mm_loadl_epi64(v24);
    v12 = (__m128)_mm_unpacklo_epi64(v16, v16);
  }
  v26 = v12;
  if ( (__int64 *)v11 == v10 )
    return 0;
LABEL_9:
  v24[0].m128i_i64[0] = (__int64)v27.m128i_i64 + 4;
LABEL_10:
  v17 = *v10;
  v18 = *(_QWORD *)(*v10 + 16);
  if ( !v18 )
    v18 = *v10;
  v19 = v10 + 1;
  *(_BYTE *)(v18 + 44) |= 1u;
  for ( v26.m128_u64[0] = (unsigned __int64)v19; (__int64 *)v11 != v19; v26.m128_u64[0] = (unsigned __int64)v19 )
  {
    v20 = *v19;
    v21 = &v26;
    if ( *v19 )
    {
      do
      {
        v22 = v21[1].m128_u32[0];
        if ( !(_DWORD)v22 )
          break;
        if ( (unsigned __int8)sub_21B9810(v20, v22) )
        {
          v10 = (__int64 *)v26.m128_u64[0];
          if ( v11 != v26.m128_u64[0] )
            goto LABEL_10;
          return v17;
        }
        v21 = (__m128 *)((char *)v21 + 4);
      }
      while ( v21 != (__m128 *)v24[0].m128i_i64[0] );
    }
    ++v19;
  }
  return v17;
}
