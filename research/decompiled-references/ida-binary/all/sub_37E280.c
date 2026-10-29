void __fastcall sub_37E280(__int64 a1)
{
  QT::QWidget *v1; // rdi

  v1 = (QT::QWidget *)(a1 - 16);
  qword_8CF140 = 0;
  *(_QWORD *)v1 = &ShortcutEditor___vtable;
  *((_QWORD *)v1 + 2) = ShortcutEditor___vtable_at__16;
  *((_QWORD *)v1 + 5) = ShortcutEditor___vtable_at__40;
  sub_1862F0(v1);
}
