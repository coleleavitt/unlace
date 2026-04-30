void __fastcall CommandPalette__::vfunc_4(QT::QWidget *a1)
{
  qword_8CAEE8 = 0;
  *(_QWORD *)a1 = &CommandPalette___vtable;
  *((_QWORD *)a1 + 2) = CommandPalette___vtable_at__16;
  *((_QWORD *)a1 + 5) = CommandPalette___vtable_at__40;
  sub_1862F0(a1);
  operator delete(a1, 0xD0u);
}
