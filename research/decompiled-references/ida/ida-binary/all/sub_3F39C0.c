__int64 __fastcall sub_3F39C0(__int64 a1)
{
  __int64 result; // rax

  QT::QTreeView::setColumnHidden(*(QT::QTreeView **)(a1 + 104), 1, *(_BYTE *)(a1 + 393) != 1);
  QT::QTreeView::setColumnHidden(*(QT::QTreeView **)(a1 + 104), 2, *(_BYTE *)(a1 + 394) != 1);
  result = QT::QTreeView::setColumnHidden(*(QT::QTreeView **)(a1 + 104), 3, *(_BYTE *)(a1 + 395) != 1);
  if ( !*(_BYTE *)(a1 + 464) )
    return QT::QTreeView::resizeColumnToContents(*(QT::QTreeView **)(a1 + 104), 0);
  return result;
}
