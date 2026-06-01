unsigned __int64 __fastcall sub_4AED60(__int64 a1, __int64 a2, double a3)
{
  bool v3; // zf
  QT::QHeaderView *v5; // rsi
  int v6; // eax
  _QWORD v8[3]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v9; // [rsp+18h] [rbp-40h]
  __int64 v10; // [rsp+20h] [rbp-38h]
  unsigned __int64 v11; // [rsp+38h] [rbp-20h]

  v3 = *(_DWORD *)(a1 + 2376) == 2;
  v11 = __readfsqword(0x28u);
  if ( v3 )
    v5 = (QT::QHeaderView *)QT::QTreeView::header(*(QT::QTreeView **)(a1 + 2384));
  else
    v5 = (QT::QHeaderView *)QT::QTableView::horizontalHeader(*(QT::QTableView **)(a1 + 2472));
  sub_49DEA0((__int64)v8, v5);
  if ( (*(_BYTE *)(a1 + 2008) & 0x10) == 0 )
  {
    vault_files_dirtree_widget_t__::vfunc_28(a1 + 104, a2);
    v6 = *(_DWORD *)(a1 + 2376);
    if ( v6 != 1 )
      sub_49E380(a1, 2 * (unsigned int)(v6 == 0), (__int64)v8, 1, a3);
  }
  sub_547EF0(a1, v8, 1);
  if ( v9 )
  {
    v10 = 0;
    qfree(v9, (const char *)v8);
  }
  if ( v8[0] )
  {
    v8[1] = 0;
    qfree(v8[0], (const char *)v8);
  }
  return v11 - __readfsqword(0x28u);
}
