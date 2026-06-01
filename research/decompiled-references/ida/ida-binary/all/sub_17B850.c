__int64 __fastcall sub_17B850(__int64 a1, const QT::QObject **a2)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v4; // rdi
  __int64 v5; // rsi
  char v6; // dl
  __int64 result; // rax

  v2 = QT::QMetaObject::cast((QT::QMetaObject *)&off_87B020, *a2);
  if ( !v2 )
    return 7;
  v3 = v2;
  if ( (unsigned int)sub_1EB590(v2) != 2 || (v4 = *(_QWORD *)(v3 + 896)) == 0 )
  {
    v4 = 0;
    if ( (unsigned int)sub_1EB590(v3) == 3 )
      v4 = *(_QWORD *)(v3 + 904);
  }
  if ( *(_DWORD *)(v4 + 384) || !*(_BYTE *)(v4 + 29) )
    return 7;
  v5 = *(_QWORD *)(v4 + 440);
  if ( v5 )
    v5 = *(_QWORD *)(v5 + 8);
  v6 = sub_2BD6A0(v4, v5);
  result = 3;
  if ( (v6 & 1) == 0 )
    return 7;
  return result;
}
