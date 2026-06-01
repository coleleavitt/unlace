__int8 *__fastcall sub_20205D0(__int8 **a1, const __m128i *a2, const __m128i *a3)
{
  const __m128i *v5; // rbx
  unsigned __int64 v6; // r13
  __int8 *result; // rax
  const __m128i *v8; // rcx
  unsigned __int64 v9; // r9
  __m128i si128; // xmm4
  __m128i *v11; // rdi
  __m128 v12; // xmm5
  __m128 v13; // xmm0
  __m128i v14; // xmm2
  __m128i v15; // xmm1
  __m128i v16; // xmm0
  __m128i v17; // xmm2
  __m128i v18; // xmm0
  __m128i v19; // xmm2
  __m128i v20; // xmm3
  __m128i v21; // xmm1
  __m128i v22; // xmm3
  __int64 *v23; // rcx
  __int8 *v24; // rax
  __int64 v25; // rdx

  v5 = a2;
  if ( a3 && !a2 )
    std::__throw_logic_error("basic_string::_M_construct null not valid");
  v6 = ((char *)a3 - (char *)a2) >> 3;
  if ( v6 > 0xF )
  {
    if ( (char *)a3 - (char *)a2 < 0 )
      std::__throw_length_error("basic_string::_M_create");
    result = (__int8 *)operator new(v6 + 1);
    a1[2] = (__int8 *)v6;
    *a1 = result;
  }
  else
  {
    result = *a1;
  }
  if ( a2 != a3 )
  {
    v8 = a2;
    v9 = ((unsigned __int64)((char *)&a3[-1].m128i_u64[1] - (char *)a2) >> 3) + 1;
    if ( (a2 >= (const __m128i *)&result[v9] || result >= &a2->m128i_i8[8 * v9])
      && (unsigned __int64)((char *)&a3[-1].m128i_u64[1] - (char *)a2) > 0x70 )
    {
      si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D80);
      v11 = (__m128i *)result;
      do
      {
        v12 = (__m128)_mm_loadu_si128(v8 + 1);
        v13 = (__m128)_mm_loadu_si128(v8);
        v8 += 8;
        ++v11;
        v14 = (__m128i)_mm_shuffle_ps(v13, v12, 136);
        v15 = (__m128i)_mm_shuffle_ps((__m128)_mm_loadu_si128(v8 - 6), (__m128)_mm_loadu_si128(v8 - 5), 136);
        v16 = _mm_unpacklo_epi16(v14, v15);
        v17 = _mm_unpackhi_epi16(v14, v15);
        v18 = _mm_unpacklo_epi16(_mm_unpacklo_epi16(v16, v17), _mm_unpackhi_epi16(v16, v17));
        v19 = (__m128i)_mm_shuffle_ps((__m128)_mm_loadu_si128(v8 - 2), (__m128)_mm_loadu_si128(v8 - 1), 136);
        v20 = (__m128i)_mm_shuffle_ps((__m128)_mm_loadu_si128(v8 - 4), (__m128)_mm_loadu_si128(v8 - 3), 136);
        v21 = _mm_unpacklo_epi16(v20, v19);
        v22 = _mm_unpackhi_epi16(v20, v19);
        v11[-1] = _mm_packus_epi16(
                    _mm_and_si128(v18, si128),
                    _mm_and_si128(_mm_unpacklo_epi16(_mm_unpacklo_epi16(v21, v22), _mm_unpackhi_epi16(v21, v22)), si128));
      }
      while ( v8 != &a2[8 * (v9 >> 4)] );
      v23 = &a2->m128i_i64[v9 & 0xFFFFFFFFFFFFFFF0LL];
      v24 = &result[v9 & 0xFFFFFFFFFFFFFFF0LL];
      if ( v9 != (v9 & 0xFFFFFFFFFFFFFFF0LL) )
      {
        *v24 = *v23;
        if ( a3 != (const __m128i *)(v23 + 1) )
        {
          v24[1] = v23[1];
          if ( a3 != (const __m128i *)(v23 + 2) )
          {
            v24[2] = v23[2];
            if ( a3 != (const __m128i *)(v23 + 3) )
            {
              v24[3] = v23[3];
              if ( a3 != (const __m128i *)(v23 + 4) )
              {
                v24[4] = v23[4];
                if ( a3 != (const __m128i *)(v23 + 5) )
                {
                  v24[5] = v23[5];
                  if ( a3 != (const __m128i *)(v23 + 6) )
                  {
                    v24[6] = v23[6];
                    if ( a3 != (const __m128i *)(v23 + 7) )
                    {
                      v24[7] = v23[7];
                      if ( a3 != (const __m128i *)(v23 + 8) )
                      {
                        v24[8] = v23[8];
                        if ( a3 != (const __m128i *)(v23 + 9) )
                        {
                          v24[9] = v23[9];
                          if ( a3 != (const __m128i *)(v23 + 10) )
                          {
                            v24[10] = v23[10];
                            if ( a3 != (const __m128i *)(v23 + 11) )
                            {
                              v24[11] = v23[11];
                              if ( a3 != (const __m128i *)(v23 + 12) )
                              {
                                v24[12] = v23[12];
                                if ( a3 != (const __m128i *)(v23 + 13) )
                                {
                                  v24[13] = v23[13];
                                  if ( a3 != (const __m128i *)(v23 + 14) )
                                    v24[14] = v23[14];
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
        v25 = v5->m128i_i64[0];
        v5 = (const __m128i *)((char *)v5 + 8);
        *result++ = v25;
      }
      while ( a3 != v5 );
    }
    result = *a1;
  }
  a1[1] = (__int8 *)v6;
  result[v6] = 0;
  return result;
}
