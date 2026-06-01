__int64 __fastcall sub_2DC6E0(__int64 a1)
{
  const QT::QObject *v1; // rsi
  __int64 v2; // rax
  const QT::QObject *v3; // rsi

  if ( !QT::QCoreApplication::self )
    return 0;
  v1 = (const QT::QObject *)sub_47C4D0(QT::QCoreApplication::self + 2, a1);
  if ( !v1 )
    return 0;
  v2 = QT::QMetaObject::cast((QT::QMetaObject *)&off_89D540, v1);
  if ( !v2 )
    return 0;
  v3 = nullptr;
  if ( !*(_BYTE *)(v2 + 64) )
    v3 = *(const QT::QObject **)(v2 + 56);
  return QT::QMetaObject::cast((QT::QMetaObject *)&off_887C80, v3);
}
