void __fastcall sub_467F10(_QWORD *a1)
{
  *(a1 - 2) = &IDADockWidget___vtable;
  *a1 = IDADockWidget___vtable_at__16;
  DockWidget__::vfunc_3((QT::QWidget *)(a1 - 2));
  operator delete(a1 - 2, 0x48u);
}
