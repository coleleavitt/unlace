unsigned __int64 __fastcall sub_34F5F0(__int64 a1, char a2)
{
  QT::QObject *v3; // r12
  __int64 v4[4]; // [rsp+0h] [rbp-48h] BYREF
  char v5; // [rsp+20h] [rbp-28h]
  unsigned __int64 v6; // [rsp+28h] [rbp-20h]

  v6 = __readfsqword(0x28u);
  if ( a2
    && !*(_BYTE *)(a1 + 69)
    && (unsigned int)sub_1698A0(
                       1,
                       (int)"Please note that enabling sharing, will cause current navigation history to be lost.\n"
                            "Should we proceed?") != 1 )
  {
    v3 = *(QT::QObject **)(*(_QWORD *)(a1 + 56) + 1256LL);
    QT::QObject::QObject((QT::QObject *)v4, nullptr);
    v4[2] = 0;
    sub_478D00((char *)v4, (__int64)&object_lifecycle_monitor_t___vtable);
    v5 = QT::QObject::blockSignals(v3, 1);
    QT::QAbstractButton::setChecked(*(QT::QAbstractButton **)(*(_QWORD *)(a1 + 56) + 1256LL), 0);
    sub_51A3D0((QT::QObject *)v4);
  }
  return v6 - __readfsqword(0x28u);
}
