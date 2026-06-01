void __fastcall ui_dialog_exec_ctl_t__::vfunc_0(__int64 a1, double a2)
{
  bool v2; // zf
  __int64 v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx

  v2 = *(_BYTE *)(a1 + 32) == 0;
  *(_QWORD *)a1 = &ui_dialog_exec_ctl_t___vtable;
  if ( !v2 )
    goto LABEL_5;
  v4 = *(_QWORD *)(a1 + 24);
  if ( !v4 )
    goto LABEL_5;
  QT::QWidget::setFocus(v4, 7);
  if ( !*(_BYTE *)(a1 + 32) )
  {
    QT::QWidget::activateWindow(*(QT::QWidget **)(a1 + 24));
LABEL_5:
    *(_QWORD *)(a1 + 8) = &object_lifecycle_monitor_t___vtable;
    QT::QObject::~QObject((QT::QObject *)(a1 + 8));
    return;
  }
  if ( under_debugger )
    BUG();
  interr(40345, 7, v5, v6, a2);
  ui_dialog_exec_ctl_t__::vfunc_1((char *)&stru_9D90.st_value + 1);
}
