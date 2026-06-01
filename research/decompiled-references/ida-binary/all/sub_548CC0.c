void __fastcall sub_548CC0(__int64 a1)
{
  QT::QPushButton *v1; // rbx
  volatile signed __int32 *v2; // rax

  v1 = (QT::QPushButton *)(a1 - 16);
  *(_QWORD *)(a1 - 16) = &ColorButton___vtable;
  *(_QWORD *)a1 = ColorButton___vtable_at__16;
  v2 = *(volatile signed __int32 **)(a1 + 24);
  if ( v2 && !_InterlockedSub(v2, 1u) )
    free(*(void **)(a1 + 24));
  QT::QPushButton::~QPushButton(v1);
  operator delete(v1, 0x58u);
}
