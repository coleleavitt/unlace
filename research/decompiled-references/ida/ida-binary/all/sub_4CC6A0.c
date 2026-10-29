void __fastcall sub_4CC6A0(_QWORD *a1)
{
  __int64 v1; // rbx

  *(a1 - 2) = &DockArea___vtable;
  *a1 = DockArea___vtable_at__16;
  sub_4C89C0(a1 - 2, 1);
  v1 = a1[3];
  if ( v1 )
  {
    QT::QTimer::~QTimer((QT::QTimer *)(v1 + 48));
    operator delete((void *)v1, 0x68u);
  }
  QT::QWidget::~QWidget((QT::QWidget *)(a1 - 2));
}
