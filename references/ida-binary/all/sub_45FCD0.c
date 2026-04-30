void __fastcall sub_45FCD0(_QWORD *a1, double a2)
{
  *(a1 - 314) = &actions_inspector_chooser_widget_t___vtable;
  *(a1 - 312) = actions_inspector_chooser_widget_t___vtable_at__16;
  *(a1 - 309) = actions_inspector_chooser_widget_t___vtable_at__40;
  *(a1 - 301) = actions_inspector_chooser_widget_t___vtable_at__104;
  *a1 = actions_inspector_chooser_widget_t___vtable_at__2512;
  TChooser__::vfunc_3((QT::QWidget *)(a1 - 314), a2);
  operator delete(a1 - 314, 0xA28u);
}
