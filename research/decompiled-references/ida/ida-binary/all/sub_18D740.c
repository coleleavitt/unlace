void __fastcall NameContainer__::vfunc_4(QT::QWidget *this)
{
  void *v2; // rdi
  volatile signed __int32 *v3; // rax

  *(_QWORD *)this = &NameContainer___vtable;
  *((_QWORD *)this + 2) = NameContainer___vtable_at__16;
  v2 = *((void **)this + 7);
  if ( v2 )
    operator delete(v2, 0x90u);
  v3 = *((volatile signed __int32 **)this + 11);
  if ( v3 && !_InterlockedSub(v3, 1u) )
    free(*((void **)this + 11));
  *(_QWORD *)this = &TAddressDetailsContainer___vtable;
  *((_QWORD *)this + 2) = &unk_87ED08;
  QT::QWidget::~QWidget(this);
  operator delete(this, 0x78u);
}
