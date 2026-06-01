QT::QObject *__fastcall IDAGraphRenderer__::vfunc_1(QT::QObject *this, char *a2)
{
  if ( !a2 )
    return nullptr;
  if ( !strcmp(a2, "IDAGraphRenderer") )
    return this;
  return (QT::QObject *)GraphRenderer__::vfunc_1(this, a2);
}
