void __fastcall sub_18DC00(__int64 a1)
{
  QT::QWidget *v1; // rdi

  v1 = (QT::QWidget *)(a1 - 16);
  *(_QWORD *)v1 = &TAddressDetailsSection___vtable;
  *((_QWORD *)v1 + 2) = TAddressDetailsSection___vtable_at__16;
  QT::QWidget::~QWidget(v1);
}
