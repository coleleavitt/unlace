void __fastcall sub_37E310(_QWORD *a1)
{
  qword_8CF140 = 0;
  *(a1 - 2) = &ShortcutEditor___vtable;
  *a1 = ShortcutEditor___vtable_at__16;
  a1[3] = ShortcutEditor___vtable_at__40;
  sub_1862F0((QT::QWidget *)(a1 - 2));
  operator delete(a1 - 2, 0xD0u);
}
