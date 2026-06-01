QT::QWidget *__fastcall ShortcutEditor__::vfunc_1(QT::QWidget *this, char *a2)
{
  if ( !a2 )
    return nullptr;
  if ( !strcmp(a2, "ShortcutEditor") )
    return this;
  return ActionsInspector__::vfunc_1(this, a2);
}
