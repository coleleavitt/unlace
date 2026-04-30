__int64 __fastcall sub_17A110(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 v4; // rax
  __int64 v5; // rax

  v2 = *(_DWORD *)(a2 + 8);
  if ( v2 == 25 || v2 == 58 )
  {
    v4 = QT::QMetaObject::cast((QT::QMetaObject *)&off_87DE00, *(const QT::QObject **)a2);
    if ( v4 && !(unsigned __int8)sub_3AE210(v4) && *(_BYTE *)(*(_QWORD *)(a2 + 208) + 31LL) != 12 )
      return 3;
    if ( *(_DWORD *)(a2 + 8) != 10 )
      return 7;
  }
  else if ( v2 != 10 )
  {
    return 7;
  }
  v5 = *(_QWORD *)(a2 + 200);
  if ( !v5 || !*(_QWORD *)(v5 + 8) )
    return 7;
  return 3;
}
