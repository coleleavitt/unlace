void __fastcall sub_1E98C0(QT::QObject *this)
{
  __int64 v1; // rax

  if ( !*((_BYTE *)this + 24) )
  {
    v1 = *((_QWORD *)this + 2);
    if ( v1 )
    {
      if ( *(_DWORD *)(v1 + 964) == 1 )
        dto_copy_to_inf((char *)this + 32);
    }
  }
  *(_QWORD *)this = &object_lifecycle_monitor_t___vtable;
  QT::QObject::~QObject(this);
}
