__int64 __fastcall sub_49E160(__int64 a1)
{
  if ( *(_DWORD *)(a1 + 2376) == 2 )
    return QT::QTreeView::header(*(QT::QTreeView **)(a1 + 2384));
  else
    return QT::QTableView::horizontalHeader(*(QT::QTableView **)(a1 + 2472));
}
