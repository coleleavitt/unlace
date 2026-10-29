void __fastcall items_tree_model_t__::vfunc_4(QT::QAbstractItemModel *this)
{
  __int64 v2; // rdi

  *(_QWORD *)this = &items_tree_model_t___vtable;
  v2 = *((_QWORD *)this + 4);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  QT::QAbstractItemModel::~QAbstractItemModel(this);
  operator delete(this, 0x28u);
}
