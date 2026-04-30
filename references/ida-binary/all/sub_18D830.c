void __fastcall sub_18D830(__int64 a1)
{
  QT::QWidget *v1; // rbp
  void *v3; // rdi
  volatile signed __int32 *v4; // rax

  v1 = (QT::QWidget *)(a1 - 16);
  *(_QWORD *)(a1 - 16) = &NameContainer___vtable;
  *(_QWORD *)a1 = NameContainer___vtable_at__16;
  v3 = *(void **)(a1 + 40);
  if ( v3 )
    operator delete(v3, 0x90u);
  v4 = *(volatile signed __int32 **)(a1 + 72);
  if ( v4 && !_InterlockedSub(v4, 1u) )
    free(*(void **)(a1 + 72));
  *(_QWORD *)(a1 - 16) = &TAddressDetailsContainer___vtable;
  *(_QWORD *)a1 = &unk_87ED08;
  QT::QWidget::~QWidget(v1);
  operator delete(v1, 0x78u);
}
