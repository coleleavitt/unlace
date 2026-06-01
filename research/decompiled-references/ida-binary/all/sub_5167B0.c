unsigned __int64 __fastcall sub_5167B0(QT::QAbstractScrollArea *this)
{
  __int64 v1; // rbx
  unsigned __int64 v2; // rbx
  _QWORD _0[5]; // [rsp+0h] [rbp+0h] BYREF

  _0[1] = __readfsqword(0x28u);
  QT::QFontMetrics::QFontMetrics((QT::QFontMetrics *)_0, (const QT::QFont *)(*((_QWORD *)this + 4) + 56LL));
  v1 = (unsigned int)QT::QFontMetrics::height((QT::QFontMetrics *)_0) + 4;
  v2 = (unsigned int)QT::QAbstractScrollArea::minimumSizeHint(this) | (unsigned __int64)(v1 << 32);
  QT::QFontMetrics::~QFontMetrics((QT::QFontMetrics *)_0);
  return v2;
}
