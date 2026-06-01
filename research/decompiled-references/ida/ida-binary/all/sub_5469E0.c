void __fastcall sub_5469E0(__int64 a1, QT::QAbstractItemModel *a2)
{
  void (__fastcall *v2)(QT::QAbstractItemModel *, const char *); // rax

  v2 = *(void (__fastcall **)(QT::QAbstractItemModel *, const char *))(*(_QWORD *)a2 + 24LL);
  if ( v2 == dirtree_item_model_t__::vfunc_3 )
  {
    *(_QWORD *)a2 = &dirtree_item_model_t___vtable;
    sub_48AB90(a2, (const char *)a2);
  }
  else
  {
    ((void (__fastcall *)(QT::QAbstractItemModel *))v2)(a2);
  }
}
