void __fastcall sub_4F2D20(QT::QObject *a1)
{
  const QT::QObject *v1; // rax
  __int64 v2; // rax
  char *v3; // rbx
  __int64 v4; // r12
  __int64 v5; // rax

  v1 = (const QT::QObject *)QT::QObject::sender(a1);
  v2 = QT::QMetaObject::cast((QT::QMetaObject *)&off_89D580, v1);
  if ( v2 )
  {
    v3 = (char *)v2;
    v4 = *(_QWORD *)(*(_QWORD *)(v2 + 8) + 16LL);
    v5 = sub_4F23C0((__int64)a1, v4, 0, 0);
    if ( v5 )
    {
      sub_48FF00((QT::QAbstractItemView *)v3, nullptr, *(__int64 **)(v5 + 112), 24, 0);
      if ( v3[1984] >= 0 )
        sub_4F2BB0((__int64)a1, v4);
    }
  }
}
