unsigned __int64 __fastcall sub_2B8C40(
        _QWORD *a1,
        QT::QPainter *a2,
        __int64 a3,
        int *a4,
        const __m128i *a5,
        int *a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        double a11,
        double a12,
        __m128 a13,
        __m128 a14,
        int a15,
        __int64 *a16)
{
  int v19; // eax
  __int64 v20; // rcx
  __int64 (__fastcall *v21)(__int64, __int64, __int64, __int64, __m128, __m128, __m128, __m128, double, double, __m128, __m128); // rax
  __int64 v22; // r15
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __m128 v27; // xmm4
  __m128 v28; // xmm5
  __m128i v29; // xmm0
  __m128d v30; // xmm1
  int v31; // ecx
  int v32; // eax
  double v33; // xmm2_8
  double v34; // xmm8_8
  int v35; // edx
  double v36; // xmm7_8
  double v37; // xmm2_8
  double v38; // xmm0_8
  int v39; // edx
  unsigned int v40; // r14d
  unsigned __int64 v41; // rdi
  char v42; // r8
  unsigned int v43; // r10d
  __int64 v44; // r11
  int v45; // edx
  bool v46; // r9
  double v47; // xmm0_8
  int v48; // eax
  int v49; // edx
  int v50; // ecx
  int v51; // esi
  char v53; // [rsp+0h] [rbp-120h]
  __int16 v54; // [rsp+6h] [rbp-11Ah]
  double v55; // [rsp+18h] [rbp-108h]
  int v56; // [rsp+20h] [rbp-100h]
  int v57; // [rsp+20h] [rbp-100h]
  unsigned int v58; // [rsp+28h] [rbp-F8h]
  int v59; // [rsp+2Ch] [rbp-F4h]
  _QWORD *v60; // [rsp+30h] [rbp-F0h]
  __m128i v62; // [rsp+40h] [rbp-E0h] BYREF
  __m128i v63; // [rsp+50h] [rbp-D0h] BYREF
  __m128i v64; // [rsp+60h] [rbp-C0h]
  __m128i v65; // [rsp+70h] [rbp-B0h]
  _BYTE v66[16]; // [rsp+80h] [rbp-A0h] BYREF
  char v67[8]; // [rsp+90h] [rbp-90h] BYREF
  __int64 v68; // [rsp+98h] [rbp-88h]
  __m128i v69; // [rsp+A0h] [rbp-80h]
  __m128i v70; // [rsp+B0h] [rbp-70h]
  __m128i v71; // [rsp+C0h] [rbp-60h]
  __m128i v72; // [rsp+D0h] [rbp-50h]
  unsigned __int64 v73; // [rsp+E8h] [rbp-38h]

  v60 = a1;
  v19 = *a4;
  v73 = __readfsqword(0x28u);
  v59 = v19;
  v54 = *(_WORD *)(sub_1EA6A0(a1[2] + 384LL, (__int64)a2, a3, (__int64)a4, *(double *)a7.m128_u64) + 30);
  v21 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, __m128, __m128, __m128, __m128, double, double, __m128, __m128))(*a1 + 504LL);
  if ( v21 == sub_2B36E0 )
  {
    v60 = a1;
    v22 = sub_1EA6A0(a1[2] + 384LL, (__int64)a2, (__int64)sub_2B36E0, v20, *(double *)a7.m128_u64);
    v56 = *(_DWORD *)(v22 + 32);
    if ( v56 != (unsigned int)sub_1EB540((_QWORD *)a1[2], (__int64)a1) )
      sub_169700(
        (int)"Coherency check failed: rinfo.rtype == cim->get_renderer_type(this)\n",
        (__int64)a1,
        v23,
        v24,
        v25,
        v26,
        a7,
        a8,
        a9,
        a10,
        v27,
        v28,
        a13,
        a14,
        v53);
    v57 = *(_DWORD *)(v22 + 24);
  }
  else
  {
    v57 = ((__int64 (__fastcall *)(_QWORD *))v21)(a1);
  }
  v62 = _mm_loadu_si128((const __m128i *)(a3 + 8));
  v63 = _mm_loadu_si128((const __m128i *)(a3 + 24));
  v64 = _mm_loadu_si128((const __m128i *)(a3 + 40));
  v65 = _mm_loadu_si128((const __m128i *)(a3 + 56));
  QT::QFont::QFont((QT::QFont *)v66, (const QT::QFont *)(a3 + 72));
  QT::QFontMetricsF::QFontMetricsF((QT::QFontMetricsF *)v67, (const QT::QFontMetricsF *)(a3 + 88));
  v68 = *(_QWORD *)(a3 + 96);
  v69 = _mm_loadu_si128((const __m128i *)(a3 + 104));
  v70 = _mm_loadu_si128((const __m128i *)(a3 + 120));
  v71 = _mm_loadu_si128((const __m128i *)(a3 + 136));
  v72 = _mm_loadu_si128((const __m128i *)(a3 + 152));
  v55 = *(double *)&v72.m128i_i64[1];
  QT::QPainter::save(a2);
  v29 = _mm_loadl_epi64(a5);
  v30 = _mm_cvtepi32_pd(v29);
  v31 = a5->m128i_i32[2] - _mm_cvtsi128_si32(v29);
  v64 = (__m128i)v30;
  v32 = _mm_cvtsi128_si32(_mm_shuffle_epi32(v29, 229));
  v33 = _mm_unpackhi_pd(v30, v30).m128d_f64[0];
  v34 = (double)v31;
  v35 = *(_DWORD *)(a3 + 420);
  v62 = (__m128i)v30;
  *(double *)v63.m128i_i64 = (double)v31;
  v36 = v55 + v33 - v33;
  *(double *)&v63.m128i_i64[1] = v36;
  v65 = _mm_load_si128(&v63);
  v37 = (double)a6[2];
  *(double *)v64.m128i_i64 = (double)*a6 - v30.m128d_f64[0] + v30.m128d_f64[0];
  *(double *)v65.m128i_i64 = v37 - *(double *)v64.m128i_i64;
  v38 = (double)(v35 - v32) / v55;
  if ( v38 < 0.0 )
  {
    v41 = 0;
    v40 = 0;
    v39 = 0;
    if ( a16[1] )
      goto LABEL_7;
LABEL_25:
    QT::QPainter::restore(a2);
    QT::QFontMetricsF::~QFontMetricsF((QT::QFontMetricsF *)v67);
    QT::QFont::~QFont((QT::QFont *)v66);
    return v73 - __readfsqword(0x28u);
  }
  v39 = (int)v38;
  v40 = (int)v38;
  v41 = (unsigned int)(int)v38;
  if ( v41 >= a16[1] )
    goto LABEL_25;
