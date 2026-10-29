__int64 __fastcall CoinModelHash::hashValue(CoinModelHash *this, const __m128i *a2)
{
  int v3; // edx
  int v4; // ecx
  __m128i si128; // xmm14
  __m128i v6; // xmm15
  __m128i v7; // xmm9
  __m128i v8; // xmm8
  __m128i v9; // xmm7
  __m128i v10; // xmm13
  __m128i v11; // xmm12
  __m128i v12; // xmm11
  __m128i v13; // xmm10
  unsigned int v14; // r8d
  int v15; // eax
  __m128i v16; // xmm2
  unsigned int v17; // esi
  __m128i v18; // xmm0
  __m128i v19; // xmm5
  __m128i v20; // xmm0
  __m128i v21; // xmm3
  __m128i v22; // xmm2
  __m128i v23; // xmm6
  __m128i v24; // xmm0
  __m128i v25; // xmm3
  __m128i v26; // xmm5
  __m128i v27; // xmm6
  __m128i v28; // xmm5
  __m128i v29; // xmm3
  __m128i v30; // xmm0
  __m128i v31; // xmm6
  __m128i v32; // xmm3
  __m128i v33; // xmm3
  __m128i v34; // xmm5
  __m128i v35; // xmm6
  __m128i v36; // xmm5
  __m128i v37; // xmm3
  __m128i v38; // xmm0
  __m128i v39; // xmm6
  __m128i v40; // xmm3
  __m128i v41; // xmm3
  __m128i v42; // xmm5
  __m128i v43; // xmm6
  __m128i v44; // xmm5
  __m128i v45; // xmm3
  __m128i v46; // xmm0
  __m128i v47; // xmm6
  __m128i v48; // xmm3
  __m128i v49; // xmm3
  __m128i v50; // xmm4
  __m128i v51; // xmm5
  __m128i v52; // xmm4
  __m128i v53; // xmm3
  __m128i v54; // xmm2
  __m128i v55; // xmm6
  __m128i v56; // xmm0
  signed int v57; // esi
  int v58; // r8d
  int v59; // esi
  bool v61; // cc
  __m128i v62; // [rsp+0h] [rbp-D8h]
  __m128i v63; // [rsp+10h] [rbp-C8h]
  __m128i v64; // [rsp+20h] [rbp-B8h]
  __m128i v65; // [rsp+30h] [rbp-A8h]
  __m128i v66; // [rsp+40h] [rbp-98h]
  __m128i v67; // [rsp+50h] [rbp-88h]
  __m128i v68; // [rsp+60h] [rbp-78h]
  __m128i v69; // [rsp+70h] [rbp-68h]
  __m128i v70; // [rsp+80h] [rbp-58h]
  __m128i v71; // [rsp+90h] [rbp-48h]
  __m128i v72; // [rsp+A0h] [rbp-38h]
  __m128i v73; // [rsp+B0h] [rbp-28h]

  v3 = strlen(a2->m128i_i8);
  if ( v3 )
  {
    v4 = 0;
    v62 = _mm_srli_epi64(_mm_load_si128((const __m128i *)&xmmword_2973C0), 0x20u);
    v63 = _mm_srli_epi64(_mm_load_si128((const __m128i *)&xmmword_2973D0), 0x20u);
    v64 = _mm_srli_epi64(_mm_load_si128((const __m128i *)&xmmword_2973E0), 0x20u);
    v65 = _mm_srli_epi64(_mm_load_si128((const __m128i *)&xmmword_2973F0), 0x20u);
    v66 = _mm_srli_epi64(_mm_load_si128((const __m128i *)&xmmword_297400), 0x20u);
    v67 = _mm_srli_epi64(_mm_load_si128((const __m128i *)&xmmword_297410), 0x20u);
    v68 = _mm_srli_epi64(_mm_load_si128((const __m128i *)&xmmword_297420), 0x20u);
    v69 = _mm_srli_epi64(_mm_load_si128((const __m128i *)&xmmword_297430), 0x20u);
    v70 = _mm_srli_epi64(_mm_load_si128((const __m128i *)&xmmword_297440), 0x20u);
    v71 = _mm_srli_epi64(_mm_load_si128((const __m128i *)&xmmword_297450), 0x20u);
    v72 = _mm_srli_epi64(_mm_load_si128((const __m128i *)&xmmword_297460), 0x20u);
    si128 = _mm_load_si128((const __m128i *)&xmmword_297340);
    v73 = _mm_srli_epi64(_mm_load_si128((const __m128i *)&xmmword_297470), 0x20u);
    v6 = _mm_srli_epi64(si128, 0x20u);
    v7 = _mm_srli_epi64(_mm_load_si128((const __m128i *)&xmmword_297350), 0x20u);
    v8 = _mm_srli_epi64(_mm_load_si128((const __m128i *)&xmmword_297360), 0x20u);
    v9 = _mm_srli_epi64(_mm_load_si128((const __m128i *)&xmmword_297370), 0x20u);
    v10 = _mm_srli_epi64(_mm_load_si128((const __m128i *)&xmmword_297380), 0x20u);
    v11 = _mm_srli_epi64(_mm_load_si128((const __m128i *)&xmmword_297390), 0x20u);
    v12 = _mm_srli_epi64(_mm_load_si128((const __m128i *)&xmmword_2973A0), 0x20u);
    v13 = _mm_srli_epi64(_mm_load_si128((const __m128i *)&xmmword_2973B0), 0x20u);
    while ( v3 <= 80 )
    {
      if ( v3 <= 0 )
      {
LABEL_27:
        v3 = abs32(v4);
        return (unsigned int)(v3 % (4 * *((_DWORD *)this + 5)));
      }
      v61 = v3 <= 15;
      v14 = v3;
      v15 = v3;
      v3 = 0;
      if ( !v61 )
        goto LABEL_5;
      v57 = 0;
LABEL_11:
      v4 += *((_DWORD *)&xmmword_297340 + v57) * a2->m128i_u8[v57];
      if ( v57 + 1 < v15 )
      {
        v4 += *((_DWORD *)&xmmword_297340 + v57 + 1) * a2->m128i_u8[v57 + 1];
        if ( v15 > v57 + 2 )
        {
          v4 += *((_DWORD *)&xmmword_297340 + v57 + 2) * a2->m128i_u8[v57 + 2];
          if ( v15 > v57 + 3 )
          {
            v4 += *((_DWORD *)&xmmword_297340 + v57 + 3) * a2->m128i_u8[v57 + 3];
            if ( v15 > v57 + 4 )
            {
              v4 += *((_DWORD *)&xmmword_297340 + v57 + 4) * a2->m128i_u8[v57 + 4];
              if ( v15 > v57 + 5 )
              {
                v4 += *((_DWORD *)&xmmword_297340 + v57 + 5) * a2->m128i_u8[v57 + 5];
                if ( v15 > v57 + 6 )
                {
                  v4 += *((_DWORD *)&xmmword_297340 + v57 + 6) * a2->m128i_u8[v57 + 6];
                  if ( v15 > v57 + 7 )
                  {
                    v4 += *((_DWORD *)&xmmword_297340 + v57 + 7) * a2->m128i_u8[v57 + 7];
                    if ( v15 > v57 + 8 )
                    {
                      v4 += *((_DWORD *)&xmmword_297340 + v57 + 8) * a2->m128i_u8[v57 + 8];
                      if ( v15 > v57 + 9 )
                      {
                        v4 += *((_DWORD *)&xmmword_297340 + v57 + 9) * a2->m128i_u8[v57 + 9];
                        if ( v15 > v57 + 10 )
                        {
                          v4 += *((_DWORD *)&xmmword_297340 + v57 + 10) * a2->m128i_u8[v57 + 10];
                          if ( v15 > v57 + 11 )
                          {
                            v4 += *((_DWORD *)&xmmword_297340 + v57 + 11) * a2->m128i_u8[v57 + 11];
                            if ( v15 > v57 + 12 )
                            {
                              v58 = v57 + 13;
                              v4 += *((_DWORD *)&xmmword_297340 + v57 + 12) * a2->m128i_u8[v57 + 12];
                              if ( v15 > v57 + 13 )
                              {
                                v59 = v57 + 14;
                                v4 += *((_DWORD *)&xmmword_297340 + v58) * a2->m128i_u8[v58];
                                if ( v15 > v59 )
                                  v4 += *((_DWORD *)&xmmword_297340 + v59) * a2->m128i_u8[v59];
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
LABEL_26:
      if ( !v3 )
        goto LABEL_27;
    }
    v3 -= 81;
    v14 = 81;
    v15 = 81;
LABEL_5:
    v16 = _mm_loadu_si128(a2);
    v17 = v14 >> 4;
    v18 = _mm_unpacklo_epi8(v16, (__m128i)0LL);
    v19 = _mm_unpackhi_epi16(v18, (__m128i)0LL);
    v20 = _mm_unpacklo_epi16(v18, (__m128i)0LL);
    v21 = _mm_unpackhi_epi8(v16, (__m128i)0LL);
    v22 = _mm_unpackhi_epi16(v21, (__m128i)0LL);
    v23 = _mm_unpacklo_epi16(v21, (__m128i)0LL);
    v24 = _mm_add_epi32(
            _mm_unpacklo_epi32(
              _mm_shuffle_epi32(_mm_mul_epu32(v22, (__m128i)xmmword_297370), 8),
              _mm_shuffle_epi32(_mm_mul_epu32(_mm_srli_epi64(v22, 0x20u), v9), 8)),
            _mm_add_epi32(
              _mm_add_epi32(
                _mm_unpacklo_epi32(
                  _mm_shuffle_epi32(_mm_mul_epu32(v19, (__m128i)xmmword_297350), 8),
                  _mm_shuffle_epi32(_mm_mul_epu32(_mm_srli_epi64(v19, 0x20u), v7), 8)),
                _mm_unpacklo_epi32(
                  _mm_shuffle_epi32(_mm_mul_epu32(v20, si128), 8),
                  _mm_shuffle_epi32(_mm_mul_epu32(_mm_srli_epi64(v20, 0x20u), v6), 8))),
              _mm_unpacklo_epi32(
                _mm_shuffle_epi32(_mm_mul_epu32(v23, (__m128i)xmmword_297360), 8),
                _mm_shuffle_epi32(_mm_mul_epu32(_mm_srli_epi64(v23, 0x20u), v8), 8))));
    if ( v14 >> 4 > 1 )
    {
      v25 = _mm_loadu_si128(a2 + 1);
      v26 = _mm_unpacklo_epi8(v25, (__m128i)0LL);
      v27 = _mm_unpacklo_epi16(v26, (__m128i)0LL);
      v28 = _mm_unpackhi_epi16(v26, (__m128i)0LL);
      v29 = _mm_unpackhi_epi8(v25, (__m128i)0LL);
      v30 = _mm_add_epi32(
              _mm_add_epi32(
                v24,
                _mm_unpacklo_epi32(
                  _mm_shuffle_epi32(_mm_mul_epu32(v27, (__m128i)xmmword_297380), 8),
                  _mm_shuffle_epi32(_mm_mul_epu32(_mm_srli_epi64(v27, 0x20u), v10), 8))),
              _mm_unpacklo_epi32(
                _mm_shuffle_epi32(_mm_mul_epu32(v28, (__m128i)xmmword_297390), 8),
                _mm_shuffle_epi32(_mm_mul_epu32(_mm_srli_epi64(v28, 0x20u), v11), 8)));
      v31 = _mm_unpacklo_epi16(v29, (__m128i)0LL);
      v32 = _mm_unpackhi_epi16(v29, (__m128i)0LL);
      v24 = _mm_add_epi32(
              _mm_add_epi32(
                v30,
                _mm_unpacklo_epi32(
                  _mm_shuffle_epi32(_mm_mul_epu32(v31, (__m128i)xmmword_2973A0), 8),
                  _mm_shuffle_epi32(_mm_mul_epu32(_mm_srli_epi64(v31, 0x20u), v12), 8))),
              _mm_unpacklo_epi32(
                _mm_shuffle_epi32(_mm_mul_epu32(v32, (__m128i)xmmword_2973B0), 8),
                _mm_shuffle_epi32(_mm_mul_epu32(_mm_srli_epi64(v32, 0x20u), v13), 8)));
      if ( v17 != 2 )
      {
        v33 = _mm_loadu_si128(a2 + 2);
        v34 = _mm_unpacklo_epi8(v33, (__m128i)0LL);
        v35 = _mm_unpacklo_epi16(v34, (__m128i)0LL);
        v36 = _mm_unpackhi_epi16(v34, (__m128i)0LL);
        v37 = _mm_unpackhi_epi8(v33, (__m128i)0LL);
        v38 = _mm_add_epi32(
                _mm_add_epi32(
                  v24,
                  _mm_unpacklo_epi32(
                    _mm_shuffle_epi32(_mm_mul_epu32(v35, (__m128i)xmmword_2973C0), 8),
                    _mm_shuffle_epi32(_mm_mul_epu32(_mm_srli_epi64(v35, 0x20u), v62), 8))),
                _mm_unpacklo_epi32(
                  _mm_shuffle_epi32(_mm_mul_epu32(v36, (__m128i)xmmword_2973D0), 8),
                  _mm_shuffle_epi32(_mm_mul_epu32(_mm_srli_epi64(v36, 0x20u), v63), 8)));
        v39 = _mm_unpacklo_epi16(v37, (__m128i)0LL);
        v40 = _mm_unpackhi_epi16(v37, (__m128i)0LL);
        v24 = _mm_add_epi32(
                _mm_add_epi32(
                  v38,
                  _mm_unpacklo_epi32(
                    _mm_shuffle_epi32(_mm_mul_epu32(v39, (__m128i)xmmword_2973E0), 8),
                    _mm_shuffle_epi32(_mm_mul_epu32(_mm_srli_epi64(v39, 0x20u), v64), 8))),
                _mm_unpacklo_epi32(
                  _mm_shuffle_epi32(_mm_mul_epu32(v40, (__m128i)xmmword_2973F0), 8),
                  _mm_shuffle_epi32(_mm_mul_epu32(_mm_srli_epi64(v40, 0x20u), v65), 8)));
        if ( v17 != 3 )
        {
          v41 = _mm_loadu_si128(a2 + 3);
          v42 = _mm_unpacklo_epi8(v41, (__m128i)0LL);
          v43 = _mm_unpacklo_epi16(v42, (__m128i)0LL);
          v44 = _mm_unpackhi_epi16(v42, (__m128i)0LL);
          v45 = _mm_unpackhi_epi8(v41, (__m128i)0LL);
          v46 = _mm_add_epi32(
                  _mm_add_epi32(
                    v24,
                    _mm_unpacklo_epi32(
                      _mm_shuffle_epi32(_mm_mul_epu32(v43, (__m128i)xmmword_297400), 8),
                      _mm_shuffle_epi32(_mm_mul_epu32(_mm_srli_epi64(v43, 0x20u), v66), 8))),
                  _mm_unpacklo_epi32(
                    _mm_shuffle_epi32(_mm_mul_epu32(v44, (__m128i)xmmword_297410), 8),
                    _mm_shuffle_epi32(_mm_mul_epu32(_mm_srli_epi64(v44, 0x20u), v67), 8)));
          v47 = _mm_unpacklo_epi16(v45, (__m128i)0LL);
          v48 = _mm_unpackhi_epi16(v45, (__m128i)0LL);
          v24 = _mm_add_epi32(
                  _mm_add_epi32(
                    v46,
                    _mm_unpacklo_epi32(
                      _mm_shuffle_epi32(_mm_mul_epu32(v47, (__m128i)xmmword_297420), 8),
                      _mm_shuffle_epi32(_mm_mul_epu32(_mm_srli_epi64(v47, 0x20u), v68), 8))),
                  _mm_unpacklo_epi32(
                    _mm_shuffle_epi32(_mm_mul_epu32(v48, (__m128i)xmmword_297430), 8),
                    _mm_shuffle_epi32(_mm_mul_epu32(_mm_srli_epi64(v48, 0x20u), v69), 8)));
          if ( v17 != 4 )
          {
            v49 = _mm_loadu_si128(a2 + 4);
            v50 = _mm_unpacklo_epi8(v49, (__m128i)0LL);
            v51 = _mm_unpacklo_epi16(v50, (__m128i)0LL);
            v52 = _mm_unpackhi_epi16(v50, (__m128i)0LL);
            v53 = _mm_unpackhi_epi8(v49, (__m128i)0LL);
            v54 = _mm_unpackhi_epi16(v53, (__m128i)0LL);
            v55 = _mm_unpacklo_epi16(v53, (__m128i)0LL);
            v24 = _mm_add_epi32(
                    _mm_add_epi32(
                      _mm_add_epi32(
                        _mm_add_epi32(
                          v24,
                          _mm_unpacklo_epi32(
                            _mm_shuffle_epi32(_mm_mul_epu32(v51, (__m128i)xmmword_297440), 8),
                            _mm_shuffle_epi32(_mm_mul_epu32(_mm_srli_epi64(v51, 0x20u), v70), 8))),
                        _mm_unpacklo_epi32(
                          _mm_shuffle_epi32(_mm_mul_epu32(v52, (__m128i)xmmword_297450), 8),
                          _mm_shuffle_epi32(_mm_mul_epu32(_mm_srli_epi64(v52, 0x20u), v71), 8))),
                      _mm_unpacklo_epi32(
                        _mm_shuffle_epi32(_mm_mul_epu32(v55, (__m128i)xmmword_297460), 8),
                        _mm_shuffle_epi32(_mm_mul_epu32(_mm_srli_epi64(v55, 0x20u), v72), 8))),
                    _mm_unpacklo_epi32(
                      _mm_shuffle_epi32(_mm_mul_epu32(v54, (__m128i)xmmword_297470), 8),
                      _mm_shuffle_epi32(_mm_mul_epu32(_mm_srli_epi64(v54, 0x20u), v73), 8)));
          }
        }
      }
    }
    v56 = _mm_add_epi32(v24, _mm_srli_si128(v24, 8));
    v4 += _mm_cvtsi128_si32(_mm_add_epi32(v56, _mm_srli_si128(v56, 4)));
    v57 = v14 & 0xFFFFFFF0;
    if ( (v14 & 0xFFFFFFF0) == v14 )
      goto LABEL_26;
    goto LABEL_11;
  }
  return (unsigned int)(v3 % (4 * *((_DWORD *)this + 5)));
}

