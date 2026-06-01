void __fastcall sub_1C3E90(_QWORD *a1)
{
  qword_8CAEE8 = 0;
  *(a1 - 5) = &CommandPalette___vtable;
  *(a1 - 3) = CommandPalette___vtable_at__16;
  *a1 = CommandPalette___vtable_at__40;
  sub_1862F0((QT::QWidget *)(a1 - 5));
  operator delete(a1 - 5, 0xD0u);
}
