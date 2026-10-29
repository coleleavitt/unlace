QT::QWidget *__fastcall DockSplitter__::vfunc_1(QT::QWidget *this, char *a2)
{
  if ( !a2 )
    return nullptr;
  if ( !strcmp(a2, "DockSplitter") )
    return this;
  return ComplexDockWidget__::vfunc_1(this, a2);
}
