_QWORD *__fastcall sub_4F7C50(__int64 a1, const QT::QObject *a2)
{
  _QWORD *v2; // rbp

  if ( !a2 || !QT::QMetaObject::cast((QT::QMetaObject *)&off_89C920, a2) )
    return nullptr;
  v2 = (_QWORD *)operator new(0x28u);
  sub_4F7BB0(v2, (__int64)a2);
  return v2;
}
