__int64 __fastcall sub_1C3F30(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rbp
  __int64 result; // rax
  const QT::QObject *v4; // rbx
  const void *v5; // r13
  void *v6; // rax

  if ( (void **)(a2 + 32) != &qword_8CAED0 )
  {
    v2 = *(_QWORD *)(a2 + 40);
    if ( v2 > 1 )
    {
      v5 = *(const void **)(a2 + 32);
      v6 = qword_8CAED0;
      if ( *((_QWORD *)&xmmword_8CAED8 + 1) < v2 )
      {
        v6 = (void *)qvector_reserve(&qword_8CAED0, qword_8CAED0, *(_QWORD *)(a2 + 40), 1);
        qword_8CAED0 = v6;
      }
      *(_QWORD *)&xmmword_8CAED8 = v2;
      memmove(v6, v5, v2 - 1);
      *((char *)qword_8CAED0 + v2 - 1) = 0;
    }
    else
    {
      *(_QWORD *)&xmmword_8CAED8 = 0;
    }
  }
  result = *(_QWORD *)(a1 + 8);
  v4 = *(const QT::QObject **)(result + 16);
  if ( v4 )
  {
    while ( !QT::QMetaObject::cast((QT::QMetaObject *)&QT::QDialog::staticMetaObject, v4) )
    {
      result = *((_QWORD *)v4 + 1);
      v4 = *(const QT::QObject **)(result + 16);
      if ( !v4 )
        return result;
    }
    return (*(__int64 (__fastcall **)(const QT::QObject *))(*(_QWORD *)v4 + 440LL))(v4);
  }
  return result;
}
