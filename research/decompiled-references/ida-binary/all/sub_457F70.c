void __fastcall sub_457F70(_QWORD *a1, const char *a2)
{
  *(a1 - 311) = &filesystem_dirtree_widget_t___vtable;
  *(a1 - 309) = &unk_877018;
  *(a1 - 281) = &unk_877068;
  *(a1 - 273) = &unk_8770A8;
  *a1 = &unk_877238;
  sub_42B460((QT::QTreeView *)(a1 - 311), a2);
  operator delete(a1 - 311, 0x9E8u);
}
