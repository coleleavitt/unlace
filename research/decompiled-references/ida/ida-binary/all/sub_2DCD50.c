void __fastcall sub_2DCD50(_QWORD *a1)
{
  *(a1 - 2) = &ida_form_widget_t___vtable;
  *a1 = ida_form_widget_t___vtable_at__16;
  sub_4F73A0();
  form_widget_t__::vfunc_3((QT::QWidget *)(a1 - 2));
  operator delete(a1 - 2, 0x1B8u);
}
