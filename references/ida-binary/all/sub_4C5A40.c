__int64 __fastcall sub_4C5A40(_DWORD *a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5, double a6)
{
  __int64 v7; // rdx
  __int64 v8; // rcx
  const char *v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rcx
  const char *v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rcx
  const char *v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rcx
  const char *v18; // r8
  __int64 v19; // rdx
  __int64 v20; // rcx
  const char *v21; // r8

  *a1 = 2;
  QT::QObject::QObject((QT::QObject *)(a1 + 2), nullptr);
  *((_QWORD *)a1 + 3) = 0;
  *((_QWORD *)a1 + 1) = &object_lifecycle_monitor_t___vtable;
  sub_478D00((char *)a1 + 8, a2, a6, v7, v8, v9);
  QT::QObject::QObject((QT::QObject *)(a1 + 10), nullptr);
  *((_QWORD *)a1 + 7) = 0;
  *((_QWORD *)a1 + 5) = &object_lifecycle_monitor_t___vtable;
  sub_478D00((char *)a1 + 40, a3, a6, v10, v11, v12);
  QT::QObject::QObject((QT::QObject *)(a1 + 18), nullptr);
  *((_QWORD *)a1 + 11) = 0;
  *((_QWORD *)a1 + 9) = &object_lifecycle_monitor_t___vtable;
  sub_478D00((char *)a1 + 72, 0, a6, v13, v14, v15);
  a1[28] = 0;
  *((_QWORD *)a1 + 13) = 0xFFFFFFFFLL;
  QT::QObject::QObject((QT::QObject *)(a1 + 30), nullptr);
  *((_QWORD *)a1 + 17) = 0;
  *((_QWORD *)a1 + 15) = &object_lifecycle_monitor_t___vtable;
  sub_478D00((char *)a1 + 120, 0, a6, v16, v17, v18);
  a1[38] = -1;
  sub_478D00((char *)a1 + 120, a4, a6, v19, v20, v21);
  qword_8D1DC8 = a1;
  a1[38] = a5;
  return a5;
}
