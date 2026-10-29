void __fastcall sub_45F530(_QWORD *a1)
{
  *(a1 - 2) = &labeled_group_box_t___vtable;
  *a1 = labeled_group_box_t___vtable_at__16;
  QT::QGroupBox::~QGroupBox((QT::QGroupBox *)(a1 - 2));
  operator delete(a1 - 2, 0x40u);
}
