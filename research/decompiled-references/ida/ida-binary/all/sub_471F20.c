void __fastcall sizes_margin_t__::vfunc_3(QT::QWidget *this, const char *a2)
{
  volatile signed __int32 *v3; // rax
  __int64 v4; // rdi
  __int64 v5; // rdi

  *(_QWORD *)this = &text_area_margin_widget_t___vtable;
  *((_QWORD *)this + 5) = algn_89DF90;
  v3 = *((volatile signed __int32 **)this + 13);
  *((_QWORD *)this + 2) = &unk_89DF40;
  if ( v3 && !_InterlockedSub(v3, 1u) )
    free(*((void **)this + 13));
  v4 = *((_QWORD *)this + 9);
  *((_QWORD *)this + 5) = &stylable_widget_mixin_t___vtable;
  if ( v4 )
  {
    *((_QWORD *)this + 10) = 0;
    qfree(v4, a2);
  }
  v5 = *((_QWORD *)this + 6);
  if ( v5 )
  {
    *((_QWORD *)this + 7) = 0;
    qfree(v5, a2);
  }
  QT::QWidget::~QWidget(this);
}
