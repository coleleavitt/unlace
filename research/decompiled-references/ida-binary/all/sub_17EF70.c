__int64 __fastcall sub_17EF70(char *a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v4; // [rsp+0h] [rbp-28h]

  v2 = a2;
  QT::QObject::QObject((QT::QObject *)a1, nullptr);
  *((_QWORD *)a1 + 2) = 0;
  *(_QWORD *)a1 = &object_lifecycle_monitor_t___vtable;
  sub_478D00(a1, v4);
  sub_1E95D0(a1 + 32);
  if ( a2 )
    v2 = a2 + 104;
  return sub_277E70(a1 + 80, v2);
}
