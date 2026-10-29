__int64 __fastcall sub_4990D0(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // r8
  _QWORD *v7; // r9
  unsigned __int64 v8; // r10
  _QWORD *v9; // rax
  _QWORD *v10; // rdi
  _QWORD *v12; // rdx

  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 304) + 2392LL);
  if ( *(_BYTE *)(v3 + 8) <= 2u || (*(_BYTE *)(v3 + 10) & 1) == 0 )
    return QT::QAbstractItemModel::hasChildren(a1, a2);
  v4 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 296) + 400LL))(*(_QWORD *)(a1 + 296));
  v5 = v4;
  if ( *(_QWORD *)(a1 + 256) )
  {
    v6 = *(_QWORD *)(a1 + 240);
    v7 = *(_QWORD **)(*(_QWORD *)(a1 + 232) + 8 * (v4 % v6));
    v8 = v4 % v6;
    if ( !v7 )
      return QT::QAbstractItemModel::hasChildren(a1, a2);
    v9 = (_QWORD *)*v7;
    if ( v5 != *(_QWORD *)(*v7 + 8LL) )
    {
      while ( 1 )
      {
        v10 = (_QWORD *)*v9;
        if ( !*v9 )
          break;
        v7 = v9;
        if ( v8 != v10[1] % v6 )
          break;
        v9 = (_QWORD *)*v9;
        if ( v5 == v10[1] )
          goto LABEL_9;
      }
      return QT::QAbstractItemModel::hasChildren(a1, a2);
    }
LABEL_9:
    if ( !v7 || !*v7 )
      return QT::QAbstractItemModel::hasChildren(a1, a2);
  }
  else
  {
    v12 = *(_QWORD **)(a1 + 248);
    if ( !v12 )
      return QT::QAbstractItemModel::hasChildren(a1, a2);
    while ( v4 != v12[1] )
    {
      v12 = (_QWORD *)*v12;
      if ( !v12 )
        return QT::QAbstractItemModel::hasChildren(a1, a2);
    }
  }
  return 1;
}
