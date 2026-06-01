unsigned __int64 __fastcall sub_2A74B0(
        __int64 a1,
        double a2,
        double a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  _QWORD *v14; // r13
  __m128 v15; // xmm1
  QT::QAbstractScrollArea *v16; // r14
  __int64 v17; // r12
  __int64 v18; // rax
  __int64 v19; // r8
  __int64 v20; // r9
  __m128 v21; // xmm4
  __m128 v22; // xmm5
  double *v23; // rax
  double v24; // xmm2_8
  int v25; // edx
  int v26; // ecx
  double v27; // xmm6_8
  double v28; // xmm5_8
  int v29; // esi
  double v30; // xmm1_8
  int v31; // edi
  __m128i v32; // xmm3
  __m128i v33; // xmm0
  int v34; // r8d
  int v35; // esi
  unsigned int v36; // ecx
  __m128i v37; // xmm1
  __m128i v38; // xmm0
  __m128i *v39; // rsi
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rax
  const __m128i *v43; // rax
  __m128i v44; // xmm0
  __int64 v45; // rax
  __m128i *v46; // r12
  __int64 v47; // rdx
  __int64 v48; // rcx
  unsigned int v49; // eax
  __int64 v50; // rax
  __int64 v51; // rdx
  int v52; // eax
  int v53; // edx
  int v54; // rax^4
  int v55; // rdx^4
  __int32 v56; // ecx
  unsigned int v57; // eax
  __int64 v58; // rdx
  __int64 v59; // rax
  __int64 v60; // rax
  unsigned int v61; // eax
  __int64 v62; // rdx
  __int64 v63; // rax
  __int64 v64; // rdx
  __int64 v66; // rax
  __m128i v67; // xmm1
  __int64 v68; // [rsp+0h] [rbp-118h]
  int v69; // [rsp+8h] [rbp-110h]
  int v70; // [rsp+10h] [rbp-108h]
  int v71; // [rsp+14h] [rbp-104h]
  unsigned int v72; // [rsp+14h] [rbp-104h]
  int v73; // [rsp+18h] [rbp-100h]
  unsigned int v74; // [rsp+18h] [rbp-100h]
  __int64 v75; // [rsp+20h] [rbp-F8h]
  __int64 v76; // [rsp+28h] [rbp-F0h] BYREF
  QT::QAbstractScrollArea *v77; // [rsp+30h] [rbp-E8h] BYREF
  int v78; // [rsp+38h] [rbp-E0h] BYREF
  __int64 v79; // [rsp+40h] [rbp-D8h] BYREF
  int v80; // [rsp+48h] [rbp-D0h] BYREF
  __int64 v81; // [rsp+50h] [rbp-C8h] BYREF
  double v82; // [rsp+58h] [rbp-C0h]
  __m128i v83; // [rsp+60h] [rbp-B8h] BYREF
  _DWORD v84[4]; // [rsp+70h] [rbp-A8h] BYREF
  __int64 v85; // [rsp+80h] [rbp-98h] BYREF
  __int64 v86; // [rsp+88h] [rbp-90h]
  __m128i v87; // [rsp+90h] [rbp-88h] BYREF
  __m128i v88; // [rsp+A0h] [rbp-78h]
  __int64 v89; // [rsp+B0h] [rbp-68h]
  __int64 v90; // [rsp+C0h] [rbp-58h] BYREF
  __int64 v91; // [rsp+C8h] [rbp-50h]
  unsigned __int64 v92; // [rsp+D8h] [rbp-40h]

  v92 = __readfsqword(0x28u);
  QT::QPainter::QPainter((QT::QPainter *)&v76, (QT::QPaintDevice *)(a1 + 16));
  v10 = *(_QWORD *)(a1 + 32);
  v81 = 0;
  *(_QWORD *)&v82 = _mm_sub_epi32(
                      _mm_loadl_epi64((const __m128i *)(v10 + 28)),
                      _mm_loadl_epi64((const __m128i *)(v10 + 20))).m128i_u64[0];
  v13 = sub_2A6DC0(a1, (__int64 *)&v77, v11, v12, v82);
  v14 = (_QWORD *)v13;
  if ( !v13
    || (*(double (__fastcall **)(__int64))(*(_QWORD *)v13 + 312LL))(v13) <= 0.0
    || (v15 = (__m128)*(unsigned __int64 *)(a1 + 104), *(double *)v15.m128_u64 <= 0.0) )
  {
    sub_2B8320(&v76, &v81, *(unsigned int *)(a1 + 176), *(unsigned int *)(a1 + 180));
    goto LABEL_22;
  }
  v16 = v77;
  v17 = QT::QAbstractScrollArea::viewport(v77);
  v18 = *(_QWORD *)(v17 + 32);
  v23 = (double *)sub_1EA6C0(
                    (__int64)v16 + 384,
                    (__int64)&v77,
                    (unsigned int)(*(_DWORD *)(v18 + 28) + 1 - *(_DWORD *)(v18 + 20)),
                    *(unsigned int *)(v18 + 28),
                    v19,
                    v20,
                    (__m128)0LL,
                    v15,
                    a4,
                    a5,
                    v21,
                    v22,
                    a8,
                    a9,
                    v68,
                    *(_DWORD *)(v18 + 28) + 1 - *(_DWORD *)(v18 + 20),
                    v70,
                    v73,
                    v75,
                    v76,
                    (__int64)v77,
                    v78,
                    v79,
                    v80,
                    v81,
                    SLODWORD(v82),
                    v83.m128i_i64[0]);
  v24 = *v23;
  v25 = v69;
  v26 = v71;
  if ( *v23 <= 0.0 )
  {
    v30 = *(double *)(a1 + 104);
    v27 = *(double *)(a1 + 120);
    v28 = *(double *)(a1 + 112);
    if ( v30 == 1.0 )
    {
      v34 = (int)v27;
      v35 = (int)v28;
      v32 = _mm_cvtsi32_si128(-(int)v27);
      v33 = _mm_cvtsi32_si128(-(int)v28);
      goto LABEL_9;
    }
    v31 = 0;
    v29 = 0;
LABEL_26:
    v32 = _mm_cvtsi32_si128((int)(((double)v29 - v27) * v30));
    v33 = _mm_cvtsi32_si128((int)(((double)v31 - v28) * v30));
    if ( v24 <= 0.0 )
      goto LABEL_27;
    goto LABEL_7;
  }
  v27 = *(double *)(a1 + 120);
  v28 = *(double *)(a1 + 112);
  v29 = (int)(v23[2] + 0.0);
  v30 = *(double *)(a1 + 104);
  v31 = (int)(v23[1] + 0.0);
  if ( v30 != 1.0 )
    goto LABEL_26;
  v32 = _mm_cvtsi32_si128(v29 - (int)v27);
  v33 = _mm_cvtsi32_si128(v31 - (int)v28);
LABEL_7:
  v26 = (int)((double)v71 / v24 + v23[2]);
  v25 = (int)((double)v69 / v24 + v23[1]);
  if ( v30 == 1.0 )
  {
    v34 = (int)v27;
    v35 = (int)v28;
LABEL_9:
    v36 = v26 - v34;
    v37 = _mm_cvtsi32_si128(v25 - v35);
    goto LABEL_10;
  }
LABEL_27:
  v36 = (int)(((double)v26 - v27) * v30);
  v37 = _mm_cvtsi32_si128((int)(((double)v25 - v28) * v30));
LABEL_10:
  v38 = _mm_unpacklo_epi64(_mm_unpacklo_epi32(v33, v32), _mm_unpacklo_epi32(v37, _mm_cvtsi32_si128(v36)));
  *(__m128i *)(a1 + 128) = v38;
  if ( (unsigned int)reg_int_op("GraphOverviewGradient", 0, 1, 0) )
  {
    (*(void (__fastcall **)(_QWORD *, __int64, __int64))(*v14 + 776LL))(v14, a1 + 176, a1 + 180);
    v39 = (__m128i *)&v81;
    sub_2B8320(&v76, &v81, *(unsigned int *)(a1 + 176), *(unsigned int *)(a1 + 180));
  }
  else
  {
    v66 = *(_QWORD *)(v17 + 32);
    v38 = _mm_loadl_epi64((const __m128i *)(v66 + 28));
    v67 = _mm_loadl_epi64((const __m128i *)(v66 + 20));
    v87.m128i_i64[0] = 0;
    v38.m128i_i64[0] = _mm_sub_epi32(v38, v67).m128i_u64[0];
    v87.m128i_i64[1] = v38.m128i_i64[0];
    QT::QColor::QColor(&v90, 3);
    v39 = &v87;
    QT::QPainter::fillRect(&v76, &v87, &v90);
  }
  v42 = v14[55];
  if ( v42 && *(_QWORD *)(v42 + 8) )
  {
    v43 = (const __m128i *)sub_1EA6A0((__int64)v16 + 384, (__int64)v39, v40, v41, *(double *)v38.m128i_i64);
    v87 = _mm_loadu_si128(v43);
    v88 = _mm_loadu_si128(v43 + 1);
    v44 = _mm_loadu_si128((const __m128i *)(a1 + 104));
    v89 = v43[2].m128i_i64[0];
    v45 = *(_QWORD *)(a1 + 120);
    v87 = v44;
    v88.m128i_i64[0] = v45;
    v46 = (__m128i *)sub_2BA830(v14, &v81, &v87, 1, 0);
    sub_2015F0((__int64)v16, v46, v47, v48, *(double *)v44.m128i_i64);
    QT::QPainter::save((QT::QPainter *)&v76);
    QT::QPainter::setTransform((QT::QPainter *)&v76, (const QT::QTransform *)&v46[10].m128i_u64[1], 0);
    sub_2C76F0(v14, &v76, v46);
    QT::QPainter::restore((QT::QPainter *)&v76);
    v49 = *(_DWORD *)(a1 + 128);
    if ( v49 != 0x7FFFFFFF )
    {
      v83 = _mm_unpacklo_epi64(
              _mm_unpacklo_epi32(_mm_cvtsi32_si128(v49), _mm_cvtsi32_si128(*(_DWORD *)(a1 + 132))),
              _mm_unpacklo_epi32(
                _mm_cvtsi32_si128(*(_DWORD *)(a1 + 136) - 1),
                _mm_cvtsi32_si128(*(_DWORD *)(a1 + 140) - 1)));
      v50 = QT::QPainter::viewport((QT::QPainter *)&v76);
      v86 = v51;
      v85 = v50;
      QT::QRegion::QRegion(&v78, &v85, 0);
      QT::QRegion::QRegion(&v85, &v83, 0);
      QT::QRegion::subtracted((QT::QRegion *)&v79, (const QT::QRegion *)&v78);
      QT::QRegion::~QRegion((QT::QRegion *)&v85);
      v52 = QT::QPainter::viewport((QT::QPainter *)&v76);
      v72 = v53 + 1 - v52;
      v54 = QT::QPainter::viewport((QT::QPainter *)&v76) >> 32;
      v56 = (v83.m128i_i32[2] + 1 - v83.m128i_i32[0]) * (v83.m128i_i32[3] + 1 - v83.m128i_i32[1]);
      v74 = v55 + 1 - v54;
      if ( !v56 || (int)((v55 + 1 - v54) * v72) / v56 > 15 )
      {
        QT::QPainter::setClipRegion(&v76, &v79, 1);
        QT::QPainter::setClipping((QT::QPainter *)&v76, 1);
        v57 = sub_524F80(a1 + 40, 2165563905LL, 0);
        v90 = QT::QColor::fromRgba((QT::QColor *)(unsigned int)__ROR4__(_byteswap_ulong(v57), 8), 0x8113E201);
        v91 = v58;
        QT::QPainter::setPen((QT::QPainter *)&v76, (const QT::QColor *)&v90);
        v84[1] = 0;
        v84[0] = (v83.m128i_i32[2] + (__int64)v83.m128i_i32[0]) / 2;
        v84[2] = v84[0];
        v84[3] = v74;
        QT::QPainter::drawLines(&v76, v84, 1);
        LODWORD(v85) = 0;
        LODWORD(v86) = v72;
        HIDWORD(v85) = (v83.m128i_i32[3] + (__int64)v83.m128i_i32[1]) / 2;
        HIDWORD(v86) = HIDWORD(v85);
        QT::QPainter::drawLines(&v76, &v85, 1);
        QT::QRegion::QRegion(&v80, (v83.m128i_i32[2] + (__int64)v83.m128i_i32[0]) / 2, 0, 1, v74, 0);
        QT::QRegion::QRegion(v84, 0, (v83.m128i_i32[3] + (__int64)v83.m128i_i32[1]) / 2, v72, 1, 0);
        QT::QRegion::subtracted((QT::QRegion *)&v85, (const QT::QRegion *)&v79);
        v59 = v79;
        v79 = v85;
        v85 = v59;
        QT::QRegion::~QRegion((QT::QRegion *)&v85);
        QT::QRegion::subtracted((QT::QRegion *)&v85, (const QT::QRegion *)&v79);
        v60 = v79;
        v79 = v85;
        v85 = v60;
        QT::QRegion::~QRegion((QT::QRegion *)&v85);
        QT::QRegion::~QRegion((QT::QRegion *)v84);
        QT::QRegion::~QRegion((QT::QRegion *)&v80);
      }
      QT::QPainter::setClipRegion(&v76, &v79, 1);
      QT::QPainter::setClipping((QT::QPainter *)&v76, 1);
      v61 = sub_524F80(a1 + 40, 2165563904LL, 0);
      v90 = QT::QColor::fromRgba((QT::QColor *)(unsigned int)__ROR4__(_byteswap_ulong(v61), 8), 0x8113E200);
      v91 = v62;
      v63 = QT::QPainter::viewport((QT::QPainter *)&v76);
      v86 = v64;
      v85 = v63;
      QT::QPainter::fillRect(&v76, &v85, &v90);
      QT::QRegion::~QRegion((QT::QRegion *)&v79);
      QT::QRegion::~QRegion((QT::QRegion *)&v78);
    }
    if ( v46 )
      (*(void (__fastcall **)(__m128i *))(v46->m128i_i64[0] + 8))(v46);
  }
LABEL_22:
  QT::QPainter::~QPainter((QT::QPainter *)&v76);
  return v92 - __readfsqword(0x28u);
}
