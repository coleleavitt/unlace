void __fastcall sub_548C20(__int64 a1)
{
  volatile signed __int32 *v1; // rax

  *(_QWORD *)(a1 - 16) = &ColorButton___vtable;
  *(_QWORD *)a1 = ColorButton___vtable_at__16;
  v1 = *(volatile signed __int32 **)(a1 + 24);
  if ( v1 && !_InterlockedSub(v1, 1u) )
  {
    free(*(void **)(a1 + 24));
    QT::QPushButton::~QPushButton((QT::QPushButton *)(a1 - 16));
  }
  else
  {
    QT::QPushButton::~QPushButton((QT::QPushButton *)(a1 - 16));
  }
}
