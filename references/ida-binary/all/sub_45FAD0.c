__int64 __fastcall sub_45FAD0(__int64 a1, double a2)
{
  QT::QWidget *v2; // rdi

  v2 = (QT::QWidget *)(a1 - 40);
  *(_QWORD *)v2 = &actions_inspector_chooser_widget_t___vtable;
  *((_QWORD *)v2 + 2) = actions_inspector_chooser_widget_t___vtable_at__16;
  *((_QWORD *)v2 + 5) = actions_inspector_chooser_widget_t___vtable_at__40;
  *((_QWORD *)v2 + 13) = actions_inspector_chooser_widget_t___vtable_at__104;
  *((_QWORD *)v2 + 314) = actions_inspector_chooser_widget_t___vtable_at__2512;
  return TChooser__::vfunc_3(v2, a2);
}
