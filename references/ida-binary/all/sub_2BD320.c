__int64 __fastcall sub_2BD320(__int64 a1, __int64 *a2, double *a3, __int64 a4, int *a5, __int64 a6, __m128d a7)
{
  __int64 v13; // rax
  __int64 v14; // rsi
  __int64 v16; // rax
  double v17; // xmm1_8
  int v18; // esi
  _DWORD *v19; // rdx
  int v20; // eax
  int v21; // edi
  int v22; // eax
  int v23; // ecx
  __int64 v25; // r8
  __int64 v26; // r9
  __m128 v27; // xmm4
  __m128 v28; // xmm5
  __m128 v29; // xmm2
  __m128 v30; // xmm1
  __m128 v31; // xmm0
  int v32; // eax
  int v33; // edx
  int v34; // eax
  _QWORD *v35; // rcx
  unsigned int v36; // ebp
  int v37; // edx
  __int64 (*v38)(); // rax
  __int64 (*v39)(); // rax
  __m128d v40; // xmm2
  __m128i v41; // xmm7
  __int64 (__fastcall *v42)(); // rax
  __m128 v43; // xmm6
  double v44; // r14
  __int64 v45; // r15
  __m128d v46; // xmm1
  double v47; // [rsp+0h] [rbp-108h]
  __m64 v48; // [rsp+0h] [rbp-108h]
  __int64 v49; // [rsp+8h] [rbp-100h]
  int v50[4]; // [rsp+10h] [rbp-F8h] BYREF
  __m128i v51; // [rsp+20h] [rbp-E8h] BYREF
  __int128 v52; // [rsp+30h] [rbp-D8h]
  __int128 v53; // [rsp+40h] [rbp-C8h]
  __int128 v54; // [rsp+50h] [rbp-B8h]
  __int64 v55[2]; // [rsp+60h] [rbp-A8h] BYREF
  _BYTE v56[24]; // [rsp+70h] [rbp-98h] BYREF
  double v57; // [rsp+88h] [rbp-80h]
  double v58; // [rsp+98h] [rbp-70h]
  unsigned __int64 v59; // [rsp+C8h] [rbp-40h]

  v13 = *a2;
  v14 = *(unsigned int *)(a6 + 4);
  v59 = __readfsqword(0x28u);
  v16 = (*(__int64 (__fastcall **)(__int64 *, __int64))(v13 + 152))(a2, v14);
  v17 = *a3;
  v18 = *(_DWORD *)(v16 + 4);
  v19 = (_DWORD *)v16;
  v20 = *(_DWORD *)(v16 + 12);
  if ( *a3 != 1.0 )
  {
    v23 = (int)(((double)v18 - a3[2]) * v17);
    a7 = 0;
    a7.m128d_f64[0] = (double)(v20 - v18) * v17;
    if ( fabs(a7.m128d_f64[0]) < 4.503599627370496e15 )
    {
      v40 = 0;
      v40.m128d_f64[0] = (double)(int)a7.m128d_f64[0];
      v40.m128d_f64[0] = v40.m128d_f64[0]
                       + COERCE_DOUBLE(*(_QWORD *)&_mm_cmpgt_sd(a7, v40).m128d_f64[0] & 0x3FF0000000000000LL);
      a7 = _mm_or_pd(v40, _mm_andn_pd((__m128d)0x7FFFFFFFFFFFFFFFuLL, a7));
      v22 = (int)((double)v23 + a7.m128d_f64[0]);
      if ( v23 > v22 )
        goto LABEL_7;
    }
    else
    {
      v22 = (int)((double)v23 + a7.m128d_f64[0]);
      if ( v23 > v22 )
        goto LABEL_7;
    }
LABEL_3:
    if ( v22 - v23 <= 7 )
      return 1;
    goto LABEL_8;
  }
  v21 = (int)a3[2];
  v22 = v20 - v21;
  v23 = v18 - v21;
  if ( v22 >= v18 - v21 )
    goto LABEL_3;
LABEL_7:
  if ( v23 - v22 <= 7 )
    return 1;
LABEL_8:
  v47 = *a3;
  HIDWORD(v49) = v18;
  LODWORD(v49) = *v19;
  QT::QFont::pointSizeF((QT::QFont *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 32LL) + 56LL));
  v29 = (__m128)a7;
  if ( v47 > 3.0 / a7.m128d_f64[0] )
  {
    v30 = (__m128)*(unsigned __int64 *)a3;
    v31 = 0;
    v32 = a5[1];
    v33 = *a5;
    if ( *(double *)v30.m128_u64 > 0.0 )
    {
      v32 = (int)((double)v32 / *(double *)v30.m128_u64 + a3[2]);
      v31 = 0;
      *(double *)v31.m128_u64 = (double)v33 / *(double *)v30.m128_u64 + a3[1];
      v33 = (int)*(double *)v31.m128_u64;
    }
    v34 = v32 - v18;
    v35 = *(_QWORD **)a1;
    v36 = v33 - v49;
    v37 = *(_DWORD *)(a1 + 432);
    if ( v34 >= v37 )
    {
      v41 = _mm_cvtsi32_si128(v34 - v37);
      v42 = (__int64 (__fastcall *)())v35[39];
      v43 = (__m128)_mm_unpacklo_epi32(_mm_cvtsi32_si128(v36), v41);
      v48 = (__m64)v43.m128_u64[0];
      if ( v42 == sub_2B2520 )
        v44 = *(double *)sub_1EA6C0(
                           *(_QWORD *)(a1 + 16) + 384LL,
                           HIDWORD(v49),
                           (__int64)sub_2B2520,
                           (__int64)v35,
                           v25,
                           v26,
                           v31,
                           v30,
                           v29,
                           (__m128)0x3FF0000000000000uLL,
                           v27,
                           v28,
                           v43,
                           (__m128)v41,
                           v43.m128_i64[0],
                           v49,
                           v50[0],
                           v50[2],
                           v51.m128i_i64[0],
                           v51.m128i_i64[1],
                           v52,
                           SDWORD2(v52),
                           v53,
                           SDWORD2(v53),
                           v54,
                           SDWORD2(v54),
                           v55[0]);
      else
        v44 = ((double (__fastcall *)(__int64))v42)(a1);
      v45 = *(_QWORD *)(a1 + 16);
      v51 = 0;
      v52 = 0;
      v53 = 0;
      v54 = 0;
      QT::QFont::QFont((QT::QFont *)v55);
      QT::QFont::QFont((QT::QFont *)v50);
      QT::QFontMetricsF::QFontMetricsF((QT::QFontMetricsF *)v56, (const QT::QFont *)v50);
      QT::QFont::~QFont((QT::QFont *)v50);
      sub_1C8200(&v51, v45, (__m128d)*(unsigned __int64 *)&v44);
      *(_DWORD *)a4 = 4;
      v46.m128d_f64[0] = v57;
      v46.m128d_f64[1] = v58;
      *(_QWORD *)(a4 + 20) = _mm_cvttpd_epi32(_mm_div_pd(_mm_cvtepi32_pd(v48), v46)).m128i_u64[0];
      QT::QFontMetricsF::~QFontMetricsF((QT::QFontMetricsF *)v56);
      QT::QFont::~QFont((QT::QFont *)v55);
    }
    else
    {
      v38 = (__int64 (*)())v35[80];
      if ( v38 != sub_2B2460 )
      {
        if ( (((__int64 (__fastcall *)(__int64, __int64 *, _QWORD))v38)(a1, a2, *(unsigned int *)(a6 + 4)) & 0x10) != 0 )
          return 1;
        v35 = *(_QWORD **)a1;
      }
      v39 = (__int64 (*)())v35[79];
      if ( v39 != sub_2B2310 )
        ((void (__fastcall *)(__int64, __int64 *, _QWORD, __int64))v39)(a1, a2, v36, a4);
    }
  }
  return 1;
}
