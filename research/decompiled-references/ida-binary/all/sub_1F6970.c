__int64 __fastcall sub_1F6970(QT::QObject *this, const QT::QFont *a2)
{
  _QWORD _0[7]; // [rsp+0h] [rbp+0h] BYREF

  _0[3] = __readfsqword(0x28u);
  QT::QFont::QFont((QT::QFont *)_0, a2);
  sub_4EB870(this, (QT::QFont *)_0);
  QT::QFont::~QFont((QT::QFont *)_0);
  return sub_1F68C0(this);
}
