QT::QFont *__fastcall sub_4EBCA0(QT::QFont *this, __int64 a2, double a3)
{
  char v3; // r15
  int v4; // r14d
  int v5; // r13d
  char v6; // al
  unsigned int v7; // eax
  unsigned int v8; // eax
  _BYTE v10[8]; // [rsp+8h] [rbp-60h] BYREF
  void *ptr[11]; // [rsp+10h] [rbp-58h] BYREF

  ptr[3] = (void *)__readfsqword(0x28u);
  QT::QFontInfo::QFontInfo((QT::QFontInfo *)v10, (const QT::QFont *)(a2 + 56));
  v3 = QT::QFontInfo::italic((QT::QFontInfo *)v10);
  v4 = QT::QFontInfo::weight((QT::QFontInfo *)v10);
  v5 = QT::QFontInfo::pointSize((QT::QFontInfo *)v10);
  QT::QFontInfo::family((QT::QFontInfo *)ptr);
  QT::QFont::QFont(this, (const QT::QString *)ptr, v5, v4, v3);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v6 = QT::QFontInfo::fixedPitch((QT::QFontInfo *)v10);
  QT::QFont::setFixedPitch(this, v6);
  v7 = QT::QFontInfo::style((QT::QFontInfo *)v10);
  QT::QFont::setStyle(this, v7);
  v8 = QT::QFontInfo::styleHint((QT::QFontInfo *)v10);
  QT::QFont::setStyleHint(this, v8, 1, a3);
  QT::QFontInfo::styleName((QT::QFontInfo *)ptr);
  QT::QFont::setStyleName(this, (const QT::QString *)ptr);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  QT::QFontInfo::~QFontInfo((QT::QFontInfo *)v10);
  return this;
}
