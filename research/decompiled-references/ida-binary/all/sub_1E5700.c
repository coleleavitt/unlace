unsigned __int64 __fastcall sub_1E5700(_QWORD *a1)
{
  __int64 v1; // rax
  QT::QAbstractScrollArea *v2; // rbx
  __int64 v3; // r15
  unsigned int v5; // eax
  __int64 v6; // rax
  __int64 v7; // rdx
  __m128i v8; // xmm0
  __m128i v9; // xmm1
  unsigned int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rsi
  int v15; // rax^4
  __int64 v16; // rcx
  __int64 v17; // rax
  int v18; // edx
  bool v19; // zf
  __m128d v20; // xmm7
  _QWORD *v21; // rbx
  __int64 v22; // rdx
  int v23; // eax
  int v25; // eax
  __int64 v26; // xmm0_8^8
  __m128i v27; // xmm1
  unsigned __int64 v28; // rdx
  __int64 v29; // rdx
  __m128i si128; // xmm0
  __m128i v31; // xmm1
  int v32; // esi
  int v33; // ecx
  int v34; // edx
  int v35; // esi
  const QT::QChar *v36; // rdx
  __int64 v37; // rax
  __int64 v38; // rdi
  unsigned int v39; // [rsp+Ch] [rbp-16Ch]
  double v40; // [rsp+10h] [rbp-168h]
  double v41; // [rsp+18h] [rbp-160h]
  int v42; // [rsp+38h] [rbp-140h]
  int v43; // [rsp+3Ch] [rbp-13Ch]
  bool v44; // [rsp+67h] [rbp-111h] BYREF
  int v45; // [rsp+68h] [rbp-110h] BYREF
  unsigned int v46; // [rsp+6Ch] [rbp-10Ch] BYREF
  _BYTE v47[8]; // [rsp+70h] [rbp-108h] BYREF
  _BYTE v48[8]; // [rsp+78h] [rbp-100h] BYREF
  void *v49[2]; // [rsp+80h] [rbp-F8h] BYREF
  __int64 v50; // [rsp+90h] [rbp-E8h]
  unsigned __int64 v51[4]; // [rsp+A0h] [rbp-D8h] BYREF
  __m128d v52; // [rsp+C0h] [rbp-B8h] BYREF
  __m128d v53; // [rsp+D0h] [rbp-A8h] BYREF
  void *v54[2]; // [rsp+E0h] [rbp-98h] BYREF
  double v55; // [rsp+F0h] [rbp-88h]
  __int64 v56; // [rsp+F8h] [rbp-80h]
  void *ptr[2]; // [rsp+100h] [rbp-78h] BYREF
  __int64 v58[2]; // [rsp+110h] [rbp-68h]
  __int64 v59; // [rsp+120h] [rbp-58h] BYREF
  __int64 v60; // [rsp+128h] [rbp-50h]
  unsigned __int64 v61; // [rsp+138h] [rbp-40h]

  v61 = __readfsqword(0x28u);
  v1 = a1[5];
  if ( !*(_BYTE *)(v1 + 64) )
  {
    v2 = *(QT::QAbstractScrollArea **)(v1 + 56);
    if ( v2 )
    {
      v3 = *((_QWORD *)v2 + 111);
      if ( v3 )
      {
        QT::QPainter::QPainter((QT::QPainter *)v47, (QT::QPaintDevice *)(a1 + 2));
        v5 = sub_1EC7E0(v2);
        v59 = QT::QColor::fromRgb((QT::QColor *)(unsigned int)__ROR4__(_byteswap_ulong(v5), 8), (int)a1 + 16);
        v6 = a1[4];
        v60 = v7;
        v8 = _mm_loadl_epi64((const __m128i *)(v6 + 28));
        v9 = _mm_loadl_epi64((const __m128i *)(v6 + 20));
        ptr[0] = nullptr;
        ptr[1] = (void *)_mm_sub_epi32(v8, v9).m128i_u64[0];
        QT::QPainter::fillRect(v47, ptr, &v59);
        v10 = sub_1737B0((__int64)v2, 4u);
        v59 = QT::QColor::fromRgb((QT::QColor *)(unsigned int)__ROR4__(_byteswap_ulong(v10), 8), 4u);
        v60 = v11;
        QT::QPainter::setPen((QT::QPainter *)v47, (const QT::QColor *)&v59);
        v41 = sub_2856C0(v3, &v59);
        v12 = QT::QAbstractScrollArea::viewport(v2);
        v43 = (int)((double)(*(_DWORD *)(*(_QWORD *)(v12 + 32) + 32LL) + 1 - *(_DWORD *)(*(_QWORD *)(v12 + 32) + 24LL))
                  / v41);
        v13 = QT::QAbstractScrollArea::viewport(v2);
        v14 = a1[5];
        ptr[0] = nullptr;
        v15 = (unsigned __int64)QT::QWidget::mapTo(v13, v14, ptr) >> 32;
        v16 = a1[4];
        *(double *)v9.m128i_i64 = (double)v15;
        v17 = a1[5];
        v52.m128d_f64[0] = 0.0;
        v18 = *(_DWORD *)(v16 + 28) - 1 - *(_DWORD *)(v16 + 20);
        v19 = *(_BYTE *)(v17 + 64) == 0;
        v53.m128d_f64[1] = v41;
        *(_QWORD *)&v52.m128d_f64[1] = v9.m128i_i64[0];
        v53.m128d_f64[0] = (double)v18;
        if ( v19 && (v37 = *(_QWORD *)(v17 + 56)) != 0 && (v38 = *(_QWORD *)(v37 + 888)) != 0 )
          v39 = (int)sub_2856C0(v38, v14);
        else
          v39 = 0;
        v50 = 0;
        v42 = 0;
        *(_OWORD *)v49 = 0;
        v40 = 0.0;
        if ( v43 > 0 )
        {
          v20.m128d_f64[0] = 0.0;
          v20.m128d_f64[1] = v41;
          do
          {
            v21 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v3 + 184LL))(
                              v3,
                              0,
                              (unsigned int)(int)v40);
            if ( *v21 )
            {
              v22 = a1[5];
              v23 = *(_DWORD *)(v22 + 220);
              if ( (v23 & 1) == 0 )
              {
                if ( (unsigned __int8)sub_1E4890((__int64)a1, v51, v21) )
                {
                  QT::QString::number((QT::QString *)v54, v51[0], *(_DWORD *)(a1[5] + 232LL));
                  QT::QString::toUpper_helper((QT::QString *)ptr, (QT::QString *)v54);
                  v29 = v50;
                  si128 = _mm_load_si128((const __m128i *)v49);
                  v31 = _mm_load_si128((const __m128i *)ptr);
                  v50 = v58[0];
                  v58[0] = v29;
                  *(__m128i *)v49 = v31;
                  *(__m128i *)ptr = si128;
                  if ( si128.m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)si128.m128i_i64[0], 1u) )
                    free(ptr[0]);
                  if ( v54[0] && !_InterlockedSub((volatile signed __int32 *)v54[0], 1u) )
                    free(v54[0]);
                  v32 = *(_DWORD *)(a1[5] + 240LL);
                  if ( v32 )
                  {
                    v33 = v50;
                    v34 = (int)v50 % v32;
                    v35 = v50 + v32 - (int)v50 % v32;
                    if ( v34 )
                      v33 = v35;
                    QT::QString::QString(ptr, v33 - v50, 48);
                    v36 = (const QT::QChar *)ptr[1];
                    if ( !ptr[1] )
                      v36 = (const QT::QChar *)&QT::QString::_empty;
                    QT::QString::insert((QT::QString *)v49, 0, v36, v58[0]);
                    if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
                      free(ptr[0]);
                  }
                  QT::QPainter::drawText(v47, &v52, 130, v49, 0);
                }
                v22 = a1[5];
                v23 = *(_DWORD *)(v22 + 220);
              }
              if ( (v23 & 2) != 0 && *(_QWORD *)(v22 + 200) )
              {
                v45 = 0;
                do
                {
                  if ( (unsigned __int8)sub_1E4ED0((__int64)a1, (int *)&v46, &v44, (__int64)&v45, v21) )
                  {
                    v25 = v45 * (v39 + 2);
                    *(__m128i *)v54 = _mm_load_si128((const __m128i *)&v52);
                    v26 = _mm_load_si128((const __m128i *)&v53).m128i_i64[1];
                    ++v45;
                    v56 = v26;
                    v25 += 3;
                    *(double *)v54 = (double)v25 - *(double *)v54 + *(double *)v54;
                    v55 = (double)(int)(v39 + v25) - *(double *)v54;
                    (*(void (__fastcall **)(_BYTE *, _QWORD *, _QWORD))(*QT::QCoreApplication::self + 136LL))(
                      v48,
                      QT::QCoreApplication::self,
                      v46);
                    if ( !(unsigned __int8)QT::QIcon::isNull((QT::QIcon *)v48) )
                    {
                      ptr[0] = (void *)_mm_shuffle_epi32(_mm_cvtsi32_si128(v39), 224).m128i_u64[0];
                      QT::QIcon::pixmap(v51, v48, ptr, 0, 1);
                      v27 = (__m128i)(unsigned __int64)QT::QPixmap::rect((QT::QPixmap *)v51);
                      *(__m128d *)ptr = _mm_cvtepi32_pd(v27);
                      *(__m128d *)v58 = _mm_cvtepi32_pd(
                                          _mm_sub_epi32(
                                            _mm_add_epi32((__m128i)v28, _mm_loadl_epi64((const __m128i *)&qword_5DBD90)),
                                            v27));
                      QT::QPainter::drawPixmap(v47, v54, v51, ptr);
                      QT::QPixmap::~QPixmap((QT::QPixmap *)v51);
                    }
                    QT::QIcon::~QIcon((QT::QIcon *)v48);
                  }
                }
                while ( v44 );
              }
              v53 = _mm_add_pd(_mm_unpacklo_pd((__m128d)0LL, (__m128d)COERCE_UNSIGNED_INT64(v41 - v41)), v53);
              v52 = _mm_add_pd(v20, v52);
            }
            ++v42;
            v40 = v40 + v41;
          }
          while ( v43 != v42 );
          if ( v49[0] && !_InterlockedSub((volatile signed __int32 *)v49[0], 1u) )
            free(v49[0]);
        }
        QT::QPainter::~QPainter((QT::QPainter *)v47);
      }
    }
  }
  return v61 - __readfsqword(0x28u);
}
