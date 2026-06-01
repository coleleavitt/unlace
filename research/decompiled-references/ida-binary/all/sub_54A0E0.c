void __fastcall sub_54A0E0(__int64 a1)
{
  QT::QWidget *v1; // rdi

  v1 = (QT::QWidget *)(a1 - 16);
  *(_QWORD *)v1 = &ComplexDockWidget___vtable;
  *((_QWORD *)v1 + 2) = &unk_8993C0;
  sub_4CE5B0(v1);
}
