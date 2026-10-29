void __fastcall actions_inspector_chooser_widget_t__::vfunc_29(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // rax

  if ( *(_DWORD *)(a1 + 2272) == 2 )
  {
    v2 = *(_QWORD *)(a1 + 2280);
    if ( !v2 )
      return;
    v1 = *(_QWORD *)(a1 + 2368);
    if ( v2 != v1 )
    {
      QT::QTreeView::sortByColumn(v2, 0xFFFFFFFFLL, 0);
      return;
    }
    goto LABEL_7;
  }
  v1 = *(_QWORD *)(a1 + 2368);
  if ( v1 )
LABEL_7:
    QT::QTableView::sortByColumn(v1, 0xFFFFFFFFLL, 0);
}
