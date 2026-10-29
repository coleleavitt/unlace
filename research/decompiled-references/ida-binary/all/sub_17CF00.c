__int64 __fastcall plugin_action_handler_t__::vfunc_0(__int64 a1)
{
  __int64 v1; // rbx
  __int64 ph; // rdx
  int v3; // eax
  __int64 v4; // r12
  __int64 v5; // rbx
  __int64 v7[2]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v8; // [rsp+10h] [rbp-48h]
  char v9; // [rsp+18h] [rbp-40h]
  unsigned __int64 v10; // [rsp+28h] [rbp-30h]

  v10 = __readfsqword(0x28u);
  v1 = *(_QWORD *)(a1 + 16);
  if ( v1 )
  {
    ph = get_ph();
    v3 = *(_DWORD *)(v1 + 144);
    if ( (*(_BYTE *)(ph + 9) & 2) != 0 && (v3 & 1) != 0 )
    {
      sub_17CE30(1204);
    }
    else if ( (v3 & 4) != 0 && (_QWORD)xmmword_8CC820 == -1 )
    {
      sub_17CE30(1202);
    }
    else
    {
      if ( qword_8CC7C0 )
        sub_1EAF00();
      v4 = (*(__int64 (__fastcall **)(_QWORD *))(QT::QCoreApplication::self[2] + 48LL))(QT::QCoreApplication::self + 2);
      QT::QObject::QObject((QT::QObject *)v7, nullptr);
      v8 = 0;
      sub_478D00((char *)v7, (__int64)&object_lifecycle_monitor_t___vtable);
      invoke_plugin(v1, v4);
      byte_8CD8C0 = 1;
      if ( (*(_BYTE *)(v1 + 144) & 2) != 0 )
        mark_builtin_widgets(-25, -1, 1);
      sub_1EAD80((char *)&dword_0 + 1);
      v5 = QT::QApplication::focusWidget((QT::QApplication *)((char *)&dword_0 + 1));
      if ( v5 == QT::QMainWindow::menuBar(qword_8CD748) && !v9 && v8 )
        QT::QWidget::setFocus(v8, 7);
      v7[0] = (__int64)&object_lifecycle_monitor_t___vtable;
      QT::QObject::~QObject((QT::QObject *)v7);
    }
  }
  return 0;
}
