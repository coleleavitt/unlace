unsigned __int64 __fastcall sub_2D2F30(QT::QAbstractScrollArea **this, __int64 a2, double a3)
{
  QT::QPaintDevice *v5; // rsi
  __int64 v6; // rax
  _QWORD *v7; // rax
  __int64 v8; // rax
  const QT::QColor *v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rax
  size_t v18; // rax
  const char *v19; // rbx
  size_t v20; // rdx
  double v21; // xmm0_8
  _BYTE v22[8]; // [rsp+8h] [rbp-60h] BYREF
  __int64 v23; // [rsp+10h] [rbp-58h] BYREF
  int v24; // [rsp+18h] [rbp-50h]
  int v25; // [rsp+1Ch] [rbp-4Ch]
  void *ptr[3]; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v27; // [rsp+38h] [rbp-30h]

  v27 = __readfsqword(0x28u);
  sub_2018C0(this, a2);
  if ( (unsigned __int64)*(this + 135) > 1 )
  {
    v5 = (QT::QPaintDevice *)QT::QAbstractScrollArea::viewport((QT::QAbstractScrollArea *)this);
    if ( v5 )
      v5 = (QT::QPaintDevice *)((char *)v5 + 16);
    QT::QPainter::QPainter((QT::QPainter *)v22, v5);
    QT::QPainter::setFont((QT::QPainter *)v22, (QT::QAbstractScrollArea *)((char *)*(this + 4) + 56));
    v6 = QT::QWidget::palette((QT::QWidget *)this);
    v7 = (_QWORD *)QT::QPalette::brush(v6, 4, 1);
    QT::QBrush::QBrush(ptr, *v7 + 8LL, 1);
    QT::QPainter::setBrush((QT::QPainter *)v22, (const QT::QBrush *)ptr);
    QT::QBrush::~QBrush((QT::QBrush *)ptr);
    v8 = QT::QWidget::palette((QT::QWidget *)this);
    v9 = (const QT::QColor *)(*(_QWORD *)QT::QPalette::brush(v8, 4, 8) + 8LL);
    QT::QPainter::setPen((QT::QPainter *)v22, v9);
    if ( (unsigned int)sub_1EB590((__int64)this, (__int64)v9, v10, v11, a3) == 1 )
      goto LABEL_8;
    do
    {
      if ( under_debugger )
        BUG();
      interr(40315, v9, v12, v13, a3);
LABEL_8:
      v14 = (__int64)*(this + 111);
    }
    while ( !v14 );
    sub_2856C0(v14);
    v15 = *(_QWORD *)(QT::QAbstractScrollArea::viewport((QT::QAbstractScrollArea *)this) + 32LL);
    v23 = 0;
    v25 = (int)a3 - 1;
    v24 = *(_DWORD *)(v15 + 28) + 1 - *(_DWORD *)(v15 + 20);
    v16 = QT::QPainter::brush((QT::QPainter *)v22);
    QT::QPainter::fillRect(v22, &v23, v16);
    v17 = (__int64)*(this + 135);
    if ( v17 )
    {
      v18 = v17 - 1;
      v19 = (const char *)*(this + 134);
      v20 = v18 >> 63;
    }
    else
    {
      LOBYTE(v20) = 0;
      v18 = 0;
      v19 = &s1;
    }
    if ( !v19 || (_BYTE)v20 )
    {
      v18 = 0;
      if ( v19 )
        v18 = strlen(v19);
    }
    v21 = QT::QString::fromUtf8(ptr, v18, v19);
    QT::QPainter::drawText(v22, &v23, 0, ptr, 0, v21);
    if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
      free(ptr[0]);
    QT::QPainter::~QPainter((QT::QPainter *)v22);
  }
  return v27 - __readfsqword(0x28u);
}
