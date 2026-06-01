void __fastcall xref_tree_t__::vfunc_3(QT::QWidget *this, const char *a2)
{
  __int64 v3; // rbp
  __int64 v4; // r12
  volatile signed __int32 *v5; // rax
  volatile signed __int32 *v6; // rax
  void *v7; // rdi
  volatile signed __int32 *v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rdi
  QT::QPersistentModelIndex *v11; // rbp
  QT::QPersistentModelIndex *v12; // r12
  QT::QPersistentModelIndex *v13; // rdi
  void *v14; // rdi

  *(_QWORD *)this = &xref_tree_t___vtable;
  *((_QWORD *)this + 2) = xref_tree_t___vtable_at__16;
  *((_QWORD *)this + 5) = xref_tree_t___vtable_at__40;
  sub_3EFE40((__int64)this);
  v3 = *((_QWORD *)this + 52);
  while ( v3 )
  {
    v4 = v3;
    sub_3EF890(*(_QWORD **)(v3 + 24));
    v3 = *(_QWORD *)(v3 + 16);
    QT::QPersistentModelIndex::~QPersistentModelIndex((QT::QPersistentModelIndex *)(v4 + 32));
    a2 = (const char *)&dword_30;
    operator delete((void *)v4, 0x30u);
  }
  v5 = *((volatile signed __int32 **)this + 45);
  *((_BYTE *)this + 448) = 0;
  if ( v5 && !_InterlockedSub(v5, 1u) )
  {
    v11 = *((QT::QPersistentModelIndex **)this + 46);
    v12 = (QT::QPersistentModelIndex *)((char *)v11 + 8 * *((_QWORD *)this + 47));
    while ( v12 != v11 )
    {
      v13 = v11;
      v11 = (QT::QPersistentModelIndex *)((char *)v11 + 8);
      QT::QPersistentModelIndex::~QPersistentModelIndex(v13);
    }
    free(*((void **)this + 45));
  }
  v6 = *((volatile signed __int32 **)this + 42);
  if ( v6 && !_InterlockedSub(v6, 1u) )
    free(*((void **)this + 42));
  v7 = *((void **)this + 38);
  if ( v7 )
  {
    a2 = (const char *)(*((_QWORD *)this + 40) - (_QWORD)v7);
    operator delete(v7, (unsigned __int64)a2);
  }
  v8 = *((volatile signed __int32 **)this + 36);
  if ( v8 )
  {
    if ( !_InterlockedSub(v8, 1u) )
    {
      v14 = *((void **)this + 36);
      if ( v14 )
        operator delete(v14);
    }
  }
  v9 = *((_QWORD *)this + 9);
  *((_QWORD *)this + 5) = &stylable_widget_mixin_t___vtable;
  if ( v9 )
  {
    *((_QWORD *)this + 10) = 0;
    qfree(v9, a2);
  }
  v10 = *((_QWORD *)this + 6);
  if ( v10 )
  {
    *((_QWORD *)this + 7) = 0;
    qfree(v10, a2);
  }
  QT::QWidget::~QWidget(this);
}
