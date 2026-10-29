void __fastcall sub_54CCA0(_QWORD *a1)
{
  *(a1 - 2) = &check_box_t___vtable;
  *a1 = check_box_t___vtable_at__16;
  QT::QCheckBox::~QCheckBox((QT::QCheckBox *)(a1 - 2));
  operator delete(a1 - 2, 0x28u);
}
