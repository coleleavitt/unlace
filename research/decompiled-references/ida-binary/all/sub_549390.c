void __fastcall DockAreaDragTitle__::vfunc_3(QT::QWidget *this)
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
  }
  else if ( !*((_DWORD *)this + 12) )
  {
LABEL_3:
    QT::QWidget::~QWidget(this);
    return;
  }
  QT::QBasicTimer::stop((QT::QWidget *)((char *)this + 48));
  QT::QWidget::~QWidget(this);
}
