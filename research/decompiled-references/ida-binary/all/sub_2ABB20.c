unsigned __int64 __fastcall sub_2ABB20(__int64 a1)
{
  int v1; // rax^4
  int v2; // ecx
  int v3; // r13d
  int v4; // r14d
  int v5; // r15d
  double v6; // xmm0_8
  int v8; // r13d
  int v9; // eax
  int v10; // ecx
  int v11; // eax
  int v12; // r12d
  int v13; // r15d
  int v14; // r14d
  int v15; // [rsp+0h] [rbp-D8h]
  QT::QImage *v16; // [rsp+18h] [rbp-C0h]
  _BYTE v17[8]; // [rsp+28h] [rbp-B0h] BYREF
  _DWORD v18[4]; // [rsp+30h] [rbp-A8h] BYREF
  _DWORD v19[4]; // [rsp+40h] [rbp-98h] BYREF
  _QWORD v20[2]; // [rsp+50h] [rbp-88h] BYREF
  void *ptr[2]; // [rsp+60h] [rbp-78h] BYREF
  _BYTE v22[24]; // [rsp+80h] [rbp-58h] BYREF
  unsigned __int64 v23; // [rsp+98h] [rbp-40h]

  v23 = __readfsqword(0x28u);
  QT::QPainter::QPainter((QT::QPainter *)v17, (QT::QPaintDevice *)(a1 + 16));
  v16 = (QT::QImage *)(a1 + 40);
  *(_OWORD *)ptr = 0;
  QT::QPainter::drawImage(v17, ptr, a1 + 40);
  QT::QColor::QColor(v22, 2);
  QT::QPainter::setPen((QT::QPainter *)v17, (const QT::QColor *)v22);
  if ( *(int *)(a1 + 64) > 1 )
  {
    v8 = QT::QImage::size((QT::QImage *)(a1 + 40)) >> 32;
    v9 = QT::QImage::size((QT::QImage *)(a1 + 40));
    v10 = *(_DWORD *)(a1 + 64);
    v11 = v9 / v10;
    v12 = v11;
    if ( v10 > 1 )
    {
      v13 = v11;
      v14 = 1;
      do
      {
        v18[0] = v13;
        v18[1] = 0;
        v18[2] = v13;
        v18[3] = v8;
        QT::QPainter::drawLines(v17, v18, 1);
        ++v14;
        v13 += v12;
      }
      while ( *(_DWORD *)(a1 + 64) > v14 );
    }
  }
  if ( *(int *)(a1 + 68) > 1 )
  {
    v15 = QT::QImage::size(v16);
    v1 = QT::QImage::size(v16) >> 32;
    v2 = *(_DWORD *)(a1 + 68);
    v3 = v1 / v2;
    if ( v2 > 1 )
    {
      v4 = v1 / v2;
      v5 = 1;
      do
      {
        v19[0] = 0;
        v19[2] = v15;
        v19[1] = v4;
        v19[3] = v4;
        QT::QPainter::drawLines(v17, v19, 1);
        ++v5;
        v4 += v3;
      }
      while ( *(_DWORD *)(a1 + 68) > v5 );
    }
  }
  QT::QColor::QColor(v22, 7);
  QT::QPainter::setPen((QT::QPainter *)v17, (const QT::QColor *)v22);
  QT::QString::fromUtf8(ptr, 13, "Layout sample");
  QT::QFontMetrics::QFontMetrics((QT::QFontMetrics *)v19, (const QT::QFont *)(*(_QWORD *)(a1 + 32) + 56LL));
  v6 = (double)(int)(QT::QFontMetrics::height((QT::QFontMetrics *)v19) + 3);
  v20[0] = 0x4008000000000000LL;
  *(double *)&v20[1] = v6;
  QT::QPainter::drawText(v17, v20, ptr);
  QT::QFontMetrics::~QFontMetrics((QT::QFontMetrics *)v19);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  QT::QPainter::~QPainter((QT::QPainter *)v17);
  return v23 - __readfsqword(0x28u);
}
