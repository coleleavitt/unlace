void __fastcall sub_1C3E50(__int64 a1)
{
  QT::QWidget *v1; // rdi

  v1 = (QT::QWidget *)(a1 - 16);
  qword_8CAEE8 = 0;
  *(_QWORD *)v1 = &CommandPalette___vtable;
  *((_QWORD *)v1 + 2) = CommandPalette___vtable_at__16;
  *((_QWORD *)v1 + 5) = CommandPalette___vtable_at__40;
  sub_1862F0(v1);
}
