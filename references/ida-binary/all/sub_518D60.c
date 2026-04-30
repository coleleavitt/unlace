__int64 __fastcall sub_518D60(int a1, __int64 a2)
{
  __int64 v2; // rsi
  int v3; // ebx
  _QWORD _0[5]; // [rsp+0h] [rbp+0h] BYREF

  v2 = *(_QWORD *)(a2 + 32);
  _0[1] = __readfsqword(0x28u);
  QT::QFontMetrics::QFontMetrics((QT::QFontMetrics *)_0, (const QT::QFont *)(v2 + 56));
  v3 = QT::QFontMetrics::height((QT::QFontMetrics *)_0);
  QT::QFontMetrics::~QFontMetrics((QT::QFontMetrics *)_0);
  return (unsigned int)(2 * a1 * v3 / 3);
}
