_QWORD *__fastcall sub_3FB3A0(_QWORD *a1, _QWORD *a2, const QT::QPersistentModelIndex *a3)
{
  _QWORD *result; // rax
  __int64 v5; // r13
  char v6; // cl
  __int64 v7; // r13

  if ( a2 == a1 + 1 )
  {
    if ( a1[5] && (QT::compareThreeWay((const QT::QPersistentModelIndex *)(a1[4] + 32LL), a3) & 0x80u) != 0LL )
      return nullptr;
    return sub_3FB2D0((__int64)a1, a3);
  }
  if ( (QT::compareThreeWay(a3, (const QT::QPersistentModelIndex *)(a2 + 4)) & 0x80u) != 0LL )
  {
    result = (_QWORD *)a1[3];
    if ( result == a2 )
      return result;
    v5 = std::_Rb_tree_decrement(a2);
    if ( (QT::compareThreeWay((const QT::QPersistentModelIndex *)(v5 + 32), a3) & 0x80u) != 0LL )
    {
      result = a2;
      if ( !*(_QWORD *)(v5 + 24) )
        return nullptr;
      return result;
    }
    return sub_3FB2D0((__int64)a1, a3);
  }
  v6 = QT::compareThreeWay((const QT::QPersistentModelIndex *)(a2 + 4), a3);
  result = a2;
  if ( v6 >= 0 )
    return result;
  if ( (_QWORD *)a1[4] == a2 )
    return nullptr;
  v7 = std::_Rb_tree_increment(a2);
  if ( (QT::compareThreeWay(a3, (const QT::QPersistentModelIndex *)(v7 + 32)) & 0x80u) == 0LL )
    return sub_3FB2D0((__int64)a1, a3);
  result = (_QWORD *)v7;
  if ( !a2[3] )
    return nullptr;
  return result;
}
