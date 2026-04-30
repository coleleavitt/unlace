void __fastcall GraphMiniView__::vfunc_4(QT::QWidget *this, const char *a2)
{
  __int64 v3; // rdi
  __int64 v4; // rdi

  *(_QWORD *)this = &GraphMiniView___vtable;
  *((_QWORD *)this + 5) = GraphMiniView___vtable_at__40;
  *((_QWORD *)this + 2) = GraphMiniView___vtable_at__16;
  sub_2A6D90();
  v3 = *((_QWORD *)this + 9);
  *((_QWORD *)this + 5) = &stylable_widget_mixin_t___vtable;
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
  QT::QWidget::~QWidget(this);
  operator delete(this, 0xB8u);
}
