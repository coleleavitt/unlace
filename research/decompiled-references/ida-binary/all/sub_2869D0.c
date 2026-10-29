unsigned __int64 __fastcall sub_2869D0(__int64 a1, QT::QPainter *a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rdi
  unsigned int v8; // eax
  __int64 v9; // rax
  __int64 v10; // rdx
  __m128i v11; // xmm1
  int v12; // eax
  QT::QAbstractScrollArea *v13; // rdi
  int v14; // ebx
  __int64 v15; // rdx
  __int64 v16; // rcx
  double v17; // xmm1_8
  int v18; // eax
  __m128i v19; // xmm0
  __int64 v20; // rdi
  _QWORD *v21; // rbx
  int v22; // ecx
  int v23; // edi
  __int64 i; // rbx
  QT::QAbstractSlider *v25; // rax
  int v26; // eax
  double v27; // xmm0_8
  double v28; // xmm2_8
  double v29; // xmm0_8
  _QWORD *v30; // rax
  __m128i *v31; // rbx
  int j; // r13d
  __int64 v33; // r12
  __int64 v34; // rax
  __int64 v35; // rsi
  __int16 v37; // [rsp+1Ah] [rbp-226h]
  double v38; // [rsp+30h] [rbp-210h]
  double v39; // [rsp+38h] [rbp-208h]
  double v40; // [rsp+40h] [rbp-200h]
  QT::QWidget *v41; // [rsp+40h] [rbp-200h]
  _OWORD v43[2]; // [rsp+50h] [rbp-1F0h] BYREF
  __int64 v44; // [rsp+70h] [rbp-1D0h] BYREF
  __int128 v45; // [rsp+78h] [rbp-1C8h]
  __m128i v46; // [rsp+90h] [rbp-1B0h] BYREF
  __m128i v47; // [rsp+A0h] [rbp-1A0h]
  __m128i v48; // [rsp+B0h] [rbp-190h]
  __m128i v49; // [rsp+C0h] [rbp-180h]
  _BYTE v50[16]; // [rsp+D0h] [rbp-170h] BYREF
  _BYTE v51[8]; // [rsp+E0h] [rbp-160h] BYREF
  __int64 v52; // [rsp+E8h] [rbp-158h]
  __m128i v53; // [rsp+F0h] [rbp-150h]
  __m128i v54; // [rsp+100h] [rbp-140h]
  __m128i v55; // [rsp+110h] [rbp-130h]
  __m128i v56; // [rsp+120h] [rbp-120h]
  _BYTE v57[64]; // [rsp+130h] [rbp-110h] BYREF
  _BYTE v58[16]; // [rsp+170h] [rbp-D0h] BYREF
  _BYTE v59[104]; // [rsp+180h] [rbp-C0h] BYREF
  __int64 v60; // [rsp+1E8h] [rbp-58h]
  _QWORD v61[3]; // [rsp+1F0h] [rbp-50h] BYREF
  unsigned __int64 v62; // [rsp+208h] [rbp-38h]

  v6 = *(_QWORD *)(a1 + 16);
  v62 = __readfsqword(0x28u);
  v8 = sub_1EC7E0(v6);
  v9 = QT::QColor::fromRgba((QT::QColor *)(unsigned int)__ROR4__(_byteswap_ulong(v8), 8), (unsigned int)a2);
  v61[1] = v10;
  v61[0] = v9;
  QT::QPainter::fillRect(a2, a3, v61);
  v11 = _mm_loadl_epi64((const __m128i *)a3);
  v43[0] = _mm_cvtepi32_pd(v11);
  v43[1] = _mm_cvtepi32_pd(
             _mm_sub_epi32(
               _mm_add_epi32(
                 _mm_loadl_epi64((const __m128i *)(a3 + 8)),
                 _mm_loadl_epi64((const __m128i *)&qword_5DBD90)),
               v11));
  v46 = _mm_loadu_si128((const __m128i *)(a4 + 8));
  v47 = _mm_loadu_si128((const __m128i *)(a4 + 24));
  v48 = _mm_loadu_si128((const __m128i *)(a4 + 40));
  v49 = _mm_loadu_si128((const __m128i *)(a4 + 56));
  QT::QFont::QFont((QT::QFont *)v50, (const QT::QFont *)(a4 + 72));
  QT::QFontMetricsF::QFontMetricsF((QT::QFontMetricsF *)v51, (const QT::QFontMetricsF *)(a4 + 88));
  v12 = *(_DWORD *)(a3 + 8);
  v13 = *(QT::QAbstractScrollArea **)(a1 + 16);
  v52 = *(_QWORD *)(a4 + 96);
  v14 = v12 + 1 - *(_DWORD *)a3;
  v53 = _mm_loadu_si128((const __m128i *)(a4 + 104));
  v54 = _mm_loadu_si128((const __m128i *)(a4 + 120));
  v55 = _mm_loadu_si128((const __m128i *)(a4 + 136));
  v38 = *(double *)&v54.m128i_i64[1];
  v56 = _mm_loadu_si128((const __m128i *)(a4 + 152));
  v15 = *(_QWORD *)(QT::QAbstractScrollArea::viewport(v13) + 32LL);
  v46 = 0;
  v17 = 0.0;
  v18 = *(_DWORD *)(v15 + 28) + 1 - *(_DWORD *)(v15 + 20);
  v48 = 0;
  if ( v18 < v14 )
    v18 = v14;
  *(double *)v19.m128i_i64 = (double)v18;
  v20 = *(_QWORD *)(a1 + 16) + 384LL;
  *(double *)&v19.m128i_i64[1] = v38;
  v47 = v19;
  v49 = v19;
  v21 = (_QWORD *)a1;
  v37 = *(_WORD *)(sub_1EA6A0(v20, a4 + 88, v15, v16, (double)v18) + 30);
  sub_283F90((__int64)v57, a1);
  v22 = *(_DWORD *)(a1 + 424);
  v23 = (v21[52] == 0)
      + -252645135 * ((__int64)(v21[47] - v21[45]) >> 4)
      + ((__int64)(v21[52] - v21[48]) >> 3)
      - 252645135 * ((__int64)(v21[49] - v21[50]) >> 4)
      - 1
      - v22;
  if ( (v21[52] == 0)
     + 0xF0F0F0F0F0F0F0F1LL * ((__int64)(v21[47] - v21[45]) >> 4)
     + ((__int64)(v21[52] - v21[48]) >> 3)
     - 0xF0F0F0F0F0F0F0FLL * ((__int64)(v21[49] - v21[50]) >> 4)
     - 1 >= v22 + (int)v60 )
    v23 = v60;
  if ( v23 <= 0 )
  {
    v31 = *(__m128i **)(*(_QWORD *)(a1 + 16) + 768LL);
    if ( !v31 )
      goto LABEL_21;
    v44 = 0;
    v45 = 0;
    goto LABEL_19;
  }
  for ( i = 0; i != v23; sub_202690(v41, a2, v30, a4, (__int64)&v46, v37 == i++, a4 + 248, -1) )
  {
    while ( 1 )
    {
      *(double *)&v46.m128i_i64[1] = (double)(int)i * v38;
      v48.m128i_i64[1] = v46.m128i_i64[1];
      QT::QRectF::operator&(&v44, &v46, v43);
      v39 = *(double *)&v44;
      v40 = *((double *)&v45 + 1);
      v25 = (QT::QAbstractSlider *)QT::QAbstractScrollArea::horizontalScrollBar(*(QT::QAbstractScrollArea **)(a1 + 16));
      v26 = QT::QAbstractSlider::value(v25);
      v17 = 0.0;
      if ( v40 + v39 != 0.0 )
        break;
      if ( v23 == ++i )
        goto LABEL_10;
    }
    v27 = -(double)v26;
    v28 = v27 - *(double *)v46.m128i_i64;
    v41 = *(QT::QWidget **)(a1 + 16);
    *(double *)v46.m128i_i64 = *(double *)v46.m128i_i64 + v27 - *(double *)v46.m128i_i64;
    *(double *)v47.m128i_i64 = *(double *)v47.m128i_i64 - v28;
    v29 = v27 - *(double *)v48.m128i_i64;
    *(double *)v48.m128i_i64 = *(double *)v48.m128i_i64 + v29;
    v17 = *(double *)v49.m128i_i64 - v29;
    *(double *)v49.m128i_i64 = *(double *)v49.m128i_i64 - v29;
    v30 = (_QWORD *)sub_284860(a1, i);
  }
LABEL_10:
  v31 = *(__m128i **)(*(_QWORD *)(a1 + 16) + 768LL);
  if ( v31 )
  {
    v45 = 0;
    v44 = 0;
    v44 = qvector_reserve(&v44, 0, v23, 8);
    for ( j = 0; j != v23; ++j )
    {
      v33 = sub_284860(a1, j);
      if ( v33 )
      {
        v34 = v45;
        v35 = v44;
        if ( *((_QWORD *)&v45 + 1) < (unsigned __int64)(v45 + 1) )
        {
          v44 = qvector_reserve(&v44, v44, v45 + 1, 8);
          v35 = v44;
          v34 = v45;
        }
        *(_QWORD *)(v35 + 8 * v34) = v33;
        *(_QWORD *)&v45 = v45 + 1;
      }
    }
LABEL_19:
    sub_27FA00(v31, (__int64)&v44);
    if ( v44 )
    {
      *(_QWORD *)&v45 = 0;
      qfree(v44, (const char *)&v44, 0.0, v17);
    }
  }
LABEL_21:
  QT::QFontMetricsF::~QFontMetricsF((QT::QFontMetricsF *)v59);
  QT::QFont::~QFont((QT::QFont *)v58);
  QT::QFontMetricsF::~QFontMetricsF((QT::QFontMetricsF *)v51);
  QT::QFont::~QFont((QT::QFont *)v50);
  return v62 - __readfsqword(0x28u);
}
