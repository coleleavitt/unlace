__int64 __fastcall sub_4B8340(__int64 a1, const QT::QObject *a2, __int64 a3)
{
  __int64 *v3; // r13
  _QWORD *v6; // rax
  __int64 v8; // rdi
  _QWORD *v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r14
  __int64 result; // rax

  v3 = &qword_8D1CE0;
  v6 = *(_QWORD **)(a3 + 16);
  if ( v6 )
  {
    v8 = a3 + 8;
    v9 = (_QWORD *)(a3 + 8);
    do
    {
      while ( 1 )
      {
        v10 = v6[2];
        v11 = v6[3];
        if ( v6[4] >= (unsigned __int64)a2 )
          break;
        v6 = (_QWORD *)v6[3];
        if ( !v11 )
          goto LABEL_6;
      }
      v9 = v6;
      v6 = (_QWORD *)v6[2];
    }
    while ( v10 );
LABEL_6:
    v3 = &qword_8D1CE0;
    if ( (_QWORD *)v8 != v9 && (unsigned __int64)a2 >= v9[4] )
    {
      v3 = (__int64 *)v9[5];
      if ( !v3 )
        v3 = &qword_8D1CE0;
    }
  }
  v12 = QT::QMetaObject::cast((QT::QMetaObject *)&off_86E180, a2);
  if ( v12 )
  {
    (**(void (__fastcall ***)(__int64, __int64, __int64 *))a1)(a1, v12, v3);
    return sub_4B82E0(a1, v12, a3);
  }
  v12 = QT::QMetaObject::cast((QT::QMetaObject *)&off_86E1C0, a2);
  if ( v12 )
  {
    (*(void (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)a1 + 8LL))(a1, v12, v3);
    return sub_4B82E0(a1, v12, a3);
  }
  result = QT::QMetaObject::cast((QT::QMetaObject *)&off_86E240, a2);
  if ( result )
    return (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)a1 + 16LL))(a1, result, v3);
  return result;
}
