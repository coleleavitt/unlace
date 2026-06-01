unsigned __int64 __fastcall sub_4980D0(QT::QLabel *this, QT::QString *a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v6; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v7; // [rsp+8h] [rbp-30h]

  v7 = __readfsqword(0x28u);
  QT::QKeySequence::QKeySequence((QT::QKeySequence *)&v6);
  v4 = *((_QWORD *)this + 7);
  *((_QWORD *)this + 7) = v6;
  v6 = v4;
  QT::QKeySequence::~QKeySequence((QT::QKeySequence *)&v6);
  QT::QLabel::setTextFormat(this, 2);
  QT::QLabel::setText(this, a2);
  QT::QLabel::setOpenExternalLinks(this, 1);
  QT::QLabel::setTextInteractionFlags(this, 13);
  *((_QWORD *)this + 6) = a3;
  return v7 - __readfsqword(0x28u);
}
