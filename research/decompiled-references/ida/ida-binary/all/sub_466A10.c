QT::QObject *__fastcall UserGraphRenderer__::vfunc_1(QT::QObject *this, char *a2)
{
  if ( !a2 )
    return nullptr;
  if ( !strcmp(a2, "UserGraphRenderer") )
    return this;
  return (QT::QObject *)GraphRenderer__::vfunc_1(this, a2);
}
