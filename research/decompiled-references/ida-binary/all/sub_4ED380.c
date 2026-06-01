void __fastcall sub_4ED380(__int64 a1, const QT::QObject *a2, __int64 a3)
{
  const QT::QObject *v3; // r15
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rdi
  void (*v9)(); // r9

  if ( a2 )
  {
    v3 = a2;
    while ( 1 )
    {
      v6 = QT::QMetaObject::cast((QT::QMetaObject *)&off_89A740, v3);
      v3 = *(const QT::QObject **)(*((_QWORD *)v3 + 1) + 16LL);
      if ( !v3 )
        break;
      if ( v6 )
        goto LABEL_5;
    }
    if ( !v6 )
      return;
LABEL_5:
    v7 = sub_4F23C0(*(_QWORD *)(v6 + 56), a2, 0, 0);
    v8 = *(_QWORD *)(*(_QWORD *)(v6 + 56) + 40LL);
    v9 = *(void (**)())(*(_QWORD *)v8 + 72LL);
    if ( v9 != nullsub_42 )
      ((void (__fastcall *)(__int64, __int64, const QT::QObject *, __int64, __int64))v9)(v8, v7, a2, a1, a3);
  }
}
