QT::QObject *__fastcall CIMBridge__::vfunc_1(QT::QObject *this, char *a2)
{
  if ( !a2 )
    return nullptr;
  if ( !strcmp(a2, "CIMBridge") )
    return this;
  return (QT::QObject *)QT::QObject::qt_metacast(this, a2);
}
