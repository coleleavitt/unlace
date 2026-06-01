QT::QWidget *__fastcall sub_467FA0(QT::QWidget *this, __int64 a2)
{
  if ( sub_4CD6B0(a2, 0) )
  {
    QT::QWidget::windowTitle(this);
  }
  else
  {
    *((_QWORD *)this + 2) = 0;
    *(_OWORD *)this = 0;
  }
  return this;
}
