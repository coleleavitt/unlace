void __fastcall DockArea__::vfunc_4(QT::QWidget *this)
{
  __int64 v1; // rbp

  *(_QWORD *)this = &DockArea___vtable;
  *((_QWORD *)this + 2) = DockArea___vtable_at__16;
  sub_4C89C0(this, 1);
  v1 = *((_QWORD *)this + 5);
  if ( v1 )
  {
    QT::QTimer::~QTimer((QT::QTimer *)(v1 + 48));
    operator delete((void *)v1, 0x68u);
  }
  QT::QWidget::~QWidget(this);
  operator delete(this, 0x30u);
}
