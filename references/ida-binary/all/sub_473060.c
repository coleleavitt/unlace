QT::QDialog *__fastcall TWelcomeForm__::vfunc_1(QT::QDialog *this, char *a2)
{
  if ( !a2 )
    return nullptr;
  if ( !strcmp(a2, "TWelcomeForm") )
    return this;
  return (QT::QDialog *)ActionsInspectorDialog__::vfunc_1(this, a2);
}
