QT::QMenu *__fastcall IdaMenu__::vfunc_1(QT::QMenu *this, char *a2)
{
  if ( !a2 )
    return nullptr;
  if ( !strcmp(a2, "IdaMenu") )
    return this;
  return (QT::QMenu *)QT::QMenu::qt_metacast(this, a2);
}
