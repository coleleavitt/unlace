QT::QWidget *__fastcall IDADockWidget__::vfunc_1(QT::QWidget *this, char *a2)
{
  if ( !a2 )
    return nullptr;
  if ( !strcmp(a2, "IDADockWidget") )
    return this;
  return (QT::QWidget *)DockWidget__::vfunc_1(this, a2);
}
