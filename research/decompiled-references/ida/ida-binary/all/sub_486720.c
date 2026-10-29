__int64 __fastcall base_dirtree_widget_t::sync_view_helper(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v7; // r12
  bool v8; // zf
  __int64 *v9; // r14
  __int64 v10; // rax
  __int64 v12; // [rsp+0h] [rbp-58h] BYREF
  __int128 v13; // [rsp+8h] [rbp-50h]
  int v14; // [rsp+18h] [rbp-40h]
  unsigned __int64 v15; // [rsp+28h] [rbp-30h]

  v15 = __readfsqword(0x28u);
  if ( (*(_BYTE *)(a1 + 64) & 2) == 0
    || (unsigned __int8)QT::QTreeView::isExpanded(
                          *(_QWORD *)(a1 + 32),
                          a2,
                          a3,
                          a4,
                          a5,
                          a6,
                          v12,
                          v13,
                          *((_QWORD *)&v13 + 1)) )
  {
    v7 = sub_4DE3F0(*(_QWORD *)(a1 + 56), *a4);
    if ( v7 )
    {
      v8 = *(_BYTE *)(a1 + 68) == 0;
      LOBYTE(v14) = 0;
      v12 = 0;
      v13 = 0;
      if ( v8 )
        v9 = (__int64 *)(*(_QWORD *)(a1 + 56) + 24LL);
      else
        v9 = &v12;
      v10 = QT::QAbstractItemView::model(*(QT::QAbstractItemView **)(a1 + 8));
      (*(void (__fastcall **)(__int64, _QWORD, __int64, __int64, __int64 *, _QWORD, __int64, _QWORD, _QWORD, int))(*(_QWORD *)v10 + 432LL))(
        v10,
        *(_QWORD *)(a1 + 48),
        a2,
        v7,
        v9,
        *(_QWORD *)(a1 + 8),
        v12,
        v13,
        *((_QWORD *)&v13 + 1),
        v14);
      if ( *(_BYTE *)(v7 + 24) )
        QT::QTreeView::setExpanded(*(_QWORD *)(a1 + 32), a2);
      sub_4DE2C0(&v12);
    }
  }
  return 0;
}
