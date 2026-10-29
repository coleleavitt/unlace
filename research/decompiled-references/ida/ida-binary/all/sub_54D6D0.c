QT::QObject *__fastcall active_corewidget_t__::vfunc_1(QT::QObject *this, char *a2)
{
  if ( !a2 )
    return nullptr;
  if ( !strcmp(a2, "object_lifecycle_monitor_t") )
    return this;
  return (QT::QObject *)QT::QObject::qt_metacast(this, a2);
}
