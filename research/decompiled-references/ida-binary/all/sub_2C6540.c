unsigned __int64 __fastcall sub_2C6540(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        const __m128i *a5,
        signed int a6)
{
  int v6; // edx
  __int32 v7; // eax
  bool v8; // sf
  int v9; // eax
  int v10; // ebx
  int v11; // ebx
  signed int v15; // ebx
  __int64 v16; // rax
  signed int v17; // ecx
  __int64 v18; // rdx
  int *v19; // r8
  __int64 v20; // rdi
  __int64 v21; // rsi
  unsigned int v22; // r12d
  __int64 v23; // rax
  int *v24; // rsi
  __int64 v25; // rcx
  __int64 v26; // rdx
  int *v27; // r14
  __int64 v28; // rax
  int v29; // edi
  unsigned int v30; // eax
  __m128i v31; // xmm6
  __m128i v32; // xmm2
  int *v33; // r14
  __m128i v34; // xmm1
  __m128i v35; // xmm0
  __int32 v36; // eax
  unsigned int v37; // ecx
  unsigned int v38; // edx
  int v39; // eax
  __m128i v40; // xmm0
  __int32 v41; // edx
  __int32 v42; // ebx
  __m128d v43; // xmm1
  __m128i v44; // xmm2
  __m128i v45; // xmm0
  __int32 v46; // edx
  __int32 v47; // esi
  signed int v49; // [rsp+3Ch] [rbp-1ECh] BYREF
  _BYTE v50[8]; // [rsp+40h] [rbp-1E8h] BYREF
  signed int *v51; // [rsp+48h] [rbp-1E0h] BYREF
  _QWORD v52[2]; // [rsp+50h] [rbp-1D8h] BYREF
  _DWORD v53[4]; // [rsp+60h] [rbp-1C8h] BYREF
  _DWORD v54[4]; // [rsp+70h] [rbp-1B8h] BYREF
  _BYTE v55[32]; // [rsp+80h] [rbp-1A8h] BYREF
  _BYTE v56[96]; // [rsp+A0h] [rbp-188h] BYREF
  __m128d v57; // [rsp+100h] [rbp-128h] BYREF
  __m128d v58; // [rsp+110h] [rbp-118h]
  __m128d v59; // [rsp+160h] [rbp-C8h] BYREF
  __m128d v60; // [rsp+170h] [rbp-B8h]
  _BYTE v61[16]; // [rsp+1C0h] [rbp-68h] BYREF
  int v62; // [rsp+1D0h] [rbp-58h] BYREF
  __int64 v63; // [rsp+1D4h] [rbp-54h]
  __int16 v64; // [rsp+1DCh] [rbp-4Ch]
  unsigned __int64 v65; // [rsp+1E8h] [rbp-40h]

  v65 = __readfsqword(0x28u);
  v6 = a5->m128i_i32[3] - a5->m128i_i32[1];
  v7 = v6 - a5->m128i_i32[0];
  v8 = a5->m128i_i32[2] + v7 < 0;
  v9 = a5->m128i_i32[2] + v7;
  v10 = v9 + 15;
  if ( !v8 )
    v10 = v9;
  v11 = v10 >> 4;
  v49 = v11;
  if ( v9 > 31 && v6 <= 0x8000 )
  {
    if ( v11 > a6 )
    {
      v49 = a6;
      v11 = a6;
    }
    v15 = 2 * v11;
    if ( !(_BYTE)byte_8CCA28 && __cxa_guard_acquire(&byte_8CCA28) )
    {
      dword_8CCA48 = 0;
      qword_8CCA50 = 0;
      qword_8CCA58 = (__int64)&dword_8CCA48;
      qword_8CCA60 = (__int64)&dword_8CCA48;
      qword_8CCA68 = 0;
      __cxa_atexit(sub_2C7B00, &dword_8CCA48 - 2, &off_85BC80);
      __cxa_guard_release(&byte_8CCA28);
    }
    v16 = qword_8CCA50;
    v17 = v49;
    if ( qword_8CCA50 )
    {
      v18 = qword_8CCA50;
      v19 = &dword_8CCA48;
      do
      {
        while ( 1 )
        {
          v20 = *(_QWORD *)(v18 + 16);
          v21 = *(_QWORD *)(v18 + 24);
          if ( *(_DWORD *)(v18 + 32) < v49 )
            break;
          v19 = (int *)v18;
          v18 = *(_QWORD *)(v18 + 16);
          if ( !v20 )
            goto LABEL_13;
        }
        v18 = *(_QWORD *)(v18 + 24);
      }
      while ( v21 );
LABEL_13:
      if ( v19 != &dword_8CCA48 && v49 >= v19[8] )
      {
LABEL_30:
        v29 = v17;
        v27 = &dword_8CCA48;
        do
        {
          if ( *(_DWORD *)(v16 + 32) >= v17 )
          {
            v27 = (int *)v16;
            v16 = *(_QWORD *)(v16 + 16);
          }
          else
          {
            v16 = *(_QWORD *)(v16 + 24);
          }
        }
        while ( v16 );
        if ( v27 != &dword_8CCA48 )
        {
          if ( v17 >= v27[8] )
          {
LABEL_28:
            v30 = a5->m128i_i32[2] + ~v15;
            v31 = _mm_cvtsi32_si128(a5->m128i_i32[3] + v29);
            v32 = _mm_shuffle_epi32(_mm_loadu_si128(a5), 204);
            v33 = v27 + 10;
            v59.m128d_f64[1] = 0.0;
            v60.m128d_f64[1] = (double)v29;
            v60.m128d_f64[0] = 1.0;
            v59.m128d_f64[0] = (double)v15;
            v34 = _mm_unpacklo_epi64(
                    _mm_unpacklo_epi32(_mm_cvtsi32_si128(v15), _mm_cvtsi32_si128(0xFFFFFFFF)),
                    _mm_unpacklo_epi32(_mm_cvtsi32_si128(v30), v31));
            v35 = (__m128i)_mm_shuffle_ps((__m128)_mm_add_epi32(v32, v34), (__m128)_mm_sub_epi32(v34, v32), 228);
            v57 = _mm_cvtepi32_pd(v35);
            v58 = _mm_cvtepi32_pd(_mm_shuffle_epi32(v35, 238));
            QT::QPainter::drawImage(a2, &v57, v33, &v59, 0);
            v36 = a5->m128i_i32[1];
            v37 = a5->m128i_i32[2] - 1;
            v38 = v15 + v36;
            v39 = a5->m128i_i32[3] + ~v36;
            v59.m128d_f64[0] = 0.0;
            v40 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v37), _mm_cvtsi32_si128(v38));
            v59.m128d_f64[1] = (double)v15;
            v60.m128d_f64[0] = (double)v49;
            v57 = _mm_cvtepi32_pd(v40);
            v60.m128d_f64[1] = 1.0;
            v58 = _mm_cvtepi32_pd(
                    _mm_shuffle_epi32(
                      _mm_unpacklo_epi64(v40, _mm_unpacklo_epi32(_mm_cvtsi32_si128(v49), _mm_cvtsi32_si128(v39 - v15))),
                      238));
            QT::QPainter::drawImage(a2, &v57, v33, &v59, 0);
            v41 = a5->m128i_i32[3];
            v42 = a5->m128i_i32[0];
            v59.m128d_f64[0] = 0.0;
            v59.m128d_f64[1] = (double)v49;
            v57 = _mm_cvtepi32_pd(_mm_unpacklo_epi32(_mm_cvtsi32_si128(v49 + v42), _mm_cvtsi32_si128(v41 - 1)));
            v60.m128d_f64[0] = (double)v49;
            v60.m128d_f64[1] = (double)v49;
            v58.m128d_f64[0] = (double)v49;
            v58.m128d_f64[1] = (double)v49;
            QT::QPainter::drawImage(a2, &v57, v33, &v59, 0);
            v43 = 0;
            v43.m128d_f64[0] = (double)v49;
            v44 = _mm_cvtsi32_si128(v49);
            v45 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(a5->m128i_i32[2] - 1), _mm_cvtsi32_si128(a5->m128i_i32[3] - 1));
            v59 = _mm_unpacklo_pd(v43, v43);
            v60 = v59;
            v57 = _mm_cvtepi32_pd(v45);
            v58 = _mm_cvtepi32_pd(_mm_shuffle_epi32(_mm_unpacklo_epi64(v45, _mm_unpacklo_epi32(v44, v44)), 238));
            QT::QPainter::drawImage(a2, &v57, v33, &v59, 0);
            v46 = a5->m128i_i32[2];
            v47 = a5->m128i_i32[1];
            v59.m128d_f64[1] = 0.0;
            v59.m128d_f64[0] = (double)v49;
            v57 = _mm_cvtepi32_pd(_mm_unpacklo_epi32(_mm_cvtsi32_si128(v46 - 1), _mm_cvtsi32_si128(v49 + v47)));
            v60.m128d_f64[0] = (double)v49;
            v60.m128d_f64[1] = (double)v49;
            v58.m128d_f64[1] = (double)v49;
            v58.m128d_f64[0] = (double)v49;
            QT::QPainter::drawImage(a2, &v57, v33, &v59, 0);
            return v65 - __readfsqword(0x28u);
          }
LABEL_27:
          *(_QWORD *)&v59.m128d_f64[0] = &v49;
          v28 = sub_2C63C0(&qword_8CCA40, (__int64)v27, (__int64)&unk_5E5D70, &v59);
          v29 = v49;
          v27 = (int *)v28;
          goto LABEL_28;
        }
LABEL_24:
        v27 = &dword_8CCA48;
        goto LABEL_27;
      }
    }
    QT::QImage::QImage(v55, (unsigned int)(v15 + 1), (unsigned int)(v15 + 1), 6);
    v62 = 1;
    v64 = 0;
    v63 = 0;
    QT::QImage::fill((QT::QImage *)v55, (const QT::QColor *)&v62);
    v22 = __ROR4__(_byteswap_ulong(sub_524F80(*(_QWORD *)(a1 + 16) + 40LL, 2165563967LL, 0)), 8);
    QT::QColor::QColor((QT::QColor *)v61, v22);
    QT::QColor::setAlphaF((QT::QColor *)v61, 0.60000002);
    QT::QColor::QColor((QT::QColor *)&v62, v22);
    QT::QColor::setAlphaF((QT::QColor *)&v62, 0.0);
    QT::QPainter::QPainter((QT::QPainter *)v50, (QT::QPaintDevice *)v55);
    QT::QRadialGradient::QRadialGradient((QT::QRadialGradient *)v56, (double)v49, (double)v49, (double)v49);
    QT::QGradient::setColorAt((QT::QGradient *)v56, 0.0, (const QT::QColor *)v61);
    QT::QGradient::setColorAt((QT::QGradient *)v56, 1.0, (const QT::QColor *)&v62);
    QT::QBrush::QBrush((QT::QBrush *)&v59, (const QT::QGradient *)v56);
    v52[0] = 0;
    v52[1] = _mm_shuffle_epi32(_mm_cvtsi32_si128(v15 - 1), 224).m128i_u64[0];
    QT::QPainter::fillRect(v50, v52, &v59);
    QT::QBrush::~QBrush((QT::QBrush *)&v59);
    QT::QLinearGradient::QLinearGradient((QT::QLinearGradient *)&v57, 0.0, 0.0, 0.0, (double)v49);
    QT::QGradient::setColorAt((QT::QGradient *)&v57, 0.0, (const QT::QColor *)v61);
    QT::QGradient::setColorAt((QT::QGradient *)&v57, 1.0, (const QT::QColor *)&v62);
    QT::QBrush::QBrush((QT::QBrush *)&v59, (const QT::QGradient *)&v57);
    v53[0] = v15;
    v53[1] = 0;
    v53[2] = v15;
    v53[3] = v49 - 1;
    QT::QPainter::fillRect(v50, v53, &v59);
    QT::QBrush::~QBrush((QT::QBrush *)&v59);
    QT::QLinearGradient::QLinearGradient((QT::QLinearGradient *)&v59, 0.0, 0.0, (double)v49, 0.0);
    QT::QGradient::setColorAt((QT::QGradient *)&v59, 0.0, (const QT::QColor *)v61);
    QT::QGradient::setColorAt((QT::QGradient *)&v59, 1.0, (const QT::QColor *)&v62);
    QT::QBrush::QBrush((QT::QBrush *)v53, (const QT::QGradient *)&v59);
    v54[1] = v15;
    v54[0] = 0;
    v54[3] = v15;
    v54[2] = v49 - 1;
    QT::QPainter::fillRect(v50, v54, v53);
    QT::QBrush::~QBrush((QT::QBrush *)v53);
    v23 = qword_8CCA50;
    if ( qword_8CCA50 )
    {
      v24 = &dword_8CCA48;
      do
      {
        while ( 1 )
        {
          v25 = *(_QWORD *)(v23 + 16);
          v26 = *(_QWORD *)(v23 + 24);
          if ( *(_DWORD *)(v23 + 32) < v49 )
            break;
          v24 = (int *)v23;
          v23 = *(_QWORD *)(v23 + 16);
          if ( !v25 )
            goto LABEL_20;
        }
        v23 = *(_QWORD *)(v23 + 24);
      }
      while ( v26 );
LABEL_20:
      if ( v24 != &dword_8CCA48 && v49 >= v24[8] )
      {
LABEL_23:
        QT::QImage::operator=(v24 + 10, v55, v26);
        QT::QLinearGradient::~QLinearGradient((QT::QLinearGradient *)&v59);
        QT::QLinearGradient::~QLinearGradient((QT::QLinearGradient *)&v57);
        QT::QRadialGradient::~QRadialGradient((QT::QRadialGradient *)v56);
        QT::QPainter::~QPainter((QT::QPainter *)v50);
        QT::QImage::~QImage((QT::QImage *)v55);
        v16 = qword_8CCA50;
        v17 = v49;
        if ( !qword_8CCA50 )
          goto LABEL_24;
        goto LABEL_30;
      }
    }
    else
    {
      v24 = &dword_8CCA48;
    }
    v51 = &v49;
    v24 = (int *)sub_2C63C0(&qword_8CCA40, (__int64)v24, (__int64)&unk_5E5D70, &v51);
    goto LABEL_23;
  }
  return v65 - __readfsqword(0x28u);
}
