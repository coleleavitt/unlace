__int64 __fastcall sub_49FFB0(__int64 a1)
{
  __int64 result; // rax

  if ( *(_DWORD *)(a1 + 2376) == 2 )
  {
    result = *(_QWORD *)(a1 + 2384);
    if ( !result )
      return result;
    if ( *(_QWORD *)(a1 + 2472) != result )
      return QT::QTreeView::sortByColumn(*(_QWORD *)(a1 + 2384), 0xFFFFFFFFLL, 0);
    return QT::QTableView::sortByColumn(result, 0xFFFFFFFFLL, 0);
  }
  result = *(_QWORD *)(a1 + 2472);
  if ( result )
    return QT::QTableView::sortByColumn(result, 0xFFFFFFFFLL, 0);
  return result;
}
