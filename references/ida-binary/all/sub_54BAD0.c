QT::QAction *__fastcall qaction_shadow_t__::vfunc_1(QT::QAction *this, char *a2)
{
  if ( !a2 )
    return nullptr;
  if ( !strcmp(a2, "qaction_shadow_t") )
    return this;
  return (QT::QAction *)QT::QAction::qt_metacast(this, a2);
}
