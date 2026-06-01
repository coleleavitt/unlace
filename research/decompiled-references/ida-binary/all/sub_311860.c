__int64 __fastcall sub_311860(QT::QApplication *a1)
{
  QT::QApplication *v1; // rbp
  QT::QWidget *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v8; // r15
  int v9; // r13d
  QT::QApplication *v10; // r14
  __int64 active; // rax
  __int64 v12; // [rsp+0h] [rbp-78h]
  __int64 v13; // [rsp+8h] [rbp-70h] BYREF
  char v14[16]; // [rsp+10h] [rbp-68h] BYREF
  __int64 v15; // [rsp+20h] [rbp-58h]
  char v16; // [rsp+28h] [rbp-50h]
  unsigned __int64 v17; // [rsp+38h] [rbp-40h]

  v17 = __readfsqword(0x28u);
  v1 = a1;
  v2 = (QT::QWidget *)QT::QApplication::focusWidget(a1);
  if ( v2 )
    QT::QWidget::window(v2);
  QT::QObject::QObject((QT::QObject *)v14, nullptr);
  v15 = 0;
  *(_QWORD *)v14 = &object_lifecycle_monitor_t___vtable;
  sub_478D00(v14, v12);
  v13 = 0;
  v5 = sub_4AED50(a1, &v13, v3, v4);
  if ( v5 >= 0 )
  {
    v6 = *((_QWORD *)a1 + 23);
    if ( *(_QWORD *)(v6 + 16) > v5 )
    {
      if ( !v16 )
      {
        v8 = v15;
        if ( v15 )
        {
          v9 = 0;
          v10 = (QT::QApplication *)QT::QCoreApplication::self;
          while ( 1 )
          {
            active = QT::QApplication::activeWindow(a1);
            if ( v9 == 250 || v8 == active )
              break;
            a1 = v10;
            (*(void (__fastcall **)(QT::QApplication *, __int64, __int64))(*(_QWORD *)v10 + 448LL))(v10, 50, 1);
            v9 += 50;
          }
          QT::QApplication::activeWindow(a1);
          v6 = *((_QWORD *)v1 + 23);
        }
      }
      QT::QAction::activate(*(_QWORD *)(*(_QWORD *)(v6 + 8) + 8 * v5), 0);
    }
  }
  *(_QWORD *)v14 = &object_lifecycle_monitor_t___vtable;
  QT::QObject::~QObject((QT::QObject *)v14);
  return 1;
}
