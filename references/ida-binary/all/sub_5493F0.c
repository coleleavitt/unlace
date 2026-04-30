void __fastcall sub_5493F0(_QWORD *a1)
{
  int v1; // edx

  v1 = *((_DWORD *)a1 + 9);
  *(a1 - 2) = &DockAreaDragTitle___vtable;
  *a1 = DockAreaDragTitle___vtable_at__16;
  if ( v1 )
  {
    QT::QBasicTimer::stop((QT::QBasicTimer *)((char *)a1 + 36));
    if ( !*((_DWORD *)a1 + 8) )
      goto LABEL_3;
  }
  else if ( !*((_DWORD *)a1 + 8) )
  {
LABEL_3:
    QT::QWidget::~QWidget((QT::QWidget *)(a1 - 2));
    return;
  }
  QT::QBasicTimer::stop((QT::QBasicTimer *)(a1 + 4));
  QT::QWidget::~QWidget((QT::QWidget *)(a1 - 2));
}
