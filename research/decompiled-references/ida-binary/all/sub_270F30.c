__int64 (__fastcall **__fastcall sub_270F30(char *a1))()
{
  __int64 v1; // rax
  __int64 v3; // [rsp+0h] [rbp-18h]

  QT::QWidget::QWidget(a1, 0, 0);
  v1 = QT::QMetaObject::className((QT::QMetaObject *)&off_8837A0);
  sub_525E40(a1 + 40, &off_860440, 12, v1);
  QT::QObject::QObject((QT::QObject *)(a1 + 104), nullptr);
  *((_QWORD *)a1 + 15) = 0;
  *((_QWORD *)a1 + 13) = &object_lifecycle_monitor_t___vtable;
  sub_478D00(a1 + 104, v3);
  *(_QWORD *)a1 = &diff_fringe_t___vtable;
  *((_QWORD *)a1 + 2) = diff_fringe_t___vtable_at__16;
  *((_QWORD *)a1 + 5) = diff_fringe_t___vtable_at__40;
  return diff_fringe_t___vtable_at__40;
}
