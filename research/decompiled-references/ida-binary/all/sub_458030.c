__int64 __fastcall sub_458030(__int64 a1, const char *a2)
{
  QT::QTreeView *v2; // rdi

  v2 = (QT::QTreeView *)(a1 - 16);
  *(_QWORD *)v2 = &filesystem_dirtree_widget_t___vtable;
  *((_QWORD *)v2 + 2) = &unk_877018;
  *((_QWORD *)v2 + 30) = &unk_877068;
  *((_QWORD *)v2 + 38) = &unk_8770A8;
  *((_QWORD *)v2 + 311) = &unk_877238;
  return sub_42B460(v2, a2);
}
