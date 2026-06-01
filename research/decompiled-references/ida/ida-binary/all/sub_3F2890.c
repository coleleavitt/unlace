_QWORD *__fastcall sub_3F2890(_QWORD *a1, __int64 a2, __int64 a3)
{
  const QT::QObject *v4; // rsi
  __int64 v5; // rax

  if ( *(int *)a3 >= 0
    && *(int *)(a3 + 4) >= 0
    && (v4 = *(const QT::QObject **)(a3 + 16)) != nullptr
    && (v5 = QT::QMetaObject::cast((QT::QMetaObject *)&QT::QSortFilterProxyModel::staticMetaObject, v4)) != 0 )
  {
    (*(void (__fastcall **)(_QWORD *, __int64, __int64))(*(_QWORD *)v5 + 400LL))(a1, v5, a3);
  }
  else
  {
    *a1 = -1;
    a1[1] = 0;
    a1[2] = 0;
  }
  return a1;
}
