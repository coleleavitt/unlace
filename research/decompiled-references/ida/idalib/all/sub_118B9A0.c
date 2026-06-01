__int64 __fastcall sub_118B9A0(__int64 a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
  unsigned __int64 v5; // rax
  __int64 v6; // rdx
  __int64 *v7; // rbx
  __int64 *v8; // rbp
  __int64 v9; // r15
  __m128 *p_i; // r13
  __int64 v11; // rsi
  __int64 v12; // r13
  __int64 v14; // rax
  __int64 *v15; // rbx
  __int64 v16; // r15
  __m128 *v17; // r14
  __int64 v18; // rsi
  __m128 v19; // [rsp+0h] [rbp-78h] BYREF
  __int64 *v20; // [rsp+18h] [rbp-60h] BYREF
  __m128 i; // [rsp+20h] [rbp-58h] BYREF
  _OWORD v22[4]; // [rsp+30h] [rbp-48h] BYREF

  v19 = (__m128)_mm_unpacklo_epi64(
                  _mm_unpacklo_epi32(_mm_cvtsi32_si128(a2), _mm_cvtsi32_si128(a3)),
                  _mm_unpacklo_epi32(_mm_cvtsi32_si128(a4), _mm_cvtsi32_si128(a5)));
  i = v19;
  v5 = sub_21B6DA0(a1, &i, 4);
  v6 = *(_QWORD *)(a1 + 8);
  v7 = (__int64 *)(v6 + 8LL * (unsigned int)v5);
  v8 = (__int64 *)(v6 + 8 * HIDWORD(v5));
  v22[0] = _mm_load_si128((const __m128i *)&v19);
  v20 = v8;
  for ( i = _mm_loadh_ps((const double *)&v20); v8 != v7; i.m128_u64[0] = (unsigned __int64)v7 )
  {
    v9 = *v7;
    p_i = &i;
    if ( *v7 )
    {
      do
      {
        v11 = p_i[1].m128_u32[0];
        if ( !(_DWORD)v11 )
          break;
        if ( (unsigned __int8)sub_21B9810(v9, v11) )
        {
          v20 = v8;
          v22[0] = _mm_load_si128((const __m128i *)&v19);
          i = _mm_loadh_ps((const double *)&v20);
          if ( v8 == v7 )
            return 0;
          v19.m128_u64[0] = (unsigned __int64)v22;
LABEL_11:
          v12 = *v7;
          v14 = *(_QWORD *)(*v7 + 16);
          if ( !v14 )
            v14 = *v7;
          v15 = v7 + 1;
          *(_BYTE *)(v14 + 44) |= 1u;
          for ( i.m128_u64[0] = (unsigned __int64)v15; v8 != v15; i.m128_u64[0] = (unsigned __int64)v15 )
          {
            v16 = *v15;
            v17 = &i;
            if ( *v15 )
            {
              do
              {
                v18 = v17[1].m128_u32[0];
                if ( !(_DWORD)v18 )
                  break;
                if ( (unsigned __int8)sub_21B9810(v16, v18) )
                {
                  v7 = (__int64 *)i.m128_u64[0];
                  if ( v8 != (__int64 *)i.m128_u64[0] )
                    goto LABEL_11;
                  return v12;
                }
                v17 = (__m128 *)((char *)v17 + 4);
              }
              while ( (__m128 *)v19.m128_u64[0] != v17 );
            }
            ++v15;
          }
          return v12;
        }
        p_i = (__m128 *)((char *)p_i + 4);
      }
      while ( p_i != (__m128 *)v22 );
    }
    ++v7;
  }
  return 0;
}
