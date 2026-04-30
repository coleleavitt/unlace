void __fastcall qaction_shadow_t__::vfunc_4(QT::QAction *a1)
{
  *(_QWORD *)a1 = &qaction_shadow_t___vtable;
  QT::QAction::~QAction(a1);
  operator delete(a1, 0x10u);
}
