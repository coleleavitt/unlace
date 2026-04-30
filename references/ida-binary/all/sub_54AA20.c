QT::QTabBar *__fastcall DockTabBar__::vfunc_1(QT::QTabBar *this, char *a2)
{
  if ( !a2 )
    return nullptr;
  if ( !strcmp(a2, "DockTabBar") )
    return this;
  return (QT::QTabBar *)QT::QTabBar::qt_metacast(this, a2);
}
