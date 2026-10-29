__int64 __fastcall sub_546760(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rbp
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // r12

  v3 = *(_QWORD *)(a2 + 16);
  if ( v3 != *(_QWORD *)(a3 + 16) )
    return 0;
  v4 = *(_QWORD *)(a3 + 8);
  v5 = *(_QWORD *)(a2 + 8);
  if ( v4 == v5 )
    return 1;
  v6 = 16 * v3;
  v7 = v5 + v6;
  if ( v5 == v5 + v6 )
    return 1;
  while ( (unsigned __int8)QT::comparesEqual(
                             (const QT::QPersistentModelIndex *)v5,
                             (const QT::QPersistentModelIndex *)v4)
       && (unsigned __int8)QT::comparesEqual(
                             (const QT::QPersistentModelIndex *)(v5 + 8),
                             (const QT::QPersistentModelIndex *)(v4 + 8)) )
  {
    v5 += 16;
    v4 += 16;
    if ( v7 == v5 )
      return 1;
  }
  return 0;
}
