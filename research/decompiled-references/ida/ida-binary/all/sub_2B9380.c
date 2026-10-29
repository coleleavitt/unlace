__int64 __fastcall sub_2B9380(
        __int64 a1,
        __int64 a2,
        const __m128i *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        double a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        __m128 a11,
        __m128 a12,
        __m128 a13,
        __m128 a14)
{
  int v16; // r12d
  unsigned __int64 v17; // rbx
  __int64 v18; // r14
  __int64 v19; // rax
  double v20; // xmm1_8
  double v21; // xmm4_8
  double v22; // rbp
  double v23; // rbx
  __m128d v24; // xmm0
  __m128i v25; // xmm1
  int v27; // r11d
  int v28; // r9d
  unsigned int v29; // ecx
  int v30; // eax
  int v31; // r8d
  __int64 v32; // rcx
  __m128d v33; // xmm0
  __m128d v34; // xmm1
  int v35; // edx
  int v36; // eax
  int v37; // edi
  int v38; // esi
  int v39; // ecx
  int v40; // eax
  int v41; // eax
  __m128i v42; // xmm0
  __int16 v43; // [rsp+0h] [rbp-128h]
  unsigned __int64 v44; // [rsp+0h] [rbp-128h]
  __int64 v45; // [rsp+10h] [rbp-118h]
  double v46; // [rsp+10h] [rbp-118h]
  __int64 v47; // [rsp+20h] [rbp-108h]
  double v48; // [rsp+20h] [rbp-108h]
  double v49; // [rsp+28h] [rbp-100h]
  _BYTE v50[16]; // [rsp+30h] [rbp-F8h] BYREF
  __m128i v51[4]; // [rsp+40h] [rbp-E8h] BYREF
  _BYTE v52[16]; // [rsp+80h] [rbp-A8h] BYREF
  _BYTE v53[56]; // [rsp+90h] [rbp-98h] BYREF
  double v54; // [rsp+C8h] [rbp-60h]
  double v55; // [rsp+D8h] [rbp-50h]
  unsigned __int64 v56; // [rsp+E8h] [rbp-40h]

  v16 = a5;
  v17 = (int)a4;
  v43 = a6;
  v56 = __readfsqword(0x28u);
  *(_OWORD *)a2 = 0;
  *(_OWORD *)(a2 + 16) = 0;
  *(_OWORD *)(a2 + 32) = 0;
  *(_OWORD *)(a2 + 48) = 0;
  *(_OWORD *)(a2 + 64) = 0;
  v18 = *(_QWORD *)(a1 + 440);
  if ( (unsigned __int64)(int)a4 < *(_QWORD *)(v18 + 48)
    || (sub_169700(
          (int)"Coherency check failed: n < pages_metrics.size()\n",
          a2,
          (__int64)a3,
          a4,
          a5,
          a6,
          (__m128)0LL,
          a8,
          a9,
          a10,
          a11,
          a12,
          a13,
          a14,
          a6),
        v17 < *(_QWORD *)(v18 + 48)) )
  {
    v19 = *(_QWORD *)(v18 + 40);
    memset(v51, 0, sizeof(v51));
    v47 = v19;
    v45 = *(_QWORD *)(a1 + 16);
    QT::QFont::QFont((QT::QFont *)v52);
    QT::QFont::QFont((QT::QFont *)v50);
    QT::QFontMetricsF::QFontMetricsF((QT::QFontMetricsF *)v53, (const QT::QFont *)v50);
    QT::QFont::~QFont((QT::QFont *)v50);
    sub_1C8200(v51, v45, (__m128d)0x3FF0000000000000uLL);
    v20 = v55;
    if ( (v43 & 0x100) != 0 )
    {
      v21 = v54;
      *(__m128i *)a2 = _mm_loadu_si128(a3);
      v46 = v21 * 0.5;
      *(double *)&v44 = (double)(a3->m128i_i32[0] + a3->m128i_i32[2]) * 0.5;
      v49 = (double)(a3->m128i_i32[1] + a3->m128i_i32[3]) * 0.5;
      v22 = round(v49 - v20 * 0.5);
      v23 = round(v49 + v20 * 0.5);
      v48 = round(*(double *)&v44 - v46);
      v24 = (__m128d)v44;
      v24.m128d_f64[0] = round(*(double *)&v44 + v46);
      v25 = _mm_unpacklo_epi64(
              _mm_cvttpd_epi32(_mm_unpacklo_pd((__m128d)*(unsigned __int64 *)&v48, (__m128d)*(unsigned __int64 *)&v22)),
              _mm_cvttpd_epi32(_mm_unpacklo_pd(v24, (__m128d)*(unsigned __int64 *)&v23)));
LABEL_4:
      *(__m128i *)(a2 + 64) = v25;
      QT::QFontMetricsF::~QFontMetricsF((QT::QFontMetricsF *)v53);
      QT::QFont::~QFont((QT::QFont *)v52);
      return 1;
    }
    v27 = 2 * v16;
    *(__m128i *)a2 = _mm_loadu_si128(a3);
    *(__m128i *)(a2 + 16) = _mm_loadu_si128(a3);
    v28 = *(_DWORD *)(a2 + 20);
    v29 = v28 + v16;
    if ( (v43 & 0x10) != 0 )
    {
      *(_DWORD *)(a2 + 28) = v28;
      *(__m128i *)(a2 + 32) = _mm_loadu_si128((const __m128i *)(a2 + 16));
    }
    else
    {
      v40 = *(_DWORD *)(a1 + 432);
      if ( v40 > 0 )
      {
        v41 = v27 + v40;
        v31 = v28 + v41;
        *(_DWORD *)(a2 + 28) = v28 + v41;
        v28 = v28 + v41 - v16;
        *(__m128i *)(a2 + 32) = _mm_loadu_si128((const __m128i *)(a2 + 16));
        *(_DWORD *)(a2 + 36) = v29;
        *(_DWORD *)(a2 + 32) += v16;
        *(_DWORD *)(a2 + 40) -= v16;
        *(_DWORD *)(a2 + 44) = v28;
        if ( v41 <= 0 )
        {
          v30 = v31;
          v28 = v31;
          v31 += v16;
        }
        else
        {
          v30 = v28;
        }
        goto LABEL_10;
      }
      *(_DWORD *)(a2 + 28) = v28;
      v42 = _mm_loadu_si128((const __m128i *)(a2 + 16));
      *(__m128i *)(a2 + 32) = v42;
      *(__m128i *)(a2 + 32) = _mm_unpacklo_epi64(
                                _mm_unpacklo_epi32(
                                  _mm_cvtsi32_si128(v16 + _mm_cvtsi128_si32(v42)),
                                  _mm_cvtsi32_si128(v29)),
                                _mm_unpacklo_epi32(
                                  _mm_cvtsi32_si128(*(_DWORD *)(a2 + 40) - v16),
                                  _mm_cvtsi32_si128(v28 - v16)));
    }
    v30 = v28;
    v31 = v28 + v16;
LABEL_10:
    *(__m128i *)(a2 + 48) = _mm_loadu_si128(a3);
    v33 = 0;
    *(_DWORD *)(a2 + 52) = v30;
    v32 = v47 + 12 * v17;
    v33.m128d_f64[0] = (double)*(int *)(v32 + 4) * v20;
    if ( fabs(v33.m128d_f64[0]) < 4.503599627370496e15 )
    {
      v34.m128d_f64[0] = (double)(int)v33.m128d_f64[0];
      *(_QWORD *)&v33.m128d_f64[0] = COERCE_UNSIGNED_INT64(
                                       v34.m128d_f64[0]
                                     + COERCE_DOUBLE(*(_QWORD *)&_mm_cmpgt_sd(v33, v34).m128d_f64[0] & 0x3FF0000000000000LL))
                                   | *(_QWORD *)&v33.m128d_f64[0] & 0x8000000000000000LL;
    }
    v35 = *(_DWORD *)(a2 + 56);
    v36 = *(_DWORD *)(a2 + 48);
    v37 = *(_DWORD *)(a2 + 60);
    v38 = v35 - v27 - v36 - *(_DWORD *)(v32 + 8);
    if ( v38 < 0 )
      v38 = 0;
    v39 = v37 - v27 - v28 - (int)v33.m128d_f64[0];
    if ( v39 < 0 )
      v39 = 0;
    v25 = _mm_unpacklo_epi64(
            _mm_unpacklo_epi32(_mm_cvtsi32_si128((v38 >> 1) + v16 + v36), _mm_cvtsi32_si128((v39 >> 1) + v31)),
            _mm_unpacklo_epi32(
              _mm_cvtsi32_si128((v38 >> 1) + v35 - v16 - v38),
              _mm_cvtsi32_si128((v39 >> 1) + v37 - v16 - v39)));
    goto LABEL_4;
  }
  return 0;
}
