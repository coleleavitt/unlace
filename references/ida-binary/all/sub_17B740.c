__int64 __fastcall sub_17B740(__int64 a1, const QT::QObject **a2)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  int v4; // edx
  __int64 v5; // rax
  __int64 v6; // rdx
  unsigned __int8 *v7; // rax
  unsigned __int8 *v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 result; // rax

  v2 = QT::QMetaObject::cast((QT::QMetaObject *)&off_87B020, *a2);
  if ( !v2 )
    return 7;
  v3 = v2;
  if ( (unsigned int)sub_1EB590(v2) != 2 || (v5 = *(_QWORD *)(v3 + 896)) == 0 )
  {
    v4 = sub_1EB590(v3);
    v5 = 0;
    if ( v4 == 3 )
      v5 = *(_QWORD *)(v3 + 904);
  }
  v6 = *(_QWORD *)(v5 + 200);
  if ( !v6 )
    return 7;
  v7 = *(unsigned __int8 **)(v5 + 192);
  v8 = &v7[20 * v6];
  v9 = 0;
  do
  {
    v10 = *v7;
    v7 += 20;
    v9 += v10;
  }
  while ( v7 != v8 );
  result = 3;
  if ( !v9 )
    return 7;
  return result;
}
