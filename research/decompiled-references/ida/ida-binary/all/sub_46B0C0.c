QT::QApplication *__fastcall IDAApplication__::vfunc_1(QT::QApplication *this, char *a2)
{
  if ( !a2 )
    return nullptr;
  if ( !strcmp(a2, "IDAApplication") )
    return this;
  if ( !strcmp(a2, "hvui_common_t") )
    return (QT::QApplication *)((char *)this + 752);
  return ida_app_t__::vfunc_1(this, a2);
}
