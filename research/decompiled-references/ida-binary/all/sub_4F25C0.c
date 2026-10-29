__int64 __fastcall sub_4F25C0(QT::QObject *a1)
{
  const QT::QObject *v1; // rbx
  __int64 v2; // r12
  QT::QCalendarWidget *v3; // r11
  __int64 v4; // rax
  __int64 *v5; // r12
  __int64 result; // rax
  __int64 v7; // rdi
  void (*v8)(); // rdx

  v1 = (const QT::QObject *)QT::QObject::sender(a1);
  QT::QMetaObject::cast((QT::QMetaObject *)&QT::QCalendarWidget::staticMetaObject, v1);
  v2 = sub_4F23C0((__int64)a1, (__int64)v1, 0, 0);
  v4 = QT::QCalendarWidget::selectedDate(v3);
  v5 = *(__int64 **)(v2 + 104);
  result = sub_51A470(v4);
  *v5 = result;
  if ( v1 )
  {
    result = *((_QWORD *)v1 + 1);
    if ( (*(_BYTE *)(result + 48) & 1) != 0 )
    {
      result = sub_4F23C0((__int64)a1, (__int64)v1, 0, 0);
      if ( result )
      {
        v7 = *((_QWORD *)a1 + 5);
        v8 = *(void (**)())(*(_QWORD *)v7 + 32LL);
        if ( v8 != nullsub_39 )
          return ((__int64 (__fastcall *)(__int64, __int64))v8)(v7, result);
      }
    }
  }
  return result;
}
