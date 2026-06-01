__m128i **__fastcall sub_1EAC540(__m128i **a1, __int64 *a2, _DWORD *a3)
{
  __int64 v5; // rax
  __int64 v6; // r15
  __int64 v7; // rdx
  __int64 v8; // r14
  __m128i *v9; // rax
  const __m128i *v10; // rbx
  __int64 v11; // rcx
  const __m128i *v12; // rbp
  __int64 v13; // rcx
  __int64 v14; // rsi
  const __m128i *v15; // rcx
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // rdi
  __m128i si128; // xmm4
  __m128i *v19; // r8
  __m128 v20; // xmm5
  __m128 v21; // xmm0
  __m128i v22; // xmm2
  __m128i v23; // xmm1
  __m128i v24; // xmm0
  __m128i v25; // xmm2
  __m128i v26; // xmm0
  __m128i v27; // xmm2
  __m128i v28; // xmm3
  __m128i v29; // xmm1
  __m128i v30; // xmm3
  __int64 *v31; // rcx
  __int8 *v32; // rax
  __int64 v34; // rdx
  __int64 v35; // [rsp+0h] [rbp-48h]
  __int64 v36; // [rsp+8h] [rbp-40h]

  v5 = (unsigned int)*a3;
  v6 = (unsigned int)(v5 + 1);
  *a3 = v6;
  v7 = *a2;
  v8 = *(_QWORD *)(*a2 + 8 * v5);
  v9 = (__m128i *)(a1 + 2);
  v10 = (const __m128i *)(*a2 + 8 * v6);
  *a1 = (__m128i *)(a1 + 2);
  v11 = 8 * (v6 + (unsigned int)v8);
  v12 = (const __m128i *)(v11 + v7);
  if ( v11 + v7 && !v10 )
    std::__throw_logic_error("basic_string::_M_construct null not valid");
  v13 = v11 - 8 * v6;
  v14 = v13 >> 3;
  if ( (unsigned __int64)(v13 >> 3) > 0xF )
  {
    if ( v13 < 0 )
      std::__throw_length_error("basic_string::_M_create");
    v36 = v7;
    v35 = v13 >> 3;
    v9 = (__m128i *)operator new(v14 + 1);
    v14 = v35;
    v7 = v36;
    *a1 = v9;
    a1[2] = (__m128i *)v35;
  }
  if ( v12 != v10 )
  {
    v15 = v10;
    v16 = (unsigned __int64)((char *)v12 - (char *)v10 - 8) >> 3;
    v17 = v16 + 1;
    if ( (v10 >= (const __m128i *)&v9->m128i_i8[v16 + 1] || (unsigned __int64)v9 >= v7 + 8 * (v6 + v16 + 1))
      && (unsigned __int64)((char *)v12 - (char *)v10 - 8) > 0x70 )
    {
      si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D80);
      v19 = v9;
      do
      {
        v20 = (__m128)_mm_loadu_si128(v15 + 1);
        v21 = (__m128)_mm_loadu_si128(v15);
        v15 += 8;
        ++v19;
        v22 = (__m128i)_mm_shuffle_ps(v21, v20, 136);
        v23 = (__m128i)_mm_shuffle_ps((__m128)_mm_loadu_si128(v15 - 6), (__m128)_mm_loadu_si128(v15 - 5), 136);
        v24 = _mm_unpacklo_epi16(v22, v23);
        v25 = _mm_unpackhi_epi16(v22, v23);
        v26 = _mm_unpacklo_epi16(_mm_unpacklo_epi16(v24, v25), _mm_unpackhi_epi16(v24, v25));
        v27 = (__m128i)_mm_shuffle_ps((__m128)_mm_loadu_si128(v15 - 2), (__m128)_mm_loadu_si128(v15 - 1), 136);
        v28 = (__m128i)_mm_shuffle_ps((__m128)_mm_loadu_si128(v15 - 4), (__m128)_mm_loadu_si128(v15 - 3), 136);
        v29 = _mm_unpacklo_epi16(v28, v27);
        v30 = _mm_unpackhi_epi16(v28, v27);
        v19[-1] = _mm_packus_epi16(
                    _mm_and_si128(v26, si128),
                    _mm_and_si128(_mm_unpacklo_epi16(_mm_unpacklo_epi16(v29, v30), _mm_unpackhi_epi16(v29, v30)), si128));
      }
      while ( v15 != &v10[8 * (v17 >> 4)] );
      v31 = &v10->m128i_i64[v17 & 0xFFFFFFFFFFFFFFF0LL];
      v32 = &v9->m128i_i8[v17 & 0xFFFFFFFFFFFFFFF0LL];
      if ( v17 != (v17 & 0xFFFFFFFFFFFFFFF0LL) )
      {
        *v32 = *v31;
        if ( v12 != (const __m128i *)(v31 + 1) )
        {
          v32[1] = v31[1];
          if ( v12 != (const __m128i *)(v31 + 2) )
          {
            v32[2] = v31[2];
            if ( v12 != (const __m128i *)(v31 + 3) )
            {
              v32[3] = v31[3];
              if ( v12 != (const __m128i *)(v31 + 4) )
              {
                v32[4] = v31[4];
                if ( v12 != (const __m128i *)(v31 + 5) )
                {
                  v32[5] = v31[5];
                  if ( v12 != (const __m128i *)(v31 + 6) )
                  {
                    v32[6] = v31[6];
                    if ( v12 != (const __m128i *)(v31 + 7) )
                    {
                      v32[7] = v31[7];
                      if ( v12 != (const __m128i *)(v31 + 8) )
                      {
                        v32[8] = v31[8];
                        if ( v12 != (const __m128i *)(v31 + 9) )
                        {
                          v32[9] = v31[9];
                          if ( v12 != (const __m128i *)(v31 + 10) )
                          {
                            v32[10] = v31[10];
                            if ( v12 != (const __m128i *)(v31 + 11) )
                            {
                              v32[11] = v31[11];
                              if ( v12 != (const __m128i *)(v31 + 12) )
                              {
                                v32[12] = v31[12];
                                if ( v12 != (const __m128i *)(v31 + 13) )
                                {
                                  v32[13] = v31[13];
                                  if ( v12 != (const __m128i *)(v31 + 14) )
                                    v32[14] = v31[14];
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    else
    {
      do
      {
        v34 = v10->m128i_i64[0];
        v10 = (const __m128i *)((char *)v10 + 8);
        v9 = (__m128i *)((char *)v9 + 1);
        v9[-1].m128i_i8[15] = v34;
      }
      while ( v12 != v10 );
    }
    v9 = *a1;
  }
  a1[1] = (__m128i *)v14;
  v9->m128i_i8[v14] = 0;
  *a3 += v8;
  return a1;
}
