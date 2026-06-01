__int64 __fastcall sub_2A6BE0(__int64 a1)
{
  const QT::QObject *v1; // rsi

  if ( *(_BYTE *)(a1 + 48) )
    return 0;
  v1 = *(const QT::QObject **)(a1 + 40);
  if ( !v1 )
    return 0;
  else
    return QT::QMetaObject::cast((QT::QMetaObject *)&off_87B020, v1);
}
