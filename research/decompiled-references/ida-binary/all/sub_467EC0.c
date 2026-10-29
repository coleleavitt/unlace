__int64 __fastcall sub_467EC0(__int64 a1)
{
  QT::QWidget *v1; // rdi

  v1 = (QT::QWidget *)(a1 - 16);
  *(_QWORD *)v1 = &IDADockWidget___vtable;
  *((_QWORD *)v1 + 2) = IDADockWidget___vtable_at__16;
  return DockWidget__::vfunc_3(v1);
}
