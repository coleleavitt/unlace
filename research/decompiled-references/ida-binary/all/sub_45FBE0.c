void __fastcall sub_45FBE0(_QWORD *a1, double a2)
{
  *(a1 - 2) = &actions_inspector_chooser_widget_t___vtable;
  *a1 = actions_inspector_chooser_widget_t___vtable_at__16;
  a1[3] = actions_inspector_chooser_widget_t___vtable_at__40;
  a1[11] = actions_inspector_chooser_widget_t___vtable_at__104;
  a1[312] = actions_inspector_chooser_widget_t___vtable_at__2512;
  TChooser__::vfunc_3((QT::QWidget *)(a1 - 2), a2);
  operator delete(a1 - 2, 0xA28u);
}
