unsigned __int64 __fastcall sub_2B8320(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v9; // rax
  __int64 v10; // rdx
  _BYTE v11[8]; // [rsp+8h] [rbp-B0h] BYREF
  _BYTE v12[96]; // [rsp+10h] [rbp-A8h] BYREF
  unsigned int v13[2]; // [rsp+70h] [rbp-48h] BYREF
  __int64 v14; // [rsp+78h] [rbp-40h]
  unsigned __int64 v15; // [rsp+88h] [rbp-30h]

  v15 = __readfsqword(0x28u);
  if ( a3 == a4 )
  {
    v9 = QT::QColor::fromRgb((QT::QColor *)(unsigned int)__ROR4__(_byteswap_ulong(a3), 8), a2);
    v14 = v10;
    *(_QWORD *)v13 = v9;
    QT::QPainter::fillRect(a1, a2, v13);
  }
  else
  {
    QT::QLinearGradient::QLinearGradient(
      (QT::QLinearGradient *)v12,
      0.0,
      0.0,
      0.0,
      (double)(*(_DWORD *)(a2 + 12) + 1 - *(_DWORD *)(a2 + 4)));
    *(_QWORD *)v13 = QT::QColor::fromRgb((QT::QColor *)(unsigned int)__ROR4__(_byteswap_ulong(a3), 8), a2);
    v14 = v6;
    QT::QGradient::setColorAt((QT::QGradient *)v12, 0.0, (const QT::QColor *)v13);
    *(_QWORD *)v13 = QT::QColor::fromRgb(
                       (QT::QColor *)(unsigned int)__ROR4__(_byteswap_ulong(a4), 8),
                       (unsigned int)v13);
    v14 = v7;
    QT::QGradient::setColorAt((QT::QGradient *)v12, 1.0, (const QT::QColor *)v13);
    QT::QBrush::QBrush((QT::QBrush *)v11, (const QT::QGradient *)v12);
    QT::QPainter::fillRect(a1, a2, v11);
    QT::QBrush::~QBrush((QT::QBrush *)v11);
    QT::QLinearGradient::~QLinearGradient((QT::QLinearGradient *)v12);
  }
  return v15 - __readfsqword(0x28u);
}
