void __fastcall sub_18DA00(_QWORD *a1)
{
  void *v2; // rdi

  *(a1 - 2) = &FlagsContainer___vtable;
  *a1 = FlagsContainer___vtable_at__16;
  v2 = (void *)a1[5];
  if ( v2 )
    operator delete(v2, 0x28u);
  *(a1 - 2) = &TAddressDetailsContainer___vtable;
  *a1 = &unk_87ED08;
  QT::QWidget::~QWidget((QT::QWidget *)(a1 - 2));
}
