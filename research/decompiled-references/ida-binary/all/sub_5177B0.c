__int64 __fastcall sub_5177B0(QT::QMessageBox *this, QT::QKeyEvent *a2)
{
  int v3; // r12d
  __int64 v5; // rsi
  int v6; // r13d
  QT::QAbstractButton *v7; // rdi
  _QWORD v8[7]; // [rsp+0h] [rbp-38h] BYREF

  v8[1] = __readfsqword(0x28u);
  if ( (unsigned int)QT::QKeyEvent::modifiers(a2) )
    return QT::QMessageBox::keyPressEvent(this, a2);
  if ( !QT::QMessageBox::checkBox(this) )
    return QT::QMessageBox::keyPressEvent(this, a2);
  v3 = *((_DWORD *)a2 + 16);
  if ( !v3 )
    return QT::QMessageBox::keyPressEvent(this, a2);
  v5 = QT::QMessageBox::checkBox(this);
  QT::QAbstractButton::shortcut((QT::QAbstractButton *)v8);
  v6 = sub_5192C0(v8, v5);
  QT::QKeySequence::~QKeySequence((QT::QKeySequence *)v8);
  if ( (v6 & 0x1FFFFFF) != v3 )
    return QT::QMessageBox::keyPressEvent(this, a2);
  *((_BYTE *)a2 + 12) = 1;
  v7 = (QT::QAbstractButton *)QT::QMessageBox::checkBox(this);
  return QT::QAbstractButton::animateClick(v7);
}
