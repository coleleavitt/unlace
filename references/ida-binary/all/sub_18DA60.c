void __fastcall sub_18DA60(_QWORD *a1)
{
  QT::QWidget *v1; // rbp
  void *v3; // rdi

  v1 = (QT::QWidget *)(a1 - 2);
  *(a1 - 2) = &FlagsContainer___vtable;
  *a1 = FlagsContainer___vtable_at__16;
  v3 = (void *)a1[5];
  if ( v3 )
    operator delete(v3, 0x28u);
  *(a1 - 2) = &TAddressDetailsContainer___vtable;
  *a1 = &unk_87ED08;
  QT::QWidget::~QWidget(v1);
  operator delete(v1, 0x40u);
}
