QT::QApplication *__fastcall app_t__::vfunc_1(QT::QApplication *this, char *a2)
{
  if ( !a2 )
    return nullptr;
  if ( !strcmp(a2, "app_t") )
    return this;
  if ( !strcmp(a2, "_base_app_mixin_t") )
    return (QT::QApplication *)((char *)this + 16);
  return (QT::QApplication *)QT::QApplication::qt_metacast(this, a2);
}
