_QWORD *__fastcall sub_3FB2D0(__int64 a1, const QT::QPersistentModelIndex *a2)
{
  _QWORD *v2; // r12
  char v3; // al
  _QWORD *v4; // rdx
  char v5; // al

  v2 = *(_QWORD **)(a1 + 16);
  if ( v2 )
  {
    while ( 1 )
    {
      v3 = QT::compareThreeWay(a2, (const QT::QPersistentModelIndex *)(v2 + 4));
      v4 = (_QWORD *)v2[3];
      if ( v3 < 0 )
        v4 = (_QWORD *)v2[2];
      v5 = (unsigned __int8)v3 >> 7;
      if ( !v4 )
        break;
      v2 = v4;
    }
    if ( !v5 )
    {
      if ( (QT::compareThreeWay((const QT::QPersistentModelIndex *)(v2 + 4), a2) & 0x80u) == 0LL )
        return v2;
      return nullptr;
    }
  }
  else
  {
    v2 = (_QWORD *)(a1 + 8);
  }
  if ( *(_QWORD **)(a1 + 24) == v2 )
    return nullptr;
  v2 = (_QWORD *)std::_Rb_tree_decrement(v2);
  if ( (QT::compareThreeWay((const QT::QPersistentModelIndex *)(v2 + 4), a2) & 0x80u) != 0LL )
    return nullptr;
  return v2;
}
