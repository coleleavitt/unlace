__int64 __fastcall vault_files_dirtree_widget_t__::vfunc_27(__int64 a1)
{
  __int64 result; // rax

  result = sub_4DFF10(a1);
  if ( (_BYTE)result )
    return QT::QTreeView::expandAll((QT::QTreeView *)(a1 - 304));
  return result;
}
