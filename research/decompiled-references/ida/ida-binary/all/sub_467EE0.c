void __fastcall IDADockWidget__::vfunc_4(QT::QWidget *a1)
{
  *(_QWORD *)a1 = &IDADockWidget___vtable;
  *((_QWORD *)a1 + 2) = IDADockWidget___vtable_at__16;
  DockWidget__::vfunc_3(a1);
  operator delete(a1, 0x48u);
}
