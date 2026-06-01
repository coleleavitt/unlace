unsigned __int64 __fastcall sub_53A660(__int64 a1, int a2, double a3)
{
  QT::QApplication *v3; // r12
  __int64 v4; // rdx
  __int64 v5; // rcx
  const char *v6; // r8
  unsigned __int64 result; // rax
  _QWORD *v8; // rbp
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rsi
  const char *v12; // r8
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  const char *v16; // r8

  v3 = (QT::QApplication *)(a1 + 8);
  *(_QWORD *)a1 = &ui_dialog_exec_ctl_t___vtable;
  QT::QObject::QObject((QT::QObject *)(a1 + 8), nullptr);
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 8) = &object_lifecycle_monitor_t___vtable;
  result = sub_478D00((char *)(a1 + 8), 0, a3, v4, v5, v6);
  *(_DWORD *)(a1 + 40) = a2;
  if ( (a2 & 1) != 0 )
  {
    v8 = QT::QCoreApplication::self;
    v11 = QT::QApplication::focusWidget(v3);
    if ( v11 )
    {
      return sub_478D00((char *)v3, v11, a3, v9, v10, v12);
    }
    else
    {
      v13 = (*(__int64 (__fastcall **)(_QWORD *))(v8[2] + 48LL))(v8 + 2);
      return sub_478D00((char *)v3, v13, a3, v14, v15, v16);
    }
  }
  return result;
}
