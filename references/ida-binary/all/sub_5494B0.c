void __fastcall DockAreaDragTitle__::vfunc_4(QT::QWidget *this)
{
  int v1; // edx

  v1 = *((_DWORD *)this + 13);
  *(_QWORD *)this = &DockAreaDragTitle___vtable;
  *((_QWORD *)this + 2) = DockAreaDragTitle___vtable_at__16;
  if ( v1 )
  {
    QT::QBasicTimer::stop((QT::QWidget *)((char *)this + 52));
    if ( !*((_DWORD *)this + 12) )
      goto LABEL_3;
LABEL_5:
    QT::QBasicTimer::stop((QT::QWidget *)((char *)this + 48));
    goto LABEL_3;
  }
  if ( *((_DWORD *)this + 12) )
    goto LABEL_5;
LABEL_3:
  QT::QWidget::~QWidget(this);
  operator delete(this, 0x58u);
}
