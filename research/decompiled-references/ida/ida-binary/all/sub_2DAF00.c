__int64 __fastcall sub_2DAF00(__int64 a1, const QT::QObject *a2)
{
  _QWORD *v2; // rbp

  if ( !a2 )
    return 0;
  if ( !QT::QMetaObject::cast((QT::QMetaObject *)&off_87B020, a2) )
    return sub_4F7C50(a1, a2);
  v2 = (_QWORD *)operator new(0x28u);
  sub_2D9460(v2, (__int64)a2);
  return (__int64)v2;
}
