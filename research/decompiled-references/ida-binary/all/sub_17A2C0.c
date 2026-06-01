__int64 __fastcall sub_17A2C0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax

  if ( !QT::QMetaObject::cast((QT::QMetaObject *)&off_87DE00, *(const QT::QObject **)a2) )
    return 7;
  v2 = *(_QWORD *)(a2 + 208);
  if ( *(_QWORD *)(v2 + 16) > 0xFFFFFFFFFFFFFFFDLL || *(_BYTE *)(v2 + 30) || *(_BYTE *)(v2 + 31) != 13 )
    return 7;
  if ( *(_QWORD *)(v2 + 32) == -1 )
  {
    if ( *(_QWORD *)(v2 + 216) < *(_QWORD *)(v2 + 208) || (get_tinfo_property(*(_QWORD *)(v2 + 8), 306) & 0x400) != 0 )
      return 3;
    return 7;
  }
  if ( (*(_BYTE *)(v2 + 181) & 4) == 0 )
    return 7;
  return 3;
}
