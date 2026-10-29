QT::QWidget *__fastcall DockTab__::vfunc_1(QT::QWidget *this, char *a2)
{
  if ( !a2 )
    return nullptr;
  if ( !strcmp(a2, "DockTab") )
    return this;
  return ComplexDockWidget__::vfunc_1(this, a2);
}
