void __fastcall worklist_picker_item_model_t__::vfunc_4(QT::QAbstractItemModel *a1, const char *a2)
{
  *(_QWORD *)a1 = &worklist_picker_item_model_t___vtable;
  worklists_item_model_t__::vfunc_3(a1, a2);
  operator delete(a1, 0x200u);
}
