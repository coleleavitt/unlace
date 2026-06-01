void __fastcall sub_460A00(_QWORD *a1, const char *a2)
{
  QT::QTimer *v3; // rdi
  __int64 v4; // rdi

  v3 = (QT::QTimer *)(a1 + 10);
  *((_QWORD *)v3 - 12) = &TAddressDetailsWidget___vtable;
  *((_QWORD *)v3 - 10) = TAddressDetailsWidget___vtable_at__16;
  QT::QTimer::~QTimer(v3);
  v4 = a1[7];
  if ( v4 )
  {
    a1[8] = 0;
    qfree(v4, a2);
  }
  QT::QWidget::~QWidget((QT::QWidget *)(a1 - 2));
}
