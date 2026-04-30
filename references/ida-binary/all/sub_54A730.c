QT::QWidget *__fastcall ComplexDockWidget__::vfunc_1(QT::QWidget *this, char *a2)
{
  QT::QWidget *v2; // r12

  if ( !a2 )
    return nullptr;
  v2 = this;
  if ( !strcmp(a2, "ComplexDockWidget") || !strcmp(a2, "BaseDockWidget") )
    return v2;
  return (QT::QWidget *)QT::QWidget::qt_metacast(this, a2);
}
