unsigned __int64 __fastcall sub_49E920(__int64 a1, double a2)
{
  QT::QHeaderView *v2; // rsi
  int v4; // eax
  _QWORD v5[3]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v6; // [rsp+18h] [rbp-40h]
  __int64 v7; // [rsp+20h] [rbp-38h]
  unsigned __int64 v8; // [rsp+38h] [rbp-20h]

  v8 = __readfsqword(0x28u);
  *(_DWORD *)(a1 + 2008) |= 0x80u;
  if ( *(_DWORD *)(a1 + 2376) == 2 )
    v2 = (QT::QHeaderView *)QT::QTreeView::header(*(QT::QTreeView **)(a1 + 2384));
  else
    v2 = (QT::QHeaderView *)QT::QTableView::horizontalHeader(*(QT::QTableView **)(a1 + 2472));
  sub_49DEA0((__int64)v5, v2);
  if ( (*(_BYTE *)(a1 + 2008) & 0x30) == 0 )
  {
    v4 = *(_DWORD *)(a1 + 2376);
    if ( (v4 & 0xFFFFFFFD) == 0 )
      sub_49E380(a1, 2 * (unsigned int)(v4 != 2), (__int64)v5, 2, a2);
  }
  sub_547EF0(a1, v5, 2);
  if ( v6 )
  {
    v7 = 0;
    qfree(v6, (const char *)v5);
  }
  if ( v5[0] )
  {
    v5[1] = 0;
    qfree(v5[0], (const char *)v5);
  }
  return v8 - __readfsqword(0x28u);
}
