void __fastcall sub_48DCE0(QT::QTreeView *this, const char *a2)
{
  QT::QTreeView **v3; // rdi
  QT::QTreeView **v4; // rdx
  void *v5; // rdi
  void (*v6)(void); // rax
  __int64 v7; // rdi
  __int64 v8; // rdi
  volatile signed __int32 *v9; // rax
  volatile signed __int32 *v10; // rax

  *(_QWORD *)this = &base_dirtree_widget_t___vtable;
  *((_QWORD *)this + 2) = &unk_895C40;
  v3 = (QT::QTreeView **)qword_8D17F0;
  v4 = (QT::QTreeView **)(qword_8D17F0 + 8 * xmmword_8D17F8);
  if ( (QT::QTreeView **)qword_8D17F0 != v4 )
  {
    while ( this != *v3 )
    {
      if ( v4 == ++v3 )
        goto LABEL_7;
    }
    if ( v4 != v3 )
    {
      a2 = (const char *)(v3 + 1);
      memmove(v3, v3 + 1, (char *)v4 - (char *)v3 - 8);
      *(_QWORD *)&xmmword_8D17F8 = xmmword_8D17F8 - 1;
    }
  }
LABEL_7:
  v5 = *((void **)this + 28);
  if ( v5 )
  {
    v6 = *(void (**)(void))(*(_QWORD *)v5 + 8LL);
    if ( (char *)v6 == (char *)sub_486690 )
    {
      a2 = &byte_8;
      operator delete(v5, 8u);
    }
    else
    {
      v6();
    }
  }
  v7 = *((_QWORD *)this + 22);
  if ( v7 )
  {
    *((_QWORD *)this + 23) = 0;
    qfree(v7, a2);
  }
  v8 = *((_QWORD *)this + 17);
  if ( v8 )
  {
    *((_QWORD *)this + 18) = 0;
    qfree(v8, a2);
  }
  v9 = *((volatile signed __int32 **)this + 11);
  if ( v9 && !_InterlockedSub(v9, 1u) )
    free(*((void **)this + 11));
  v10 = *((volatile signed __int32 **)this + 8);
  if ( v10 && !_InterlockedSub(v10, 1u) )
    free(*((void **)this + 8));
  *((_QWORD *)this + 5) = &off_893E50;
  QT::QStyledItemDelegate::~QStyledItemDelegate((QT::QTreeView *)((char *)this + 40));
  QT::QTreeView::~QTreeView(this);
}
