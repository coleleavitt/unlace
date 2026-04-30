void __fastcall sub_469730(_QWORD *a1, const char *a2)
{
  QT::QListView *v2; // rbp
  __int64 v4; // rdi
  __int64 v5; // rdi

  v2 = (QT::QListView *)(a1 - 5);
  *(a1 - 5) = &StyledQListView___vtable;
  *(a1 - 3) = StyledQListView___vtable_at__16;
  *a1 = &stylable_widget_mixin_t___vtable;
  v4 = a1[4];
  if ( v4 )
  {
    a1[5] = 0;
    qfree(v4, a2);
  }
  v5 = a1[1];
  if ( v5 )
  {
    a1[2] = 0;
    qfree(v5, a2);
  }
  QT::QListView::~QListView(v2);
  operator delete(v2, 0x68u);
}
