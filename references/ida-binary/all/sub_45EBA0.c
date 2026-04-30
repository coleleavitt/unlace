QT::QAbstractScrollArea *__fastcall IDAView__::vfunc_1(QT::QAbstractScrollArea *this, char *a2)
{
  if ( !a2 )
    return nullptr;
  if ( !strcmp(a2, "IDAView") )
    return this;
  return EAView__::vfunc_1(this, a2);
}
