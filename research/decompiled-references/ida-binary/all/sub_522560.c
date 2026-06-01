__int64 __fastcall sub_522560(__int64 a1)
{
  QT::QTreeView *v1; // rdi
  QT::QHeaderView *v2; // rax

  v1 = *(QT::QTreeView **)(a1 + 328);
  if ( !v1 )
    return 0;
  v2 = (QT::QHeaderView *)QT::QTreeView::header(v1);
  QT::QHeaderView::setSectionHidden(v2, dword_8C3160, 1);
  return 1;
}
