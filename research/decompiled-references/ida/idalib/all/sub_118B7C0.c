__int64 __fastcall sub_118B7C0(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7)
{
  unsigned __int64 v8; // rax
  __int64 v9; // rdx
  __m128i si128; // xmm0
  __int64 v11; // rbp
  __int64 *v12; // rbx
  __m128 v13; // xmm1
  __int64 v14; // r15
  __m128 *v15; // r13
  __int64 v16; // rsi
  __m128i v17; // xmm1
  __int64 v18; // r13
  __int64 v19; // rax
  __int64 *v20; // rbx
  __int64 v21; // r15
  __m128 *v22; // r14
  __int64 v23; // rsi
  __m128i v25[2]; // [rsp+0h] [rbp-98h] BYREF
  unsigned __int64 v26; // [rsp+20h] [rbp-78h]
  __m128 v27; // [rsp+30h] [rbp-68h] BYREF
  __m128i v28; // [rsp+40h] [rbp-58h] BYREF
  unsigned __int64 v29; // [rsp+50h] [rbp-48h]

  v28.m128i_i64[0] = __PAIR64__(a7, a6);
  v27 = (__m128)_mm_unpacklo_epi64(
                  _mm_unpacklo_epi32(_mm_cvtsi32_si128(a2), _mm_cvtsi32_si128(a3)),
                  _mm_unpacklo_epi32(_mm_cvtsi32_si128(a4), _mm_cvtsi32_si128(a5)));
  v25[0] = (__m128i)v27;
  v8 = sub_21B6DA0(a1, &v27, 6);
  v9 = *(_QWORD *)(a1 + 8);
  si128 = _mm_load_si128(v25);
  v26 = __PAIR64__(a7, a6);
  v11 = v9 + 8 * HIDWORD(v8);
  v12 = (__int64 *)(v9 + 8LL * (unsigned int)v8);
  v25[1] = si128;
  v25[0].m128i_i64[0] = v11;
  v28 = si128;
  v29 = __PAIR64__(a7, a6);
  v13 = _mm_loadh_ps((const double *)v25[0].m128i_i64);
  v27 = v13;
  if ( v12 != (__int64 *)v11 )
  {
    do
    {
      v14 = *v12;
      v15 = &v27;
      if ( *v12 )
      {
        do
        {
          v16 = v15[1].m128_u32[0];
          if ( !(_DWORD)v16 )
            break;
          if ( (unsigned __int8)sub_21B9810(v14, v16) )
          {
            v25[0].m128i_i64[0] = v11;
            v27 = _mm_loadh_ps((const double *)v25[0].m128i_i64);
            if ( (__int64 *)v11 != v12 )
              goto LABEL_9;
            return 0;
          }
          v15 = (__m128 *)((char *)v15 + 4);
        }
        while ( &v28.m128i_u64[1] != (unsigned __int64 *)v15 );
      }
      v27.m128_u64[0] = (unsigned __int64)++v12;
    }
    while ( (__int64 *)v11 != v12 );
    v25[0].m128i_i64[0] = v11;
    v17 = _mm_loadl_epi64(v25);
    v13 = (__m128)_mm_unpacklo_epi64(v17, v17);
  }
  v27 = v13;
  if ( (__int64 *)v11 == v12 )
    return 0;
LABEL_9:
  v25[0].m128i_i64[0] = (__int64)&v28.m128i_i64[1];
LABEL_10:
  v18 = *v12;
  v19 = *(_QWORD *)(*v12 + 16);
  if ( !v19 )
    v19 = *v12;
  v20 = v12 + 1;
  *(_BYTE *)(v19 + 44) |= 1u;
  for ( v27.m128_u64[0] = (unsigned __int64)v20; (__int64 *)v11 != v20; v27.m128_u64[0] = (unsigned __int64)v20 )
  {
    v21 = *v20;
    v22 = &v27;
    if ( *v20 )
    {
      do
      {
        v23 = v22[1].m128_u32[0];
        if ( !(_DWORD)v23 )
          break;
        if ( (unsigned __int8)sub_21B9810(v21, v23) )
        {
          v12 = (__int64 *)v27.m128_u64[0];
          if ( v11 != v27.m128_u64[0] )
            goto LABEL_10;
          return v18;
        }
        v22 = (__m128 *)((char *)v22 + 4);
      }
      while ( v22 != (__m128 *)v25[0].m128i_i64[0] );
    }
    ++v20;
  }
  return v18;
}
