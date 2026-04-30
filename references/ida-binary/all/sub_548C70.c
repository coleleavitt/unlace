void __fastcall ColorButton__::vfunc_4(QT::QPushButton *this)
{
  volatile signed __int32 *v1; // rax

  *(_QWORD *)this = &ColorButton___vtable;
  *((_QWORD *)this + 2) = ColorButton___vtable_at__16;
  v1 = *((volatile signed __int32 **)this + 5);
  if ( v1 && !_InterlockedSub(v1, 1u) )
    free(*((void **)this + 5));
  QT::QPushButton::~QPushButton(this);
  operator delete(this, 0x58u);
}
