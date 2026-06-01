void __fastcall check_box_t__::vfunc_4(QT::QCheckBox *a1)
{
  *(_QWORD *)a1 = &check_box_t___vtable;
  *((_QWORD *)a1 + 2) = check_box_t___vtable_at__16;
  QT::QCheckBox::~QCheckBox(a1);
  operator delete(a1, 0x28u);
}
