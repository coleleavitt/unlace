void __fastcall sub_18DDD0(__int64 a1)
{
  QT::QScrollArea *v1; // rdi

  v1 = (QT::QScrollArea *)(a1 - 16);
  *(_QWORD *)v1 = &TAddressDetails___vtable;
  *((_QWORD *)v1 + 2) = TAddressDetails___vtable_at__16;
  qword_8CABB8 = nullptr;
  QT::QScrollArea::~QScrollArea(v1);
}
