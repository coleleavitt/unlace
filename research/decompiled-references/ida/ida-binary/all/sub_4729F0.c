QT::QDialog *__fastcall ViewSwitcher__::vfunc_1(QT::QDialog *this, char *a2)
{
  if ( !a2 )
    return nullptr;
  if ( !strcmp(a2, "ViewSwitcher") )
    return this;
  return (QT::QDialog *)ActionsInspectorDialog__::vfunc_1(this, a2);
}
