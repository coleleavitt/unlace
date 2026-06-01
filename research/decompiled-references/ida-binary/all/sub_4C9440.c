void __fastcall sub_4C9440(__int64 a1, double a2)
{
  __int64 v2; // rbp
  __int64 v3; // rdx
  __int64 v4; // rcx
  const char *v5; // r8
  __int64 v6; // rsi
  QT::QObject *v7; // rbp
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r8
  __int64 v13; // r9
  QT::QObject *v14; // r12
  int *v15; // rbp
  int v16; // ebx
  void *ptr[2]; // [rsp+0h] [rbp-58h] BYREF
  QT::QObject *v18; // [rsp+10h] [rbp-48h]
  char v19; // [rsp+18h] [rbp-40h]
  unsigned __int64 v20; // [rsp+28h] [rbp-30h]

  v20 = __readfsqword(0x28u);
  v2 = QT::QApplication::focusWidget((QT::QApplication *)a1);
  QT::QObject::QObject((QT::QObject *)ptr, nullptr);
  v18 = nullptr;
  ptr[0] = &object_lifecycle_monitor_t___vtable;
  sub_478D00((char *)ptr, v2, a2, v3, v4, v5);
  v6 = **(_QWORD **)(a1 + 40);
  if ( v6 )
    sub_4C48D0(a1, v6);
  sub_4CA450((QT::QWidget *)a1);
  if ( !v19 )
  {
    v7 = v18;
    if ( v18 )
    {
      v8 = sub_4CF3F0(v18);
      if ( v8 )
      {
        if ( !*(_BYTE *)(v8 + 44) )
        {
          sub_4C8FD0(a1, v8, 1, v9, v10, v11);
          QT::QWidget::setFocus(v7, 7);
        }
      }
    }
  }
  ptr[0] = &object_lifecycle_monitor_t___vtable;
  QT::QObject::~QObject((QT::QObject *)ptr);
  sub_4C6D70((QT::QCoreApplication *)a1);
  if ( QT::QMetaObject::cast((QT::QMetaObject *)&off_898320, *(const QT::QObject **)(*(_QWORD *)(a1 + 8) + 16LL)) )
    sub_4C4A40((QT::QWidget *)a1);
  sub_4C8370((__int64)ptr, a1);
  v14 = v18;
  v15 = (int *)ptr[0];
  if ( (__int64)v18 > 0 )
  {
    v16 = 0;
    do
    {
      if ( !v15 || *v15 > 1 )
      {
        ptr[0] = v15;
        v18 = v14;
        sub_4BCCA0((__int64)ptr, 0, 0, 0, v12, v13);
        v15 = (int *)ptr[0];
        v14 = v18;
      }
      sub_4C9440(*((_QWORD *)ptr[1] + v16++));
    }
    while ( v16 < (__int64)v14 );
  }
  if ( v15 )
  {
    if ( !_InterlockedSub(v15, 1u) )
      free(v15);
  }
}
