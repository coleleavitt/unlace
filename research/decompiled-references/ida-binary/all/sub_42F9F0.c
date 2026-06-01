__int64 __fastcall vault_files_dirtree_widget_t__::vfunc_5(QT::QTreeView *a1, __int64 a2)
{
  int v2; // eax
  int v4; // ecx

  v2 = *(unsigned __int16 *)(a2 + 8);
  if ( v2 != 3001 )
  {
    if ( v2 == 2006 )
      return 1;
    return bookmarks_dirtree_widget_t__::vfunc_5(a1, a2);
  }
  v4 = *((_DWORD *)a1 + 632);
  if ( v4 < 0
    || ((unsigned __int64)((v4 & 0x40) != 0) << v4) & ~*(_QWORD *)(a2 + 24)
     | ((unsigned __int64)((v4 & 0x40) == 0) << v4) & ~*(_QWORD *)(a2 + 16) )
  {
    return bookmarks_dirtree_widget_t__::vfunc_5(a1, a2);
  }
  sub_4E4640((char *)a1 + 304, 1159, 0);
  return 1;
}
