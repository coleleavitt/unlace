void __fastcall sub_18DE00(_QWORD *a1)
{
  *(a1 - 2) = &TAddressDetails___vtable;
  *a1 = TAddressDetails___vtable_at__16;
  qword_8CABB8 = nullptr;
  QT::QScrollArea::~QScrollArea((QT::QScrollArea *)(a1 - 2));
  operator delete(a1 - 2, 0x28u);
}
