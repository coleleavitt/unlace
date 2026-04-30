unsigned __int64 __fastcall sub_49FE90(__int64 a1, int a2, char a3, double a4)
{
  bool v4; // zf
  QT::QHeaderView *v6; // r12
  int v7; // eax
  _QWORD v9[3]; // [rsp+0h] [rbp-68h] BYREF
  __int64 v10; // [rsp+18h] [rbp-50h]
  __int64 v11; // [rsp+20h] [rbp-48h]
  unsigned __int64 v12; // [rsp+38h] [rbp-30h]

  v4 = *(_DWORD *)(a1 + 2376) == 2;
  v12 = __readfsqword(0x28u);
  if ( v4 )
    v6 = (QT::QHeaderView *)QT::QTreeView::header(*(QT::QTreeView **)(a1 + 2384));
  else
    v6 = (QT::QHeaderView *)QT::QTableView::horizontalHeader(*(QT::QTableView **)(a1 + 2472));
  if ( v6 )
  {
    sub_49DEA0((__int64)v9, v6);
    QT::QHeaderView::setSectionHidden(v6, a2, a3 != 1);
    v7 = *(_DWORD *)(a1 + 2376);
    if ( v7 != 1 )
      sub_49E380(a1, 2 * (unsigned int)(v7 != 2), (__int64)v9, 4, a4);
    sub_547EF0(a1, v9, 4);
    if ( v10 )
    {
      v11 = 0;
      qfree(v10, (const char *)v9);
    }
    if ( v9[0] )
    {
      v9[1] = 0;
      qfree(v9[0], (const char *)v9);
    }
  }
  return v12 - __readfsqword(0x28u);
}
