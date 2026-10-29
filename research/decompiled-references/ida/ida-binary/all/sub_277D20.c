__int64 __fastcall sub_277D20(__int64 a1)
{
  __int64 v1; // r12
  QT::QObject *v2; // rbx
  __int64 result; // rax
  __int64 v5; // [rsp+0h] [rbp-28h]

  v1 = 2;
  v2 = (QT::QObject *)(a1 + 16);
  QT::QObject::QObject((QT::QObject *)a1, nullptr);
  *(_QWORD *)a1 = &merge_controller_t___vtable;
  do
  {
    QT::QObject::QObject(v2, nullptr);
    *((_QWORD *)v2 + 2) = 0;
    *(_QWORD *)v2 = &object_lifecycle_monitor_t___vtable;
    result = sub_478D00((char *)v2, v5);
    v2 = (QT::QObject *)((char *)v2 + 32);
  }
  while ( v1-- != 0 );
  *(_QWORD *)(a1 + 112) = 0;
  *(_QWORD *)(a1 + 120) = -1;
  *(_QWORD *)(a1 + 128) = 0;
  *(_DWORD *)(a1 + 136) = 1;
  *(_QWORD *)(a1 + 144) = 0;
  *(_QWORD *)(a1 + 168) = 0;
  *(_OWORD *)(a1 + 152) = 0;
  return result;
}
