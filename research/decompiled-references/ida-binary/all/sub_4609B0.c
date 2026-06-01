void __fastcall TAddressDetailsWidget__::vfunc_3(QT::QWidget *this, const char *a2)
{
  QT::QTimer *v3; // rdi
  __int64 v4; // rdi

  v3 = (QT::QWidget *)((char *)this + 96);
  *((_QWORD *)v3 - 12) = &TAddressDetailsWidget___vtable;
  *((_QWORD *)v3 - 10) = TAddressDetailsWidget___vtable_at__16;
  QT::QTimer::~QTimer(v3);
  v4 = *((_QWORD *)this + 9);
  if ( v4 )
  {
    *((_QWORD *)this + 10) = 0;
    qfree(v4, a2);
  }
  QT::QWidget::~QWidget(this);
}