LABEL_7:
  v42 = 0;
  v43 = v39 - v40;
  while ( 1 )
  {
    v44 = *a16;
    v45 = v43 + v40;
    v46 = 0;
    if ( v59 == v57 )
      v46 = v54 == v40;
    ++v40;
    v47 = (double)(int)((double)v45 * v55 + (double)v32);
    v48 = (int)(COERCE_DOUBLE(*(_QWORD *)&v30.m128d_f64[0] & 0x8000000000000000LL | 0x3FE0000000000000LL)
              + v30.m128d_f64[0]);
    *(double *)&v62.m128i_i64[1] = v47;
    *(double *)&v64.m128i_i64[1] = v47;
    v49 = (int)(COERCE_DOUBLE(*(_QWORD *)&v47 & 0x8000000000000000LL | 0x3FE0000000000000LL) + v47);
    v50 = v48
        + (int)((v30.m128d_f64[0] - (double)v48) * 0.5
              + v34
              + COERCE_DOUBLE(
                  COERCE_UNSIGNED_INT64((v30.m128d_f64[0] - (double)v48) * 0.5 + v34) & 0x8000000000000000LL
                | 0x3FE0000000000000LL))
        - 1;
    v51 = v49
        + (int)((v47 - (double)v49) * 0.5
              + v36
              + COERCE_DOUBLE(COERCE_UNSIGNED_INT64((v47 - (double)v49) * 0.5 + v36) & 0x8000000000000000LL | 0x3FE0000000000000LL))
        - 1;
    if ( v48 > v50 )
    {
      v48 = v48
          + (int)((v30.m128d_f64[0] - (double)v48) * 0.5
                + v34
                + COERCE_DOUBLE(
                    COERCE_UNSIGNED_INT64((v30.m128d_f64[0] - (double)v48) * 0.5 + v34) & 0x8000000000000000LL
                  | 0x3FE0000000000000LL))
          - 1;
      v50 = (int)(COERCE_DOUBLE(*(_QWORD *)&v30.m128d_f64[0] & 0x8000000000000000LL | 0x3FE0000000000000LL)
                + v30.m128d_f64[0]);
    }
    if ( v49 > v51 )
    {
      v49 = v49
          + (int)((v47 - (double)v49) * 0.5
                + v36
                + COERCE_DOUBLE(COERCE_UNSIGNED_INT64((v47 - (double)v49) * 0.5 + v36) & 0x8000000000000000LL | 0x3FE0000000000000LL))
          - 1;
      v51 = (int)(COERCE_DOUBLE(*(_QWORD *)&v47 & 0x8000000000000000LL | 0x3FE0000000000000LL) + v47);
    }
    if ( v50 <= *(_DWORD *)(a3 + 416)
      || *(_DWORD *)(a3 + 424) <= v48
      || v51 <= *(_DWORD *)(a3 + 420)
      || *(_DWORD *)(a3 + 428) <= v49 )
    {
      break;
    }
    v58 = v43;
    sub_202690((QT::QWidget *)v60[2], a2, (_QWORD *)(v44 + 272 * v41), a3, (__int64)&v62, v46, a3 + 248, a15);
    v42 = 1;
    v41 = v40;
    v43 = v58;
    if ( v40 >= (unsigned __int64)a16[1] )
      goto LABEL_22;
LABEL_20:
    v32 = a5->m128i_i32[1];
    *(_QWORD *)&v30.m128d_f64[0] = v62.m128i_i64[0];
    v34 = *(double *)v63.m128i_i64;
    v36 = *(double *)&v63.m128i_i64[1];
  }
  if ( !v42 )
  {
    v41 = v40;
    if ( v40 < (unsigned __int64)a16[1] )
      goto LABEL_20;
  }
LABEL_22:
  QT::QPainter::restore(a2);
  QT::QFontMetricsF::~QFontMetricsF((QT::QFontMetricsF *)v67);
  QT::QFont::~QFont((QT::QFont *)v66);
  return v73 - __readfsqword(0x28u);
}
