void __fastcall ShortcutEditor__::vfunc_4(QT::QWidget *a1)
{
  qword_8CF140 = 0;
  *(_QWORD *)a1 = &ShortcutEditor___vtable;
  *((_QWORD *)a1 + 2) = ShortcutEditor___vtable_at__16;
  *((_QWORD *)a1 + 5) = ShortcutEditor___vtable_at__40;
  sub_1862F0(a1);
  operator delete(a1, 0xD0u);
}
