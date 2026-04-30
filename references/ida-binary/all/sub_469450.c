void __fastcall StyledQListView__::vfunc_3(QT::QListView *this, const char *a2)
{
  __int64 v3; // rdi
  __int64 v4; // rdi

  *(_QWORD *)this = &StyledQListView___vtable;
  *((_QWORD *)this + 2) = StyledQListView___vtable_at__16;
  *((_QWORD *)this + 5) = &stylable_widget_mixin_t___vtable;
  v3 = *((_QWORD *)this + 9);
  if ( v3 )
  {
    *((_QWORD *)this + 10) = 0;
    qfree(v3, a2);
  }
  v4 = *((_QWORD *)this + 6);
  if ( v4 )
  {
    *((_QWORD *)this + 7) = 0;
    qfree(v4, a2);
  }
  QT::QListView::~QListView(this);
}
