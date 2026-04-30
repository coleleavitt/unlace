QT::QObject *__fastcall IDAProxiRenderer__::vfunc_1(QT::QObject *this, char *a2)
{
  if ( !a2 )
    return nullptr;
  if ( !strcmp(a2, "IDAProxiRenderer") )
    return this;
  return IDAGraphRenderer__::vfunc_1(this, a2);
}
