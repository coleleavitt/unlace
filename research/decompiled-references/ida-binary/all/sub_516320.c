unsigned __int64 __fastcall sub_516320(QT::QAbstractScrollArea *this, __m128d a2)
{
  QT::QPaintDevice *v3; // rsi
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rax
  __m128i v7; // xmm0
  __m128i v8; // xmm1
  QT::QAbstractSlider *v9; // rax
  int v10; // r13d
  QT::QAbstractSlider *v11; // rax
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // r15
  __int64 v14; // r14
  signed int v15; // ebp
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdi
  __m128d v23; // xmm0
  __int64 v24; // rax
  char *v27; // rbp
  char *v28; // r12
  QT::QTextFormat *v29; // rdi
  int v30; // [rsp+28h] [rbp-E0h]
  int v31; // [rsp+2Ch] [rbp-DCh]
  unsigned int v32; // [rsp+30h] [rbp-D8h] BYREF
  int v33; // [rsp+34h] [rbp-D4h] BYREF
  _BYTE v34[8]; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v35; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v36; // [rsp+48h] [rbp-C0h] BYREF
  __m128d v37; // [rsp+50h] [rbp-B8h] BYREF
  void *ptr[2]; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v39; // [rsp+70h] [rbp-98h]
  __m128i v40; // [rsp+80h] [rbp-88h] BYREF
  _BYTE v41[40]; // [rsp+A0h] [rbp-68h] BYREF
  unsigned __int64 v42; // [rsp+C8h] [rbp-40h]

  v42 = __readfsqword(0x28u);
  v3 = (QT::QPaintDevice *)QT::QAbstractScrollArea::viewport(this);
  if ( v3 )
    v3 = (QT::QPaintDevice *)((char *)v3 + 16);
  QT::QPainter::QPainter((QT::QPainter *)v34, v3);
  if ( (*((_BYTE *)this + 96) & 1) != 0 )
  {
    sub_5149B0((__int64)this + 40);
    *((_DWORD *)this + 24) &= ~1u;
    sub_5135F0(*((QT::QAbstractScrollArea **)this + 10), *((_DWORD *)this + 22), *((_DWORD *)this + 23), a2);
  }
  v4 = QT::QWidget::palette(this);
  v5 = QT::QPalette::brush(v4, 4, 10);
  v6 = *((_QWORD *)this + 4);
  v7 = _mm_loadl_epi64((const __m128i *)(v6 + 28));
  v8 = _mm_loadl_epi64((const __m128i *)(v6 + 20));
  v40.m128i_i64[0] = 0;
  v40.m128i_i64[1] = _mm_sub_epi32(v7, v8).m128i_u64[0];
  QT::QPainter::fillRect(v34, &v40, v5);
  if ( *((_QWORD *)this + 8) )
  {
    v30 = *(_DWORD *)(*((_QWORD *)this + 4) + 32LL) + 1 - *(_DWORD *)(*((_QWORD *)this + 4) + 24LL);
    v9 = (QT::QAbstractSlider *)QT::QAbstractScrollArea::verticalScrollBar(this);
    v10 = QT::QAbstractSlider::value(v9);
    v11 = (QT::QAbstractSlider *)QT::QAbstractScrollArea::horizontalScrollBar(this);
    v31 = QT::QAbstractSlider::value(v11);
    v12 = *((_QWORD *)this + 8);
    v13 = v12 - 1;
    if ( (__int64)(v12 - 1) >= 0 )
    {
      while ( 1 )
      {
        v14 = 0;
        if ( v13 < v12 )
          v14 = *((_QWORD *)this + 7) + 48 * v13;
        v15 = *(_DWORD *)(v14 + 40) - v10;
        if ( *(_QWORD *)(v14 + 24) )
        {
          if ( *(_DWORD *)(v14 + 36) + v15 < 0 )
            break;
          if ( v15 <= v30 )
          {
            *(_OWORD *)ptr = 0;
            v39 = 0;
            if ( (unsigned __int8)sub_512FC0((int *)this, (int *)&v32, &v33) )
            {
              QT::QTextCharFormat::QTextCharFormat((QT::QTextCharFormat *)&v40.m128i_u64[1]);
              v40.m128i_i64[0] = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v32), _mm_cvtsi32_si128(v33 - v32)).m128i_u64[0];
              v16 = QT::QWidget::palette(this);
              v17 = QT::QPalette::brush(v16, 4, 13);
              QT::QBrush::operator QT::QVariant(v41, v17);
              QT::QTextFormat::setProperty((QT::QTextFormat *)&v40.m128i_u64[1], 2081, (const QT::QVariant *)v41);
              QT::QVariant::~QVariant((QT::QVariant *)v41);
              v18 = QT::QWidget::palette(this);
              v19 = QT::QPalette::brush(v18, 4, 12);
              QT::QBrush::operator QT::QVariant(v41, v19);
              QT::QTextFormat::setProperty((QT::QTextFormat *)&v40.m128i_u64[1], 2080, (const QT::QVariant *)v41);
              QT::QVariant::~QVariant((QT::QVariant *)v41);
              sub_177850((__m128i *)ptr, v39, v40.m128i_i64);
              if ( !ptr[0] || *(int *)ptr[0] > 1 )
                sub_177130((__m128i *)ptr, 0, 0, 0, v20, v21);
              QT::QTextFormat::~QTextFormat((QT::QTextFormat *)&v40.m128i_u64[1]);
            }
            v22 = *(_QWORD *)(v14 + 24);
            memset(&v40, 0, 32);
            v23 = _mm_cvtepi32_pd(_mm_unpacklo_epi32(_mm_cvtsi32_si128(-v31), _mm_cvtsi32_si128(v15)));
            v37 = v23;
            QT::QTextLayout::draw(v22, v34, &v37, ptr, &v40);
            if ( (unsigned __int8)QT::QWidget::hasFocus(this) )
            {
              if ( *((_DWORD *)this + 28) != -1 )
              {
                v24 = *((unsigned int *)this + 29);
                if ( (_DWORD)v24 != -1 && v24 == v13 )
                {
                  v35 = 0;
                  v36 = 0;
                  if ( (unsigned __int8)sub_513100(
                                          this,
                                          &v35,
                                          (unsigned int *)&v36,
                                          1,
                                          v23.m128d_f64[0],
                                          *(double *)v8.m128i_i64) )
                  {
                    v8 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v36), _mm_cvtsi32_si128(HIDWORD(v36)));
                    v40 = _mm_unpacklo_epi64(
                            _mm_unpacklo_epi32(_mm_cvtsi32_si128(v35), _mm_cvtsi32_si128(HIDWORD(v35))),
                            v8);
                    QT::QPainter::drawLines(v34, &v40, 1);
                  }
                }
              }
            }
            if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
            {
              v27 = (char *)ptr[1];
              v28 = (char *)ptr[1] + 24 * v39;
              if ( ptr[1] != v28 )
              {
                do
                {
                  v29 = (QT::QTextFormat *)(v27 + 8);
                  v27 += 24;
                  QT::QTextFormat::~QTextFormat(v29);
                }
                while ( v28 != v27 );
              }
              free(ptr[0]);
            }
          }
        }
        else if ( v15 < 0 )
        {
          break;
        }
        if ( v13-- == 0 )
          break;
        v12 = *((_QWORD *)this + 8);
      }
    }
  }
  QT::QPainter::~QPainter((QT::QPainter *)v34);
  return v42 - __readfsqword(0x28u);
}
