void __fastcall sub_1C3EE0(_QWORD *a1)
{
  qword_8CAEE8 = 0;
  *(a1 - 2) = &CommandPalette___vtable;
  *a1 = CommandPalette___vtable_at__16;
  a1[3] = CommandPalette___vtable_at__40;
  sub_1862F0((QT::QWidget *)(a1 - 2));
  operator delete(a1 - 2, 0xD0u);
}
