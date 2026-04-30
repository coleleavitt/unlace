__int64 __fastcall sub_197810(QT::QObject *a1, __int64 a2)
{
  __int64 v3; // [rsp+0h] [rbp-18h]
  __int64 v4; // [rsp+0h] [rbp-18h]

  QT::QObject::QObject(a1, nullptr);
  *((_QWORD *)a1 + 2) = 0;
  *(_QWORD *)a1 = &object_lifecycle_monitor_t___vtable;
  sub_478D00((char *)a1, v3);
  *((_QWORD *)a1 + 4) = a2;
  *(_QWORD *)a1 = &bookmarks_listing_lifecycle_monitor_t___vtable;
  return sub_478D00((char *)a1, v4);
}
