unsigned __int64 __fastcall sub_2AC880(
        __int64 a1,
        double a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  __int64 v11; // rdx
  __int64 v12; // rax
  size_t v13; // rdx
  size_t v14; // rax
  const char *v15; // r13
  int v16; // eax
  __int64 v17; // rax
  int v18; // edx
  int v19; // rdx^4
  int v20; // r14d
  signed int v21; // r14d
  signed int v22; // r13d
  __int64 v23; // rdi
  __m128i v24; // xmm0
  __m128 v25; // xmm1
  __m256i *p_ptr; // rsi
  __m128i v27; // xmm2
  __int64 v28; // rdx
  __m128d v29; // xmm0
  char *v30; // rcx
  int v31; // r14d
  int v32; // r15d
  const __m128i *v33; // rax
  __int64 v34; // rdi
  __int64 v35; // rax
  __m128 v36; // xmm3
  double v37; // xmm4_8
  double v38; // xmm5_8
  int v39; // eax
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // r13
  int v43; // [rsp+8h] [rbp-1F0h]
  int v44; // [rsp+24h] [rbp-1D4h]
  int v45; // [rsp+30h] [rbp-1C8h]
  unsigned int v46; // [rsp+34h] [rbp-1C4h]
  int v47; // [rsp+38h] [rbp-1C0h]
  int v48; // [rsp+3Ch] [rbp-1BCh]
  char v49[8]; // [rsp+50h] [rbp-1A8h] BYREF
  char v50[8]; // [rsp+58h] [rbp-1A0h] BYREF
  _QWORD v51[2]; // [rsp+60h] [rbp-198h] BYREF
  void *v52; // [rsp+70h] [rbp-188h] BYREF
  _BYTE v53[32]; // [rsp+90h] [rbp-168h] BYREF
  double v54; // [rsp+B0h] [rbp-148h] BYREF
  double v55; // [rsp+B8h] [rbp-140h]
  double v56; // [rsp+C0h] [rbp-138h]
  double v57; // [rsp+C8h] [rbp-130h]
  _BYTE v58[48]; // [rsp+D0h] [rbp-128h] BYREF
  _BYTE v59[24]; // [rsp+100h] [rbp-F8h] BYREF
  __int64 v60; // [rsp+118h] [rbp-E0h]
  int v61; // [rsp+120h] [rbp-D8h]
  __m256i ptr; // [rsp+130h] [rbp-C8h] BYREF
  __int64 v63; // [rsp+150h] [rbp-A8h]
  _QWORD v64[11]; // [rsp+160h] [rbp-98h] BYREF
  unsigned __int64 v65; // [rsp+1B8h] [rbp-40h]

  v65 = __readfsqword(0x28u);
  sub_2ABDD0((QT::QWidget *)v64, (__int64)qword_8CD748);
  if ( (unsigned int)sub_53AB40((QT::QWidget *)v64) == 1 )
  {
    QT::QPrinter::QPrinter(v53, 2);
    QT::QPrintDialog::QPrintDialog((QT::QPrintDialog *)v58, (QT::QPrinter *)v53, qword_8CD748);
    QT::QMetaObject::tr((QT::QMetaObject *)&ptr, (const char *)&QT::QObject::staticMetaObject, "Print graph", 0);
    QT::QWidget::setWindowTitle((QT::QWidget *)v58, (const QT::QString *)&ptr);
    if ( ptr.m256i_i64[0] && !_InterlockedSub((volatile signed __int32 *)ptr.m256i_i64[0], 1u) )
      free((void *)ptr.m256i_i64[0]);
    if ( (unsigned int)QT::QPrintDialog::exec((QT::QPrintDialog *)v58) == 1
      && (unsigned __int8)QT::QPrinter::isValid((QT::QPrinter *)v53) )
    {
      QT::QPagedPaintDevice::pageLayout((QT::QPagedPaintDevice *)&ptr);
      QT::QPageLayout::margins(&v54, &ptr, 0);
      QT::QPageLayout::~QPageLayout((QT::QPageLayout *)&ptr);
      if ( v54 == 0.0 )
        v54 = 15.0;
      if ( v56 == 0.0 )
        v56 = 15.0;
      if ( v55 == 0.0 )
        v55 = 15.0;
      if ( v57 == 0.0 )
        v57 = 15.0;
      QT::QPagedPaintDevice::setPageMargins(v53, &v54, 0, 0.0);
      v11 = *(_QWORD *)(a1 + 440);
      if ( v11 )
        v11 = *(_QWORD *)(v11 + 8);
      v12 = *(_QWORD *)(v11 + 16);
      if ( v12 )
      {
        v14 = v12 - 1;
        v15 = *(const char **)(v11 + 8);
        v13 = v14 >> 63;
      }
      else
      {
        LOBYTE(v13) = 0;
        v14 = 0;
        v15 = &s1;
      }
      if ( !v15 || (_BYTE)v13 )
      {
        v14 = 0;
        if ( v15 )
          v14 = strlen(v15);
      }
      QT::QString::fromUtf8(&v52, v14, v15);
      v43 = QT::QComboBox::currentIndex((QT::QComboBox *)v64[7]) + 1;
      v47 = QT::QComboBox::currentIndex((QT::QComboBox *)v64[8]);
      QT::QPagedPaintDevice::pageLayout((QT::QPagedPaintDevice *)&ptr);
      v16 = QT::QPrinter::resolution((QT::QPrinter *)v53);
      v17 = QT::QPageLayout::paintRectPixels((QT::QPageLayout *)&ptr, v16);
      v20 = v18 + 1 - v17;
      v48 = v20;
      v46 = v19 + 1 - HIDWORD(v17);
      QT::QPageLayout::~QPageLayout((QT::QPageLayout *)&ptr);
      v21 = (v47 + 1) * v20 - 1;
      v22 = v46 * v43 - 1;
      QT::QPainter::QPainter((QT::QPainter *)v49);
      QT::QPainter::begin((QT::QPainter *)v49, (QT::QPaintDevice *)v53);
      v23 = *(_QWORD *)(a1 + 440);
      v60 = -1;
      v61 = 0;
      memset(v59, 0, sizeof(v59));
      if ( v23 )
        v23 = *(_QWORD *)(v23 + 8);
      v24 = 0;
      if ( v21 < 0 )
      {
        v24 = _mm_cvtsi32_si128(v21);
        v21 = 0;
      }
      v25 = 0;
      if ( v22 < 0 )
      {
        v25 = (__m128)_mm_cvtsi32_si128(v22);
        v22 = 0;
      }
      p_ptr = &ptr;
      v27 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v21), _mm_cvtsi32_si128(v22));
      *(__m128i *)ptr.m256i_i8 = _mm_unpacklo_epi64(_mm_unpacklo_epi32(v24, (__m128i)v25), v27);
      if ( (unsigned __int8)sub_29A130(v23, ptr.m256i_i32, (__m128d *)v59, 100.0) )
      {
        v29.m128d_f64[0] = 0.0;
        v30 = v50;
        v31 = 0;
        v45 = 0;
        v32 = 0;
        *(_OWORD *)&v59[8] = 0;
        v44 = (v47 + 1) * v43;
        if ( v44 > 0 )
        {
          do
          {
            v33 = (const __m128i *)sub_1EA6A0(
                                     *(_QWORD *)(a1 + 16) + 384LL,
                                     (__int64)p_ptr,
                                     v28,
                                     (__int64)v30,
                                     v29.m128d_f64[0]);
            v34 = *(_QWORD *)(a1 + 16);
            *(__m128i *)ptr.m256i_i8 = _mm_loadu_si128(v33);
            *(__m128i *)&ptr.m256i_u64[2] = _mm_loadu_si128(v33 + 1);
            v35 = v33[2].m128i_i64[0];
            ptr.m256i_i32[6] = -1;
            v63 = v35;
            v36 = (__m128)_mm_cvtsi32_si128(v46 * v45);
            v29 = _mm_cvtepi32_pd(_mm_unpacklo_epi32(_mm_cvtsi32_si128(v32 * v48), (__m128i)v36));
            *(__m128d *)&ptr.m256i_u64[1] = v29;
            sub_2004D0(v34, ptr.m256i_i8, 0, v46, v29.m128d_f64[0], v25, (__m128)v27, v36, v37, v38, a8, a9);
            QT::QPagedPaintDevice::pageLayout((QT::QPagedPaintDevice *)v50);
            v39 = QT::QPrinter::resolution((QT::QPrinter *)v53);
            v40 = QT::QPageLayout::fullRectPixels((QT::QPageLayout *)v50, v39);
            v51[1] = v41;
            v51[0] = v40;
            v42 = sub_2BA830(a1, v51, v59, 0, 0);
            QT::QPageLayout::~QPageLayout((QT::QPageLayout *)v50);
            p_ptr = (__m256i *)v49;
            sub_2C76F0(a1, v49, v42);
            if ( v44 - 1 > v31 )
              QT::QPrinter::newPage((QT::QPrinter *)v53);
            if ( v32 < v47 )
            {
              ++v32;
            }
            else
            {
              ++v45;
              v32 = 0;
            }
            if ( v42 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v42 + 8LL))(v42);
            ++v31;
          }
          while ( v44 != v31 );
        }
        QT::QPainter::end((QT::QPainter *)v49);
      }
      QT::QPainter::~QPainter((QT::QPainter *)v49);
      if ( v52 && !_InterlockedSub((volatile signed __int32 *)v52, 1u) )
        free(v52);
    }
    QT::QPrintDialog::~QPrintDialog((QT::QPrintDialog *)v58);
    QT::QPrinter::~QPrinter((QT::QPrinter *)v53);
  }
  v64[2] = ui_dialog_t___vtable_at__16;
  v64[0] = &ui_dialog_t___vtable;
  QT::QDialog::~QDialog((QT::QDialog *)v64);
  return v65 - __readfsqword(0x28u);
}
