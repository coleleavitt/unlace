QT::QDialog *__fastcall WaitDialog__::vfunc_1(QT::QDialog *this, char *a2)
{
  if ( !a2 )
    return nullptr;
  if ( !strcmp(a2, "WaitDialog") )
    return this;
  return ActionsInspectorDialog__::vfunc_1(this, a2);
}
