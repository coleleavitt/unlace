void __fastcall DockTab__::vfunc_4(QT::QWidget *a1)
{
  *(_QWORD *)a1 = &ComplexDockWidget___vtable;
  *((_QWORD *)a1 + 2) = &unk_8993C0;
  sub_4CE5B0(a1);
  operator delete(a1, 0x60u);
}
