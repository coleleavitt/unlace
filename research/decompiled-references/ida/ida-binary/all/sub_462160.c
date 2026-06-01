QT::QWidget *__fastcall CommandPalette__::vfunc_1(QT::QWidget *this, char *a2)
{
  if ( !a2 )
    return nullptr;
  if ( !strcmp(a2, "CommandPalette") )
    return this;
  return ActionsInspector__::vfunc_1(this, a2);
}
