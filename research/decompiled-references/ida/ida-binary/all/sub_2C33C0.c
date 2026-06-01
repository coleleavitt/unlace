unsigned __int64 __fastcall sub_2C33C0(
        __int64 a1,
        __int64 a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  _DWORD *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // r12d
  int v15; // ebp
  int v16; // r13d
  const __m128i *v17; // rax
  __int32 v18; // r14d
  __m128 v19; // xmm3
  __int64 v20; // r9
  int v21; // eax
  __m128 v22; // xmm2
  __int64 v23; // r9
  __m128i v24; // xmm0
  __m128i v25; // xmm1
  __m128 v26; // xmm0
  __int64 v27; // r8
  __int64 *v28; // rax
  __int64 *v29; // rdx
  __int64 v30; // rcx
  __int64 (__fastcall *v31)(__int64); // rax
  __int32 v32; // eax
  __int64 v33; // rax
  __m128i v34; // xmm1
  __m128i v35; // xmm0
  __m128i v36; // xmm0
  __m128i v37; // xmm1
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __m128 v42; // xmm2
  double v43; // xmm0_8
  __int64 v44; // rcx
  double v45; // xmm4_8
  double v46; // xmm5_8
  char v47; // al
  __m128 v48; // xmm4
  __m128 v49; // xmm5
  __int64 (__fastcall *v50)(__int64, __int64, __int64, __int64, __m128, __m128, __m128, __m128, double, double, __m128, __m128); // rax
  __int64 v51; // rax
  int v52; // r12d
  __int64 v53; // rbp
  int v54; // eax
  __m128 v55; // xmm4
  __m128 v56; // xmm5
  int v57; // ebp
  _DWORD *v58; // rdx
  __m128 v59; // xmm0
  int v60; // r14d
  unsigned int *v61; // rax
  __int64 v62; // r8
  __int64 v63; // r9
  __m128 v64; // xmm4
  __m128 v65; // xmm5
  __int64 v66; // rcx
  __int64 (__fastcall *v67)(); // rax
  __int64 v68; // rax
  __int64 v69; // rax
  const __m128i *v70; // rdi
  __int64 (__fastcall *v71)(); // rax
  __int64 v72; // r14
  int v73; // ecx
  int v74; // edx
  int v75; // eax
  int v76; // eax
  int v77; // eax
  __int64 v78; // [rsp+0h] [rbp-1C8h]
  double v79; // [rsp+8h] [rbp-1C0h]
  __int64 v80; // [rsp+10h] [rbp-1B8h]
  int v81; // [rsp+10h] [rbp-1B8h]
  double v82; // [rsp+10h] [rbp-1B8h]
  __int64 v83; // [rsp+10h] [rbp-1B8h]
  int v84[4]; // [rsp+20h] [rbp-1A8h]
  __int64 v85; // [rsp+20h] [rbp-1A8h]
  __int64 v86; // [rsp+20h] [rbp-1A8h]
  __int64 v87; // [rsp+30h] [rbp-198h]
  __int64 v88; // [rsp+30h] [rbp-198h]
  int v89; // [rsp+38h] [rbp-190h]
  __int64 v90; // [rsp+40h] [rbp-188h]
  __int64 v91; // [rsp+48h] [rbp-180h]
  unsigned int v92; // [rsp+48h] [rbp-180h]
  int v93; // [rsp+50h] [rbp-178h]
  bool v94; // [rsp+57h] [rbp-171h]
  int v95; // [rsp+58h] [rbp-170h]
  double v96; // [rsp+58h] [rbp-170h]
  __int64 v97; // [rsp+60h] [rbp-168h]
  __int64 v98; // [rsp+60h] [rbp-168h]
  unsigned int v99; // [rsp+68h] [rbp-160h]
  int v100; // [rsp+6Ch] [rbp-15Ch]
  __m128i v101; // [rsp+70h] [rbp-158h] BYREF
  __int64 v102; // [rsp+80h] [rbp-148h] BYREF
  int v103; // [rsp+88h] [rbp-140h]
  int v104; // [rsp+8Ch] [rbp-13Ch]
  int v105[4]; // [rsp+90h] [rbp-138h] BYREF
  int v106[2]; // [rsp+A0h] [rbp-128h]
  __m256i v107; // [rsp+B0h] [rbp-118h] BYREF
  int v108[2]; // [rsp+D0h] [rbp-F8h]
  __int64 v109[2]; // [rsp+E0h] [rbp-E8h] BYREF
  __int128 v110; // [rsp+F0h] [rbp-D8h]
  __int128 v111; // [rsp+100h] [rbp-C8h]
  __int128 v112; // [rsp+110h] [rbp-B8h]
  _BYTE v113[16]; // [rsp+120h] [rbp-A8h] BYREF
  _BYTE v114[24]; // [rsp+130h] [rbp-98h] BYREF
  double v115; // [rsp+148h] [rbp-80h]
  double v116; // [rsp+158h] [rbp-70h]
  double v117; // [rsp+168h] [rbp-60h]
  double v118; // [rsp+178h] [rbp-50h]
  unsigned __int64 v119; // [rsp+188h] [rbp-40h]

  v119 = __readfsqword(0x28u);
  if ( dword_8D1DC0 > 0 )
    return v119 - __readfsqword(0x28u);
  v11 = *(_DWORD **)(QT::QAbstractScrollArea::viewport(*(QT::QAbstractScrollArea **)(a1 + 16)) + 32LL);
  v14 = v11[7] - v11[5];
  v15 = v11[8] - v11[6];
  v16 = v15 + 1;
  if ( v14 + 1 <= 0 )
    return v119 - __readfsqword(0x28u);
  if ( v16 <= 0 )
    return v119 - __readfsqword(0x28u);
  v17 = (const __m128i *)sub_1EA6A0(*(_QWORD *)(a1 + 16) + 384LL, a2, v12, v13, a3);
  *(__m128i *)v107.m256i_i8 = _mm_loadu_si128(v17);
  *(__m128i *)&v107.m256i_u64[2] = _mm_loadu_si128(v17 + 1);
  v18 = v107.m256i_i32[6];
  *(_QWORD *)v108 = v17[2].m128i_i64[0];
  if ( v107.m256i_i32[6] < 0 )
    return v119 - __readfsqword(0x28u);
  v19 = (__m128)v107.m256i_u64[0];
  v78 = v107.m256i_i64[0];
  if ( *(double *)v107.m256i_i64 <= 0.0 )
    return v119 - __readfsqword(0x28u);
  v20 = *(_QWORD *)(a1 + 16);
  v21 = *(_DWORD *)(v20 + 948);
  if ( v21 == 2 || v21 == 1 && (*(_BYTE *)(v20 + 952) & 8) != 0 && (_BYTE)a2 )
    return v119 - __readfsqword(0x28u);
  v22.m128_u64[0] = v107.m256i_i64[0];
  v87 = *(_QWORD *)(a1 + 16);
  v22.m128_u64[1] = v107.m256i_i64[1];
  v101.m128i_i64[0] = 0;
  v79 = *(double *)&v107.m256i_i64[2];
  v90 = v107.m256i_i64[1];
  *(_OWORD *)v84 = *(_OWORD *)&v107.m256i_u64[1];
  sub_1761D0((_QWORD *)a1, nullptr, (__int64)&v101);
  v23 = v87;
  v24 = _mm_loadl_epi64(&v101);
  if ( *(double *)&v78 == 1.0 )
  {
    v25 = _mm_cvttpd_epi32(*(__m128d *)v84);
    v26 = (__m128)_mm_sub_epi32(v24, v25);
  }
  else
  {
    v25 = (__m128i)_mm_unpacklo_pd((__m128d)(unsigned __int64)v78, (__m128d)(unsigned __int64)v78);
    v26 = (__m128)_mm_cvttpd_epi32(_mm_mul_pd(_mm_sub_pd(_mm_cvtepi32_pd(v24), *(__m128d *)v84), (__m128d)v25));
  }
  v27 = a1 + 320;
  v101.m128i_i64[1] = v26.m128_u64[0];
  v28 = (__int64 *)(a1 + 320);
  do
  {
    v29 = v28;
    v28 = (__int64 *)v28[1];
  }
  while ( v28 );
  v30 = *v29;
  if ( !*v29 )
  {
    v30 = *(_QWORD *)(a1 + 440);
    if ( v30 )
      v30 = *(_QWORD *)(v30 + 8);
  }
  if ( (*(_BYTE *)(v87 + 955) & 1) == 0
    || ((v31 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v30 + 56LL), v31 != interactive_graph_t__::vfunc_7)
      ? (v83 = v30, v89 = v22.m128_i32[2], v32 = v31(v30), v27 = a1 + 320, v23 = v87, v30 = v83)
      : (v32 = *(_DWORD *)(v30 + 184)),
        v18 >= v32) )
  {
    v91 = v27;
    v88 = v30;
    v80 = v23;
    v102 = 0;
    v103 = v14;
    v104 = v15;
    v47 = QT::QRect::contains(&v102, &v101.m128i_u64[1], 0);
    v41 = v80;
    v39 = v88;
    v40 = v91;
    if ( v47 )
    {
      if ( (_BYTE)a2 || (*(_BYTE *)(v80 + 955) & 8) != 0 )
      {
        v71 = *(__int64 (__fastcall **)())(*(_QWORD *)a1 + 312LL);
        if ( v71 == sub_2B2520 )
          v82 = *(double *)sub_1EA6C0(
                             *(_QWORD *)(a1 + 16) + 384LL,
                             (__int64)&v101.m128i_i64[1],
                             (__int64)sub_2B2520,
                             v88,
                             v91,
                             v80,
                             v26,
                             (__m128)v25,
                             v22,
                             v19,
                             v48,
                             v49,
                             a9,
                             a10,
                             v78,
                             SLODWORD(v79),
                             v80,
                             v22.m128_i32[2],
                             v22.m128_i64[0],
                             v22.m128_i64[1],
                             v88,
                             v89,
                             v90,
                             v91,
                             v93,
                             v95,
                             v97);
        else
          v82 = ((double (__fastcall *)(__int64, unsigned __int64 *, __int64 (__fastcall *)(), __int64, __int64, __int64, double, double, double))v71)(
                  a1,
                  &v101.m128i_u64[1],
                  sub_2B2520,
                  v88,
                  v91,
                  v80,
                  *(double *)v26.m128_u64,
                  *(double *)v25.m128i_i64,
                  *(double *)&v78);
        v72 = *(_QWORD *)(a1 + 16);
        *(_OWORD *)v109 = 0;
        v110 = 0;
        v111 = 0;
        v112 = 0;
        QT::QFont::QFont((QT::QFont *)v113);
        QT::QFont::QFont((QT::QFont *)v105);
        QT::QFontMetricsF::QFontMetricsF((QT::QFontMetricsF *)v114, (const QT::QFont *)v105);
        QT::QFont::~QFont((QT::QFont *)v105);
        sub_1C8200((__m128i *)v109, v72, (__m128d)*(unsigned __int64 *)&v82);
        v73 = (int)(v115 * (double)word_8BCE1C);
        v74 = (int)((double)word_8BCE1C * v116);
        if ( v73 - v101.m128i_i32[2] <= 0 )
          v37.m128i_i64[0] = v90;
        else
          *(double *)v37.m128i_i64 = *(double *)&v90 - (double)(v73 - v101.m128i_i32[2]) / *(double *)&v78;
        v75 = v73 + v102 + v101.m128i_i32[2] - 1 - v103;
        if ( v75 > 0 )
          *(double *)v37.m128i_i64 = *(double *)v37.m128i_i64 + (double)v75 / *(double *)&v78;
        a10 = (__m128)*(unsigned __int64 *)&v79;
        v43 = v79;
        if ( v74 - v101.m128i_i32[3] > 0 )
        {
          *(double *)a10.m128_u64 = v79 - (double)(v74 - v101.m128i_i32[3]) / *(double *)&v78;
          v43 = *(double *)a10.m128_u64;
        }
        v76 = v74 + HIDWORD(v102) + v101.m128i_i32[3] - 1 - v104;
        if ( v76 > 0 )
          v43 = v43 + (double)v76 / *(double *)&v78;
        goto LABEL_44;
      }
      if ( !v88 )
        return v119 - __readfsqword(0x28u);
    }
    else if ( !v88 )
    {
      goto LABEL_68;
    }
    v38 = *(unsigned int *)(a1 + 384);
    if ( (_DWORD)v38 )
    {
      do
      {
        v69 = v40;
        v40 = *(_QWORD *)(v40 + 8);
      }
      while ( v40 );
      v57 = *(_DWORD *)(v69 + 48);
    }
    else
    {
      v50 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, __m128, __m128, __m128, __m128, double, double, __m128, __m128))(*(_QWORD *)a1 + 504LL);
      if ( v50 == sub_2B36E0 )
      {
        v51 = sub_1EA6A0(
                *(_QWORD *)(a1 + 16) + 384LL,
                (__int64)&v101.m128i_i64[1],
                (__int64)sub_2B36E0,
                v88,
                *(double *)v26.m128_u64);
        v52 = *(_DWORD *)(v51 + 32);
        v53 = v51;
        v54 = sub_1EB540(*(_QWORD **)(a1 + 16), a1);
        v39 = v88;
        if ( v52 != v54 )
        {
          sub_169700(
            (int)"Coherency check failed: rinfo.rtype == cim->get_renderer_type(this)\n",
            a1,
            v38,
            v88,
            v40,
            v41,
            v26,
            (__m128)v25,
            v22,
            v19,
            v55,
            v56,
            a9,
            a10,
            v78);
          v39 = v88;
        }
        v57 = *(_DWORD *)(v53 + 24);
      }
      else
      {
        v77 = ((__int64 (__fastcall *)(__int64, unsigned __int64 *, __int64 (__fastcall *)(__int64, __int64, __int64, __int64, __m128, __m128, __m128, __m128, double, double, __m128, __m128), __int64, __int64, __int64, double, double, double))v50)(
                a1,
                &v101.m128i_u64[1],
                sub_2B36E0,
                v88,
                v91,
                v80,
                *(double *)v26.m128_u64,
                *(double *)v25.m128i_i64,
                *(double *)&v78);
        v39 = v88;
        v57 = v77;
      }
    }
    v85 = v39;
    if ( v57 >= 0 )
    {
      v94 = v101.m128i_i32[3] < 0 || v101.m128i_i32[3] >= v16;
      a10 = (__m128)(unsigned __int64)v78;
      v58 = *(_DWORD **)(QT::QAbstractScrollArea::viewport(*(QT::QAbstractScrollArea **)(a1 + 16)) + 32LL);
      v59 = 0;
      v81 = (int)((double)(v58[8] + 1 - v58[6]) / *(double *)&v78);
      *(double *)v59.m128_u64 = (double)(v58[7] + 1 - v58[5]) / *(double *)&v78;
      v60 = (int)*(double *)v59.m128_u64;
      if ( (int)*(double *)v59.m128_u64 < 0 )
      {
        LODWORD(v98) = (int)*(double *)v59.m128_u64;
        v60 = 0;
      }
      else
      {
        LODWORD(v98) = 0;
      }
      if ( v81 < 0 )
      {
        v81 = 0;
        v100 = (int)((double)(v58[8] + 1 - v58[6]) / *(double *)&v78);
      }
      else
      {
        v100 = 0;
      }
      v61 = (unsigned int *)(*(__int64 (__fastcall **)(__int64, _QWORD, double, double, double))(*(_QWORD *)v85 + 152LL))(
                              v85,
                              (unsigned int)v57,
                              *(double *)v59.m128_u64,
                              *(double *)v25.m128i_i64,
                              *(double *)v22.m128_u64);
      v92 = *v61;
      v99 = v61[1];
      v66 = v61[2];
      LODWORD(v88) = v61[2];
      HIDWORD(v98) = v61[3];
      v67 = *(__int64 (__fastcall **)())(*(_QWORD *)a1 + 312LL);
      if ( v67 == sub_2B2520 )
        v96 = *(double *)sub_1EA6C0(
                           *(_QWORD *)(a1 + 16) + 384LL,
                           (unsigned int)v57,
                           (__int64)sub_2B2520,
                           v66,
                           v62,
                           v63,
                           v59,
                           (__m128)v25,
                           v22,
                           v19,
                           v64,
                           v65,
                           a9,
                           (__m128)(unsigned __int64)v78,
                           v78,
                           SLODWORD(v79),
                           v81,
                           v22.m128_i32[2],
                           v85,
                           v22.m128_i64[1],
                           v88,
                           v89,
                           v90,
                           v92,
                           v93,
                           v95,
                           v98);
      else
        v96 = ((double (__fastcall *)(__int64))v67)(a1);
      v68 = *(_QWORD *)(a1 + 16);
      *(_OWORD *)v109 = 0;
      v86 = v68;
      v110 = 0;
      v111 = 0;
      v112 = 0;
      QT::QFont::QFont((QT::QFont *)v113);
      QT::QFont::QFont((QT::QFont *)v105);
      QT::QFontMetricsF::QFontMetricsF((QT::QFontMetricsF *)v114, (const QT::QFont *)v105);
      QT::QFont::~QFont((QT::QFont *)v105);
      sub_1C8200((__m128i *)v109, v86, (__m128d)*(unsigned __int64 *)&v96);
      v43 = v79;
      *(double *)v37.m128i_i64 = (double)(int)sub_2B6E10(
                                                v117,
                                                a1,
                                                v60 - (int)v98,
                                                (unsigned int)v88 - v92,
                                                v92,
                                                v101.m128i_i32[0]);
      if ( v94 )
        v43 = (double)(int)sub_2B6E10(v118, a1, v81 - v100, HIDWORD(v98) - v99, v99, v101.m128i_i32[1]);
LABEL_44:
      QT::QFontMetricsF::~QFontMetricsF((QT::QFontMetricsF *)v114);
      QT::QFont::~QFont((QT::QFont *)v113);
      v37 = (__m128i)v37.m128i_u64[0];
LABEL_45:
      v42 = (__m128)_mm_unpacklo_pd((__m128d)(unsigned __int64)v78, (__m128d)v37);
      goto LABEL_19;
    }
