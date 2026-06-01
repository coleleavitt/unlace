void __fastcall watch_view_t__::vfunc_3(QT::QAbstractItemView *this, const char *a2, double a3)
{
  bool v4; // zf
  QT::QAbstractItemModel *v5; // rax
  QT::QAbstractItemModel *v6; // rbp
  void (__fastcall *v7)(QT::QAbstractItemModel *); // rax
  __int64 v8; // rdi
  QT::QAbstractItemView **v9; // rdi
  QT::QAbstractItemView **v10; // rdx
  __int64 v11; // rdi
  __int64 v12; // rdi

  *(_QWORD *)this = &watch_view_t___vtable;
  v4 = *((_BYTE *)this + 1113) == 0;
  *((_QWORD *)this + 2) = watch_view_t___vtable_at__16;
  *((_QWORD *)this + 5) = watch_view_t___vtable_at__40;
  if ( v4 )
    sub_3E0560(this, a3);
  v5 = (QT::QAbstractItemModel *)QT::QAbstractItemView::model(this);
  v6 = v5;
  if ( v5 )
  {
    v7 = *(void (__fastcall **)(QT::QAbstractItemModel *))(*(_QWORD *)v5 + 32LL);
    if ( v7 == items_tree_model_t__::vfunc_4 )
    {
      v8 = *((_QWORD *)v6 + 4);
      *(_QWORD *)v6 = &items_tree_model_t___vtable;
      if ( v8 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
      QT::QAbstractItemModel::~QAbstractItemModel(v6);
      a2 = (const char *)&qword_28;
      operator delete(v6, 0x28u);
    }
    else
    {
      v7(v6);
    }
  }
  v9 = (QT::QAbstractItemView **)qword_8D1240;
  v10 = (QT::QAbstractItemView **)(qword_8D1240 + 8 * xmmword_8D1248);
  if ( (QT::QAbstractItemView **)qword_8D1240 != v10 )
  {
    while ( this != *v9 )
    {
      if ( v10 == ++v9 )
        goto LABEL_14;
    }
    if ( v10 != v9 )
    {
      a2 = (const char *)(v9 + 1);
      memmove(v9, v9 + 1, (char *)v10 - (char *)v9 - 8);
      *(_QWORD *)&xmmword_8D1248 = xmmword_8D1248 - 1;
    }
  }
LABEL_14:
  v11 = *((_QWORD *)this + 140);
  if ( v11 )
  {
    *((_QWORD *)this + 141) = 0;
    qfree(v11, a2);
  }
  v12 = *((_QWORD *)this + 6);
  *((_QWORD *)this + 5) = &unk_894E08;
  if ( v12 )
  {
    *((_QWORD *)this + 7) = 0;
    qfree(v12, a2);
  }
  QT::QTreeView::~QTreeView(this);
}
