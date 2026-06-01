__int64 __fastcall worklists_dirtree_widget_t__::vfunc_43(__int64 a1)
{
  __int64 result; // rax
  unsigned __int8 v2; // [rsp+Fh] [rbp-19h]

  result = sub_524420((QT::QAbstractItemView *)(a1 - 304));
  if ( (_BYTE)result )
  {
    if ( !*(_BYTE *)(a1 + 2228) )
    {
      v2 = result;
      QT::QTreeView::expandAll((QT::QTreeView *)(a1 - 304));
      return v2;
    }
  }
  return result;
}
