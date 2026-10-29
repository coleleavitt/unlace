void __fastcall ui_label_t__::vfunc_4(QT::QLabel *a1)
{
  *(_QWORD *)a1 = &ui_label_t___vtable;
  *((_QWORD *)a1 + 2) = ui_label_t___vtable_at__16;
  QT::QLabel::~QLabel(a1);
  operator delete(a1, 0x28u);
}
