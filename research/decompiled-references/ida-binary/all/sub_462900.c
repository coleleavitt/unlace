QT::QDockWidget *__fastcall BarDockWidget__::vfunc_1(QT::QDockWidget *this, char *a2)
{
  if ( !a2 )
    return nullptr;
  if ( !strcmp(a2, "BarDockWidget") )
    return this;
  return (QT::QDockWidget *)QT::QDockWidget::qt_metacast(this, a2);
}
