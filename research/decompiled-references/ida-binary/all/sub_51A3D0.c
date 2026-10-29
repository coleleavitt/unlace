void __fastcall sub_51A3D0(QT::QObject *this)
{
  QT::QObject *v2; // rdi

  if ( !*((_BYTE *)this + 24) )
  {
    v2 = *((QT::QObject **)this + 2);
    if ( v2 )
      QT::QObject::blockSignals(v2, *((_BYTE *)this + 32));
  }
  *(_QWORD *)this = &object_lifecycle_monitor_t___vtable;
  QT::QObject::~QObject(this);
}
