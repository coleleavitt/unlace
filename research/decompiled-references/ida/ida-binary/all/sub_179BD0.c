__int64 __fastcall ida_action_execution_data_t__::vfunc_0(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  QT::QObject *v6; // rbp
  __int64 v7; // rdi
  __int64 v8; // rdi

  v6 = (QT::QObject *)a1[2];
  *a1 = &ida_action_execution_data_t___vtable;
  if ( v6 )
  {
    sub_278AD0((char *)v6 + 80);
    sub_1E9680((char *)v6 + 32);
    *(_QWORD *)v6 = &object_lifecycle_monitor_t___vtable;
    QT::QObject::~QObject(v6);
    a2 = 88;
    operator delete(v6, 0x58u);
  }
  v7 = a1[8];
  if ( v7 )
  {
    a1[9] = 0;
    qfree(v7, a2, a3, a4, a5);
  }
  v8 = a1[4];
  if ( v8 )
  {
    a1[5] = 0;
    qfree(v8, a2, a3, a4, a5);
  }
  sub_277860(a1 + 3);
  return ui_action_execution_data_t__::vfunc_0(a1);
}
