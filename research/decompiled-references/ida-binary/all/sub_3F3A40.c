__int64 __fastcall sub_3F3A40(__int64 a1)
{
  QT::QHeaderView *v1; // rax
  QT::QAbstractButton *v2; // r12
  QT::QHeaderView *v3; // rbp
  char isSectionHidden; // al
  QT::QAbstractButton *v5; // r12
  char v6; // al
  QT::QAbstractButton *v7; // r12
  char v8; // al
  __int64 result; // rax

  v1 = (QT::QHeaderView *)QT::QTreeView::header(*(QT::QTreeView **)(a1 + 104));
  v2 = *(QT::QAbstractButton **)(a1 + 208);
  v3 = v1;
  isSectionHidden = QT::QHeaderView::isSectionHidden(v1, 1);
  QT::QAbstractButton::setChecked(v2, isSectionHidden != 1);
  v5 = *(QT::QAbstractButton **)(a1 + 216);
  v6 = QT::QHeaderView::isSectionHidden(v3, 2);
  QT::QAbstractButton::setChecked(v5, v6 != 1);
  v7 = *(QT::QAbstractButton **)(a1 + 224);
  v8 = QT::QHeaderView::isSectionHidden(v3, 3);
  QT::QAbstractButton::setChecked(v7, v8 != 1);
  *(_BYTE *)(a1 + 393) = QT::QHeaderView::isSectionHidden(v3, 1) ^ 1;
  *(_BYTE *)(a1 + 394) = QT::QHeaderView::isSectionHidden(v3, 2) ^ 1;
  result = (unsigned int)QT::QHeaderView::isSectionHidden(v3, 3) ^ 1;
  *(_BYTE *)(a1 + 395) = result;
  return result;
}
