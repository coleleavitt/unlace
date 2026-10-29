QT::QAbstractScrollArea *__fastcall TEAViewer__::vfunc_1(QT::QAbstractScrollArea *this, char *a2)
{
  if ( !a2 )
    return nullptr;
  if ( !strcmp(a2, "TEAViewer") )
    return this;
  return EAView__::vfunc_1(this, a2);
}
