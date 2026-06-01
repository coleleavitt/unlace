void __fastcall sub_54D1D0(__int64 a1)
{
  QT::QGroupBox *v1; // rdi

  v1 = (QT::QGroupBox *)(a1 - 16);
  *(_QWORD *)v1 = &labeled_group_box_t___vtable;
  *((_QWORD *)v1 + 2) = labeled_group_box_t___vtable_at__16;
  QT::QGroupBox::~QGroupBox(v1);
}
