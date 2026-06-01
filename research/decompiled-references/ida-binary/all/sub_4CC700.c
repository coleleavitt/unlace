void __fastcall sub_4CC700(_QWORD *a1)
{
  QT::QWidget *v1; // rbp
  __int64 v2; // rbx

  v1 = (QT::QWidget *)(a1 - 2);
  *(a1 - 2) = &DockArea___vtable;
  *a1 = DockArea___vtable_at__16;
  sub_4C89C0(a1 - 2, 1);
  v2 = a1[3];
  if ( v2 )
  {
    QT::QTimer::~QTimer((QT::QTimer *)(v2 + 48));
    operator delete((void *)v2, 0x68u);
  }
  QT::QWidget::~QWidget(v1);
  operator delete(v1, 0x30u);
}
