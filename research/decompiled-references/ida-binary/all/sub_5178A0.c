__int64 __fastcall message_box_t__::vfunc_5(QT::QWidget *this, QT::QEvent *a2)
{
  int v2; // eax
  unsigned int v4; // r13d
  QT::QLabel *Child_helper; // rax
  QT::QLabel *v6; // r12
  QT::QLayout *v7; // rax
  QT::QScreen *v8; // rax
  int v9; // eax
  int v10; // edx
  QT::QWidget *v11; // rsi
  int v12; // edx
  _QWORD v13[7]; // [rsp+0h] [rbp-38h] BYREF

  v2 = *((unsigned __int16 *)a2 + 4);
  v13[1] = __readfsqword(0x28u);
  if ( v2 != 76 && v2 != 17 )
    return QT::QMessageBox::event(this, a2);
  if ( *(char *)(*((_QWORD *)this + 4) + 9LL) >= 0 )
    return QT::QMessageBox::event(this, a2);
  v4 = *((unsigned __int8 *)this + 64);
  if ( !(_BYTE)v4 )
    return QT::QMessageBox::event(this, a2);
  if ( v2 == 76 )
    *((_BYTE *)this + 64) = 0;
  else
    QT::QMessageBox::event(this, a2);
  QT::QWidget::setSizePolicy(this, sub_550000);
  Child_helper = (QT::QLabel *)QT::qt_qFindChild_helper(this, "qt_msgbox_label", 15, &QT::QLabel::staticMetaObject, 1);
  v6 = Child_helper;
  if ( Child_helper )
  {
    QT::QLabel::setWordWrap(Child_helper, 0);
    v7 = (QT::QLayout *)QT::QWidget::layout(this);
    v13[0] = QT::QLayout::totalMinimumSize(v7);
    v8 = (QT::QScreen *)QT::QWidget::screen(this);
    v9 = QT::QScreen::availableGeometry(v8);
    if ( v10 - 199 - v9 > SLODWORD(v13[0]) )
    {
      QT::QWidget::setFixedSize(this, v13);
      v11 = *(QT::QWidget **)(*((_QWORD *)this + 1) + 16LL);
      if ( v11 )
        sub_5193B0(this, v11);
      else
        sub_5192F0(this);
      QT::QCoreApplication::removePostedEvents(this, (QT::QObject *)((char *)&qword_48 + 4), v12);
      return v4;
    }
    QT::QLabel::setWordWrap(v6, 1);
  }
  if ( *((_WORD *)a2 + 4) != 17 )
    return QT::QMessageBox::event(this, a2);
  return v4;
}
