unsigned __int64 __fastcall sub_47B470(QT::QApplication *a1, double a2, __int64 a3, QT::QObject *a4)
{
  __int64 v5; // rcx
  const char *v6; // r8
  unsigned __int64 v8; // rax
  __int64 v9; // rdx
  const QT::QObject *v10; // rbp
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  const char *v14; // r8
  __int64 v15; // rax
  QT::QMainWindow *v16; // rbp
  __int64 v17; // rdi
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r13
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24[2]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v25; // [rsp+10h] [rbp-48h]
  char v26; // [rsp+18h] [rbp-40h]
  unsigned __int64 v27; // [rsp+28h] [rbp-30h]

  v27 = __readfsqword(0x28u);
  if ( a4 && !QT::QApplication::activePopupWidget(a1) )
  {
    v8 = *((_QWORD *)a1 + 61) + 1LL;
    if ( v8 > 9 )
    {
      v9 = 0;
      v8 = 0;
    }
    else
    {
      v9 = 32 * v8;
    }
    *((_QWORD *)a1 + 61) = v8;
    sub_478D00((char *)a1 + v9 + 168, (__int64)a4, a2, v9, v5, v6);
    sub_4C7B50(a4);
    v10 = sub_479220((__int64)a1 + 16, a4);
    QT::QObject::QObject((QT::QObject *)v24, nullptr);
    v11 = (__int64)v10;
    v25 = 0;
    v24[0] = (__int64)&object_lifecycle_monitor_t___vtable;
    sub_478D00((char *)v24, (__int64)v10, a2, v12, v13, v14);
    if ( v26 )
      goto LABEL_16;
    if ( !v25 )
      goto LABEL_16;
    v15 = (*(__int64 (__fastcall **)(_QWORD *))(*QT::QCoreApplication::self + 224LL))(QT::QCoreApplication::self);
    v16 = (QT::QMainWindow *)v15;
    if ( !v15 )
      goto LABEL_16;
    v17 = v15;
    v18 = sub_53C480(v15);
    v21 = v18;
    if ( v26 )
    {
      sub_478460(a2, v17, v11, v19, v20);
    }
    else
    {
      if ( v18 != v25 )
        sub_53E2C0(v16);
      v11 = v21;
      v17 = 8;
      sub_531B30(8, v21, 0);
      if ( !v26 )
      {
        sub_53EAB0(v16);
        if ( !v26 && v25 )
          sub_531B30(7, v25, 0);
LABEL_16:
        v24[0] = (__int64)&object_lifecycle_monitor_t___vtable;
        QT::QObject::~QObject((QT::QObject *)v24);
        return v27 - __readfsqword(0x28u);
      }
    }
    sub_478460(a2, v17, v11, v22, v23);
  }
  return v27 - __readfsqword(0x28u);
}
