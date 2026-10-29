void __fastcall DataContainer__::vfunc_3(QT::QWidget *this)
{
  void *v2; // rdi

  *(_QWORD *)this = &DataContainer___vtable;
  *((_QWORD *)this + 2) = DataContainer___vtable_at__16;
  v2 = *((void **)this + 7);
  if ( v2 )
    operator delete(v2, 0xD8u);
  *(_QWORD *)this = &TAddressDetailsContainer___vtable;
  *((_QWORD *)this + 2) = &unk_87ED08;
  QT::QWidget::~QWidget(this);
}
