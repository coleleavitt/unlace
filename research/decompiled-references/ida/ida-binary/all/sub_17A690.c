__int64 __fastcall sub_17A690(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 result; // rax
  __int64 v4; // rax
  char v5; // dl

  v2 = *(_DWORD *)(a2 + 8);
  if ( v2 != 58 && v2 != 25 )
    return 7;
  v4 = QT::QMetaObject::cast((QT::QMetaObject *)&off_87DE00, *(const QT::QObject **)a2);
  if ( !v4 )
    return 7;
  v5 = sub_3AE210(v4);
  result = 3;
  if ( v5 )
    return 7;
  return result;
}
