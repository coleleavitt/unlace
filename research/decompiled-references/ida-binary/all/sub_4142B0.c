void __fastcall kernel_notification_hub_t__::vfunc_3(QT::QObject *this)
{
  __int64 v2; // rdi
  __int64 v3; // rdi

  *(_QWORD *)this = &kernel_notification_hub_t___vtable;
  v2 = *((_QWORD *)this + 3);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  v3 = *((_QWORD *)this + 2);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  QT::QObject::~QObject(this);
}
