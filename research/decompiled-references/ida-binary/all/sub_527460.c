unsigned __int64 __fastcall sub_527460(QT::QTextBlock *a1, __int64 a2, __int64 a3)
{
  QT::QPaintDevice *v5; // rsi
  __m128i v6; // xmm1
  __m128i v7; // xmm0
  __m128i v8; // xmm1
  __m128i v9; // xmm0
  int v10; // r14d
  int v11; // ebp
  int v12; // r13d
  QT::QString *(__fastcall *v13)(QT::QString *, __int64, int); // rax
  __int64 v14; // rdx
  __int64 v16; // rdx
  __int64 v17; // rax
  int v18; // edx
  int v20; // [rsp+18h] [rbp-C0h]
  char v21[8]; // [rsp+28h] [rbp-B0h] BYREF
  void *v22; // [rsp+30h] [rbp-A8h] BYREF
  int v23; // [rsp+38h] [rbp-A0h]
  __m128i v24; // [rsp+40h] [rbp-98h] BYREF
  _DWORD v25[4]; // [rsp+50h] [rbp-88h] BYREF
  void *ptr; // [rsp+60h] [rbp-78h] BYREF
  double v27; // [rsp+68h] [rbp-70h]
  double v28; // [rsp+78h] [rbp-60h]
  _QWORD v29[3]; // [rsp+80h] [rbp-58h] BYREF
  unsigned __int64 v30; // [rsp+98h] [rbp-40h]

  v5 = (QT::QPaintDevice *)(a2 + 16);
  v30 = __readfsqword(0x28u);
  if ( !a2 )
    v5 = nullptr;
  QT::QPainter::QPainter((QT::QPainter *)v21, v5);
  QT::QPainter::setFont((QT::QPainter *)v21, (const QT::QFont *)(*((_QWORD *)a1 + 4) + 56LL));
  v6 = _mm_cvtsi32_si128(*(_DWORD *)(*(_QWORD *)(a2 + 32) + 28LL) - *(_DWORD *)(*(_QWORD *)(a2 + 32) + 20LL));
  v7 = _mm_unpacklo_epi32(v6, _mm_cvtsi32_si128(*(_DWORD *)(a3 + 20)));
  v8 = _mm_unpacklo_epi32(v6, _mm_cvtsi32_si128(*(_DWORD *)(a3 + 28)));
  v9 = _mm_unpacklo_epi64(v7, v8);
  v24 = v9;
  QT::QPainter::drawLines(v21, &v24, 1);
  QT::QFontMetrics::QFontMetrics((QT::QFontMetrics *)&ptr, (const QT::QFont *)(*((_QWORD *)a1 + 4) + 56LL));
  v20 = QT::QFontMetrics::height((QT::QFontMetrics *)&ptr);
  QT::QFontMetrics::~QFontMetrics((QT::QFontMetrics *)&ptr);
  QT::QPlainTextEdit::firstVisibleBlock((QT::QPlainTextEdit *)&v22);
  QT::QPlainTextEdit::blockBoundingGeometry((QT::QPlainTextEdit *)&ptr, a1);
  QT::QPlainTextEdit::contentOffset(a1);
  v10 = (int)(*(double *)v8.m128i_i64 + v27);
  QT::QPlainTextEdit::blockBoundingRect((QT::QPlainTextEdit *)&ptr, a1);
  v11 = v10 + (int)v28;
  v12 = QT::QTextBlock::blockNumber((QT::QTextBlock *)&v22);
  while ( (unsigned __int8)QT::QTextBlock::isValid((QT::QTextBlock *)&v22) && v10 <= *(_DWORD *)(a3 + 28) )
  {
    if ( (unsigned __int8)QT::QTextBlock::isVisible((QT::QTextBlock *)&v22) && v11 >= *(_DWORD *)(a3 + 20) )
    {
      if ( !v12 && (*(_BYTE *)(a2 + 136) & 1) != 0 )
      {
        QT::QPainter::save((QT::QPainter *)v21);
        v29[0] = sub_524FA0(a2 + 40, 2165563904LL, 0);
        v29[1] = v16;
        QT::QPainter::setPen((QT::QPainter *)v21, (const QT::QColor *)v29);
        v17 = *(_QWORD *)(a2 + 32);
        v18 = *(_DWORD *)(v17 + 20);
        LODWORD(v17) = *(_DWORD *)(v17 + 28);
        HIDWORD(ptr) = v10;
        LODWORD(ptr) = 0;
        LODWORD(v27) = v17 - 2 - v18;
        HIDWORD(v27) = v10 + v20 - 1;
        QT::QPainter::drawText(v21, &ptr, 132, a2 + 104, 0, *(double *)v9.m128i_i64);
        QT::QPainter::restore((QT::QPainter *)v21);
      }
      else
      {
        v13 = *(QT::QString *(__fastcall **)(QT::QString *, __int64, int))(*(_QWORD *)a2 + 416LL);
        if ( v13 == sub_526AA0 )
          QT::QString::number((QT::QString *)&ptr, v12 + 1, 10);
        else
          v13((QT::QString *)&ptr, a2, v12);
        v25[0] = 0;
        v14 = *(_QWORD *)(a2 + 32);
        v25[1] = v10;
        v25[2] = *(_DWORD *)(v14 + 28) - 2 - *(_DWORD *)(v14 + 20);
        v25[3] = v10 + v20 - 1;
        QT::QPainter::drawText(v21, v25, 2, &ptr, 0, *(double *)v9.m128i_i64);
        if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
          free(ptr);
      }
    }
    QT::QTextBlock::next((QT::QTextBlock *)&ptr);
    v22 = ptr;
    v23 = LODWORD(v27);
    QT::QPlainTextEdit::blockBoundingRect((QT::QPlainTextEdit *)&ptr, a1);
    v10 = v11;
    ++v12;
    v11 += (int)v28;
  }
  QT::QPainter::~QPainter((QT::QPainter *)v21);
  return v30 - __readfsqword(0x28u);
}
