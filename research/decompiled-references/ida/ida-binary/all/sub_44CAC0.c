__int64 __fastcall sub_44CAC0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  _QWORD *v3; // rbx
  QT::QAbstractItemView *v4; // r12
  __int64 v5; // rbp

  v2 = *(_QWORD *)(a2 + 200);
  if ( !v2 )
    return 7;
  v3 = *(_QWORD **)v2;
  v4 = *(QT::QAbstractItemView **)a2;
  v5 = *(_QWORD *)v2 + 16LL * *(_QWORD *)(v2 + 8);
  if ( *(_QWORD *)v2 == v5 )
    return 7;
  while ( !(unsigned __int8)sub_44C720(v4, v3, 1) )
  {
    v3 += 2;
    if ( (_QWORD *)v5 == v3 )
      return 7;
  }
  return 3;
}