LABEL_68:
    v43 = v79;
    v37 = (__m128i)(unsigned __int64)v90;
    goto LABEL_45;
  }
  v33 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v30 + 152LL))(v30, (unsigned int)v18);
  v34 = _mm_loadl_epi64((const __m128i *)(v33 + 8));
  v35 = _mm_loadl_epi64((const __m128i *)v33);
  *(__m128 *)v105 = v22;
  *(double *)v106 = v79;
  v36 = _mm_add_epi32(v35, v34);
  v37 = _mm_cmpgt_epi32((__m128i)0LL, v36);
  v109[0] = _mm_srai_epi32(_mm_sub_epi32(v36, v37), 1u).m128i_u64[0];
  sub_2B6E80(a1, (double *)v105, (int *)v109, 0, *(double *)&v78);
  v42 = *(__m128 *)v105;
  v43 = *(double *)v106;
LABEL_19:
  if ( *(double *)&v78 != *(double *)v42.m128_u64
    || _mm_unpackhi_pd((__m128d)v42, (__m128d)v42).m128d_f64[0] != *(double *)&v90
    || v43 != v79 )
  {
    if ( (_BYTE)a2 )
    {
      *(__m128 *)v105 = v42;
      *(double *)v106 = v43;
      sub_2B4480((__int64)v109, a1, (__int64)v105, v39);
      sub_2C29E0(a1, (__int64)v109, 0, v44, v43, (__m128)v37, v42, v19, v45, v46, (__m128)(unsigned __int64)v78, a10);
    }
    else
    {
      v70 = *(const __m128i **)(a1 + 16);
      *(__m128 *)v107.m256i_i8 = v42;
      *(double *)&v107.m256i_i64[2] = v43;
      sub_1F14A0(v70 + 24, (const __m128i *)&v107, v38, v39, v40, v41);
    }
  }
  return v119 - __readfsqword(0x28u);
}
