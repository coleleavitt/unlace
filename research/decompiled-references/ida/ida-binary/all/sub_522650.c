__int64 __fastcall sub_522650(__int64 a1, double a2)
{
  __int64 v2; // rbx
  __int64 result; // rax
  QT::QHeaderView *v4; // rax

  v2 = *(_QWORD *)(a1 + 328);
  result = 0;
  if ( v2 )
  {
    v4 = (QT::QHeaderView *)QT::QTreeView::header(*(QT::QTreeView **)(a1 + 328));
    sub_4E3480(v2 + 304, v4, a2);
    return 1;
  }
  return result;
}
