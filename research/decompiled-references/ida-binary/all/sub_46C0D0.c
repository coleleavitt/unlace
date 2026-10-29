QT::QWidget *__fastcall ConsoleWidget__::vfunc_1(QT::QWidget *this, char *a2)
{
  if ( !a2 )
    return nullptr;
  if ( !strcmp(a2, "ConsoleWidget") )
    return this;
  return (QT::QWidget *)QT::QWidget::qt_metacast(this, a2);
}
