void __fastcall sub_460AA0(_QWORD *a1, const char *a2)
{
  QT::QWidget *v2; // rbp
  QT::QTimer *v4; // rdi
  __int64 v5; // rdi

  v2 = (QT::QWidget *)(a1 - 2);
  v4 = (QT::QTimer *)(a1 + 10);
  *((_QWORD *)v4 - 12) = &TAddressDetailsWidget___vtable;
  *((_QWORD *)v4 - 10) = TAddressDetailsWidget___vtable_at__16;
  QT::QTimer::~QTimer(v4);
  v5 = a1[7];
  if ( v5 )
  {
    a1[8] = 0;
    qfree(v5, a2);
  }
  QT::QWidget::~QWidget(v2);
  operator delete(v2, 0x80u);
}
