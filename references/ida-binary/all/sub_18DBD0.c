void __fastcall TAddressDetailsSection__::vfunc_4(QT::QWidget *a1)
{
  *(_QWORD *)a1 = &TAddressDetailsSection___vtable;
  *((_QWORD *)a1 + 2) = TAddressDetailsSection___vtable_at__16;
  QT::QWidget::~QWidget(a1);
  operator delete(a1, 0x38u);
}
