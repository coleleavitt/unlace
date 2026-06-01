void __fastcall sub_3F4770(QT::QWidget *this)
{
  QT::QWidget *v1; // rax

  sub_3F15A0((__int64)this);
  v1 = (QT::QWidget *)QT::QApplication::focusWidget(this);
  if ( !v1 || this == v1 || !(unsigned __int8)QT::QWidget::isAncestorOf(this, v1) )
    sub_3F4670((unsigned __int64 *)this);
}
