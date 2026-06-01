__int64 __fastcall sub_4C58D0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, __int64 *a6, double a7)
{
  __int64 v9; // rdx
  __int64 v10; // rcx
  const char *v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rcx
  const char *v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rcx
  const char *v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rcx
  const char *v20; // r8
  __int64 v21; // rdx
  __int64 v22; // rcx
  const char *v23; // r8
  __int64 result; // rax

  *(_DWORD *)a1 = 1;
  QT::QObject::QObject((QT::QObject *)(a1 + 8), nullptr);
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 8) = &object_lifecycle_monitor_t___vtable;
  sub_478D00((char *)(a1 + 8), a2, a7, v9, v10, v11);
  QT::QObject::QObject((QT::QObject *)(a1 + 40), nullptr);
  *(_QWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 40) = &object_lifecycle_monitor_t___vtable;
  sub_478D00((char *)(a1 + 40), a3, a7, v12, v13, v14);
  QT::QObject::QObject((QT::QObject *)(a1 + 72), nullptr);
  *(_QWORD *)(a1 + 88) = 0;
  *(_QWORD *)(a1 + 72) = &object_lifecycle_monitor_t___vtable;
  sub_478D00((char *)(a1 + 72), 0, a7, v15, v16, v17);
  *(_DWORD *)(a1 + 112) = 0;
  *(_QWORD *)(a1 + 104) = 0xFFFFFFFFLL;
  QT::QObject::QObject((QT::QObject *)(a1 + 120), nullptr);
  *(_QWORD *)(a1 + 136) = 0;
  *(_QWORD *)(a1 + 120) = &object_lifecycle_monitor_t___vtable;
  sub_478D00((char *)(a1 + 120), 0, a7, v18, v19, v20);
  *(_DWORD *)(a1 + 152) = -1;
  sub_478D00((char *)(a1 + 72), a4, a7, v21, v22, v23);
  qword_8D1DC8 = (void *)a1;
  *(_DWORD *)(a1 + 104) = a5;
  result = *a6;
  *(_QWORD *)(a1 + 108) = *a6;
  return result;
}
