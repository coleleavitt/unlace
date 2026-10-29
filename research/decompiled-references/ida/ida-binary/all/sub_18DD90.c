void __fastcall TAddressDetails__::vfunc_4(QT::QScrollArea *a1)
{
  *(_QWORD *)a1 = &TAddressDetails___vtable;
  *((_QWORD *)a1 + 2) = TAddressDetails___vtable_at__16;
  qword_8CABB8 = nullptr;
  QT::QScrollArea::~QScrollArea(a1);
  operator delete(a1, 0x28u);
}
