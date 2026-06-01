unsigned __int64 __fastcall sub_497C60(__int64 a1)
{
  unsigned int v1; // ebx
  int v2; // r12d
  _QWORD v4[5]; // [rsp+0h] [rbp-28h] BYREF

  v4[1] = __readfsqword(0x28u);
  v1 = QT::QStyledItemDelegate::sizeHint(a1);
  QT::QFontMetrics::QFontMetrics(
    (QT::QFontMetrics *)v4,
    (const QT::QFont *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 32LL) + 56LL));
  v2 = QT::QFontMetrics::height((QT::QFontMetrics *)v4);
  QT::QFontMetrics::~QFontMetrics((QT::QFontMetrics *)v4);
  return ((unsigned __int64)(unsigned int)(v2 + 2) << 32) | v1;
}
