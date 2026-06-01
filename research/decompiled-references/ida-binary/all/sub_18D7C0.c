void __fastcall sub_18D7C0(__int64 a1)
{
  void *v2; // rdi
  volatile signed __int32 *v3; // rax

  *(_QWORD *)(a1 - 16) = &NameContainer___vtable;
  *(_QWORD *)a1 = NameContainer___vtable_at__16;
  v2 = *(void **)(a1 + 40);
  if ( v2 )
    operator delete(v2, 0x90u);
  v3 = *(volatile signed __int32 **)(a1 + 72);
  if ( v3 && !_InterlockedSub(v3, 1u) )
    free(*(void **)(a1 + 72));
  *(_QWORD *)(a1 - 16) = &TAddressDetailsContainer___vtable;
  *(_QWORD *)a1 = &unk_87ED08;
  QT::QWidget::~QWidget((QT::QWidget *)(a1 - 16));
}
