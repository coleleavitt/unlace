__int64 __fastcall sub_523E50(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // r9
  _QWORD *v6; // r10
  unsigned __int64 v7; // rsi
  _QWORD *v8; // rax
  _QWORD *v9; // r8
  _QWORD *v11; // rdx

  if ( (*(_BYTE *)(a1 + 120) & 8) == 0 )
    return QT::QAbstractItemModel::hasChildren(a1, a2);
  v3 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 296) + 400LL))(*(_QWORD *)(a1 + 296));
  v4 = v3;
  if ( *(_QWORD *)(a1 + 256) )
  {
    v5 = *(_QWORD *)(a1 + 240);
    v6 = *(_QWORD **)(*(_QWORD *)(a1 + 232) + 8 * (v3 % v5));
    v7 = v3 % v5;
    if ( v6 )
    {
      v8 = (_QWORD *)*v6;
      if ( v4 == *(_QWORD *)(*v6 + 8LL) )
      {
LABEL_8:
        if ( v6 && *v6 )
          return 1;
      }
      else
      {
        while ( 1 )
        {
          v9 = (_QWORD *)*v8;
          if ( !*v8 )
            break;
          v6 = v8;
          if ( v7 != v9[1] % v5 )
            break;
          v8 = (_QWORD *)*v8;
          if ( v4 == v9[1] )
            goto LABEL_8;
        }
      }
    }
    return QT::QAbstractItemModel::hasChildren(a1, a2);
  }
  v11 = *(_QWORD **)(a1 + 248);
  if ( !v11 )
    return QT::QAbstractItemModel::hasChildren(a1, a2);
  while ( v3 != v11[1] )
  {
    v11 = (_QWORD *)*v11;
    if ( !v11 )
      return QT::QAbstractItemModel::hasChildren(a1, a2);
  }
  return 1;
}
