void __fastcall sub_4CE9B0(__int64 a1, __int64 a2, unsigned int a3, double a4)
{
  const QT::QObject *v5; // rbp
  __int64 v6; // rbx
  __int64 v7; // rbp
  _DWORD *v8; // r12
  __int64 v9; // rdx
  __int64 v10; // rcx

  v5 = *(const QT::QObject **)(*(_QWORD *)(a1 + 8) + 16LL);
  if ( v5 )
  {
    while ( 1 )
    {
      v6 = QT::QMetaObject::cast((QT::QMetaObject *)&off_898320, v5);
      if ( v6 )
        break;
      v5 = *(const QT::QObject **)(*((_QWORD *)v5 + 1) + 16LL);
      if ( !v5 )
        goto LABEL_8;
    }
  }
  else
  {
LABEL_8:
    v6 = 0;
  }
  v7 = sub_4C7A70(v6, a2);
  if ( v7 )
  {
    v8 = (_DWORD *)operator new(0xA0u);
    sub_4C5A40(v8, v6, v7, a1, a3, a4);
    if ( !sub_47C810(nullptr) )
      sub_4CBB30(v8, v6, v9, v10, a4);
  }
}
