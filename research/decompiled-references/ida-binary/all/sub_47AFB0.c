__int64 __fastcall sub_47AFB0(__int64 a1, double a2)
{
  __int64 result; // rax
  __int64 v3; // rax
  __int64 v4; // r13
  _QWORD *v5; // rbp
  __int64 v6; // rdx
  __int64 v7; // rcx
  const char *v8; // r8
  void *v9; // r13
  QT::QObject *v10; // rbp
  __int64 v11; // rax
  QT::QWidget *v12; // rbx
  __int64 v13[2]; // [rsp+0h] [rbp-58h] BYREF
  QT::QWidget *v14; // [rsp+10h] [rbp-48h]
  char v15; // [rsp+18h] [rbp-40h]
  unsigned __int64 v16; // [rsp+28h] [rbp-30h]

  v16 = __readfsqword(0x28u);
  if ( !*(_QWORD *)(a1 + 136) )
    return 0;
  result = *(unsigned __int8 *)(a1 + 520);
  if ( (_BYTE)result )
    return 0;
  if ( *(_QWORD *)(a1 + 512) )
  {
    v3 = sub_4C6AD0();
    v4 = 0;
    v5 = (_QWORD *)v3;
    if ( v3 )
      v4 = sub_4CD6B0(v3, 0);
    QT::QObject::QObject((QT::QObject *)v13, nullptr);
    v14 = nullptr;
    v13[0] = (__int64)&object_lifecycle_monitor_t___vtable;
    sub_478D00((char *)v13, v4, a2, v6, v7, v8);
    if ( v5 )
      v5 = (_QWORD *)sub_4CE6E0(v5);
    (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)a1 + 336LL))(a1, *(_QWORD *)(a1 + 136), 3);
    v9 = *(void **)(a1 + 136);
    if ( v9 )
    {
      jvalue_t_clear(*(_QWORD *)(a1 + 136));
      operator delete(v9, 0x18u);
    }
    *(_QWORD *)(a1 + 136) = 0;
    if ( v5 && QT::QMetaObject::cast((QT::QMetaObject *)&off_898320, *(const QT::QObject **)(v5[1] + 16LL)) )
      (*(void (__fastcall **)(_QWORD *))(*v5 + 32LL))(v5);
    if ( !v15 )
    {
      v10 = v14;
      if ( v14 )
      {
        QT::QWidget::activateWindow(v14);
        v11 = *(_QWORD *)(a1 + 24);
        if ( !*(_BYTE *)(v11 + 520) )
        {
          v12 = *(QT::QWidget **)(v11 + 512);
          if ( v12 )
          {
            if ( sub_4CF3F0(v10) )
              sub_4CB2D0(v12);
          }
        }
      }
    }
    v13[0] = (__int64)&object_lifecycle_monitor_t___vtable;
    QT::QObject::~QObject((QT::QObject *)v13);
    return 1;
  }
  return result;
}
