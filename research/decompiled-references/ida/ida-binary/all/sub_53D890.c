__int64 __fastcall sub_53D890(QT::QMainWindow *this)
{
  __int64 v1; // rdi
  __int64 v2; // rdi
  double v4; // xmm0_8
  __int64 v5; // rdx
  __int64 v6; // rcx
  const char *v7; // r8
  __int64 v8; // r12
  QT::QObject *v9; // rbp
  __int64 v10; // rdx
  __int64 v11; // rcx
  const char *v12; // r8
  QT::QMetaObject *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  int v17; // ebp
  QT::QMetaObject *v18; // rax
  __int64 result; // rax
  __int64 v20; // rdx
  struct _Unwind_Exception *v21; // rbp

  QT::QMainWindow::QMainWindow();
  *((_QWORD *)this + 9) = 0;
  *((_DWORD *)this + 26) = 0;
  v4 = 0.0;
  *((_QWORD *)this + 14) = 0;
  *((_QWORD *)this + 2) = &unk_89ECB8;
  *(_QWORD *)this = &ui_main_window_t___vtable;
  *((_QWORD *)this + 15) = (char *)this + 104;
  *((_QWORD *)this + 16) = (char *)this + 104;
  *((_QWORD *)this + 17) = 0;
  *(_OWORD *)((char *)this + 40) = 0;
  *(_OWORD *)((char *)this + 56) = 0;
  *((_OWORD *)this + 5) = 0;
  *((_OWORD *)this + 9) = 0;
  QT::QObject::QObject((QT::QMainWindow *)((char *)this + 160), nullptr);
  *((_QWORD *)this + 22) = 0;
  *((_QWORD *)this + 20) = &object_lifecycle_monitor_t___vtable;
  sub_478D00((char *)this + 160, 0, 0.0, v5, v6, v7);
  v8 = 2;
  *((_QWORD *)this + 20) = &active_corewidget_t___vtable;
  v9 = (QT::QMainWindow *)((char *)this + 192);
  do
  {
    QT::QObject::QObject(v9, nullptr);
    *(_QWORD *)v9 = &object_lifecycle_monitor_t___vtable;
    *((_QWORD *)v9 + 2) = 0;
    sub_478D00((char *)v9, 0, 0.0, v10, v11, v12);
    v9 = (QT::QObject *)((char *)v9 + 32);
  }
  while ( v8-- != 0 );
  v14 = (QT::QMetaObject *)ui_main_window_t__::vfunc_0(this);
  v17 = QT::QMetaObject::indexOfMethod(v14, "exec_requests()");
  if ( v17 == -1 )
  {
    if ( !under_debugger )
    {
      v21 = (struct _Unwind_Exception *)interr(40438, "exec_requests()", v15, v16, 0.0);
      active_corewidget_t__::vfunc_3((QT::QMainWindow *)((char *)this + 160));
      sub_53BFC0(*((_QWORD **)this + 14), "exec_requests()");
      v1 = *((_QWORD *)this + 9);
      if ( v1 )
      {
        *((_QWORD *)this + 10) = 0;
        v4 = qfree(v1, "exec_requests()");
      }
      v2 = *((_QWORD *)this + 6);
      if ( v2 )
      {
        *((_QWORD *)this + 7) = 0;
        qfree(v2, "exec_requests()", v4);
      }
      sub_53D850((volatile signed __int32 **)this + 5);
      QT::QMainWindow::~QMainWindow(this);
      _Unwind_Resume(v21);
    }
    BUG();
  }
  v18 = (QT::QMetaObject *)ui_main_window_t__::vfunc_0(this);
  result = QT::QMetaObject::method(v18, v17);
  *((_QWORD *)this + 18) = result;
  *((_QWORD *)this + 19) = v20;
  return result;
}
