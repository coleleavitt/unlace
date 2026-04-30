__int64 __fastcall grida_model_data_t__::vfunc_5(
        __int64 a1,
        const __m128i *a2,
        _DWORD *a3,
        _QWORD *a4,
        unsigned int a5,
        __int64 a6,
        __m128d a7)
{
  __int64 v9; // rbx
  __int64 v10; // rdx
  int v11; // r14d
  int v12; // r15d
  unsigned int v13; // ebx
  __int64 v14; // rax
  char v15; // dl
  __int64 (*v16)(); // rax
  __m128d v17; // xmm0
  signed int v18; // eax
  unsigned int v19; // esi
  int v20; // ecx
  __m128i v21; // xmm1
  const char *v23; // rsi
  const char *v24; // rdi
  int v25; // eax
  const char *v26; // rdx
  unsigned __int64 v27; // rcx
  __int64 v28; // rax
  __m128d v29; // xmm1
  int v30; // edx
  size_t v31; // rax
  __m128d v32; // xmm1
  __int16 v33; // ax
  __m128d v34; // xmm1
  __m128d v35; // xmm0
  __m128d v36; // xmm3
  __m128d v37; // xmm3
  const char *v42; // [rsp+30h] [rbp-130h]
  const char *v43; // [rsp+38h] [rbp-128h] BYREF
  __int128 v44; // [rsp+40h] [rbp-120h]
  void *ptr[4]; // [rsp+58h] [rbp-108h] BYREF
  __m128i v46[4]; // [rsp+78h] [rbp-E8h] BYREF
  _BYTE v47[16]; // [rsp+B8h] [rbp-A8h] BYREF
  _BYTE v48[56]; // [rsp+C8h] [rbp-98h] BYREF
  double v49; // [rsp+100h] [rbp-60h]
  double v50; // [rsp+110h] [rbp-50h]
  unsigned __int64 v51; // [rsp+120h] [rbp-40h]

  v51 = __readfsqword(0x28u);
  v9 = *(_QWORD *)(a6 + 16);
  memset(v46, 0, sizeof(v46));
  QT::QFont::QFont((QT::QFont *)v47);
  QT::QFont::QFont((QT::QFont *)ptr);
  QT::QFontMetricsF::QFontMetricsF((QT::QFontMetricsF *)v48, (const QT::QFont *)ptr);
  QT::QFont::~QFont((QT::QFont *)ptr);
  a7 = (__m128d)*(unsigned __int64 *)&a7.m128d_f64[0];
  sub_1C8200(v46, v9, (__m128d)*(unsigned __int64 *)&a7.m128d_f64[0]);
  if ( a4[1] )
  {
    v10 = 0;
    v11 = 0;
    v12 = 0;
    v13 = 0;
    while ( 1 )
    {
      ++v13;
      v14 = *a4 + 272 * v10;
      if ( *(_QWORD *)(v14 + 16) > 1u )
        break;
LABEL_4:
      v10 = v13;
      if ( (unsigned __int64)v13 >= a4[1] )
        goto LABEL_5;
    }
    v23 = &s1;
    v43 = nullptr;
    v44 = 0;
    if ( *(_QWORD *)(v14 + 16) )
      v23 = *(const char **)(v14 + 8);
    tag_remove(&v43, v23, 0);
    v24 = &s1;
    if ( (_QWORD)v44 )
      v24 = v43;
    v25 = qustrlen(v24);
    if ( v12 < v25 )
      v12 = v25;
    if ( (_QWORD)v44 )
    {
      v28 = v44 - 1;
      v26 = v43;
      v27 = (unsigned __int64)(v44 - 1) >> 63;
      if ( v43 )
      {
LABEL_19:
        if ( !(_BYTE)v27 )
          goto LABEL_20;
      }
    }
    else
    {
      v26 = &s1;
      LOBYTE(v27) = 0;
      v28 = 0;
      if ( &s1 )
        goto LABEL_19;
    }
    v28 = 0;
    if ( v26 )
    {
      v42 = v26;
      v31 = strlen(v26);
      a7.m128d_f64[0] = QT::QString::fromUtf8(ptr, v31, v42);
      goto LABEL_21;
    }
LABEL_20:
    a7.m128d_f64[0] = QT::QString::fromUtf8(ptr, v28, v26);
LABEL_21:
    QT::QFontMetricsF::horizontalAdvance((QT::QFontMetricsF *)v48, (const QT::QString *)ptr, -1);
    if ( fabs(a7.m128d_f64[0]) < 4.503599627370496e15 )
    {
      v29 = 0;
      v29.m128d_f64[0] = (double)(int)a7.m128d_f64[0];
      v29.m128d_f64[0] = v29.m128d_f64[0]
                       + COERCE_DOUBLE(*(_QWORD *)&_mm_cmpgt_sd(a7, v29).m128d_f64[0] & 0x3FF0000000000000LL);
      a7 = _mm_or_pd(v29, _mm_andn_pd((__m128d)0x7FFFFFFFFFFFFFFFuLL, a7));
    }
    v30 = (int)a7.m128d_f64[0];
    if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    {
      free(ptr[0]);
      v30 = (int)a7.m128d_f64[0];
    }
    if ( v11 < v30 )
      v11 = v30;
    if ( v43 )
    {
      *(_QWORD *)&v44 = 0;
      qfree(v43, (const char *)ptr);
    }
    goto LABEL_4;
  }
  v11 = 0;
  v13 = 0;
  v12 = 0;
LABEL_5:
  v15 = 0;
  v16 = *(__int64 (**)())(*(_QWORD *)a6 + 640LL);
  if ( v16 == sub_2B2460
    || (v33 = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD))v16)(a6, *(_QWORD *)(a1 + 8), a5),
        v34 = (__m128d)*(unsigned __int64 *)&v50,
        v15 = v33,
        (v33 & 0x100) == 0) )
  {
    v17 = 0;
    v17.m128d_f64[0] = (double)(int)v13 * v50;
    if ( fabs(v17.m128d_f64[0]) < 4.503599627370496e15 )
    {
      v32.m128d_f64[0] = (double)(int)v17.m128d_f64[0];
      *(_QWORD *)&v17.m128d_f64[0] = COERCE_UNSIGNED_INT64(
                                       v32.m128d_f64[0]
                                     + COERCE_DOUBLE(*(_QWORD *)&_mm_cmpgt_sd(v17, v32).m128d_f64[0] & 0x3FF0000000000000LL))
                                   | *(_QWORD *)&v17.m128d_f64[0] & 0x8000000000000000LL;
    }
    v18 = v11 + *(_DWORD *)(a6 + 180) + *(_DWORD *)(a6 + 184) + 2;
    v19 = (int)v17.m128d_f64[0] + *(_DWORD *)(a6 + 176) + *(_DWORD *)(a6 + 188) + 2;
    v20 = *(_DWORD *)(a6 + 432);
    v21 = _mm_cvtsi32_si128(v19);
    if ( v20 > 0 && (v15 & 0x10) == 0 )
    {
      v21 = _mm_cvtsi32_si128(v19 + v20 + 2);
      if ( v18 < unk_5E5A98 + 20 )
        v18 = unk_5E5A98 + 20;
    }
  }
  else
  {
    v35 = (__m128d)0x3FF6A09E667F3BCDuLL;
    v34.m128d_f64[0] = v50 * 1.414213562373095;
    if ( fabs(v50 * 1.414213562373095) < 4.503599627370496e15 )
    {
      v36.m128d_f64[0] = (double)(int)v34.m128d_f64[0];
      *(_QWORD *)&v34.m128d_f64[0] = COERCE_UNSIGNED_INT64(
                                       v36.m128d_f64[0]
                                     + COERCE_DOUBLE(*(_QWORD *)&_mm_cmpgt_sd(v34, v36).m128d_f64[0] & 0x3FF0000000000000LL))
                                   | *(_QWORD *)&v34.m128d_f64[0] & 0x8000000000000000LL;
    }
    v35.m128d_f64[0] = 1.414213562373095 * v49;
    if ( fabs(1.414213562373095 * v49) < 4.503599627370496e15 )
    {
      v37.m128d_f64[0] = (double)(int)v35.m128d_f64[0];
      *(_QWORD *)&v35.m128d_f64[0] = COERCE_UNSIGNED_INT64(
                                       v37.m128d_f64[0]
                                     + COERCE_DOUBLE(*(_QWORD *)&_mm_cmpgt_sd(v35, v37).m128d_f64[0] & 0x3FF0000000000000LL))
                                   | *(_QWORD *)&v35.m128d_f64[0] & 0x8000000000000000LL;
    }
    if ( v34.m128d_f64[0] <= v35.m128d_f64[0] )
      v18 = (int)v35.m128d_f64[0];
    else
      v18 = (int)v34.m128d_f64[0];
    v21 = _mm_cvtsi32_si128(v18);
  }
  a2->m128i_i64[1] = _mm_add_epi32(_mm_unpacklo_epi32(_mm_cvtsi32_si128(v18), v21), _mm_loadl_epi64(a2)).m128i_u64[0];
  *a3 = v12;
  a3[1] = v13;
  a3[2] = v11;
  QT::QFontMetricsF::~QFontMetricsF((QT::QFontMetricsF *)v48);
  QT::QFont::~QFont((QT::QFont *)v47);
  return 1;
}
