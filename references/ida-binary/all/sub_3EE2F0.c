__int64 __fastcall sub_3EE2F0(__int64 a1)
{
  QT::QHeaderView *v1; // rbp
  char isChecked; // al
  char v3; // al
  char v4; // al
  __int64 result; // rax
  bool v6; // zf

  v1 = (QT::QHeaderView *)QT::QTreeView::header(*(QT::QTreeView **)(a1 + 104));
  isChecked = QT::QAbstractButton::isChecked(*(QT::QAbstractButton **)(a1 + 208));
  QT::QHeaderView::setSectionHidden(v1, 1, isChecked != 1);
  v3 = QT::QAbstractButton::isChecked(*(QT::QAbstractButton **)(a1 + 216));
  QT::QHeaderView::setSectionHidden(v1, 2, v3 != 1);
  v4 = QT::QAbstractButton::isChecked(*(QT::QAbstractButton **)(a1 + 224));
  QT::QHeaderView::setSectionHidden(v1, 3, v4 != 1);
  *(_BYTE *)(a1 + 393) = QT::QHeaderView::isSectionHidden(v1, 1) ^ 1;
  *(_BYTE *)(a1 + 394) = QT::QHeaderView::isSectionHidden(v1, 2) ^ 1;
  result = (unsigned int)QT::QHeaderView::isSectionHidden(v1, 3) ^ 1;
  v6 = *(_BYTE *)(a1 + 464) == 0;
  *(_BYTE *)(a1 + 395) = result;
  if ( v6 )
    return QT::QTreeView::resizeColumnToContents(*(QT::QTreeView **)(a1 + 104), 0);
  return result;
}
