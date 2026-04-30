void __fastcall sub_549510(_QWORD *a1)
{
  QT::QWidget *v1; // rbp
  int v2; // edx

  v1 = (QT::QWidget *)(a1 - 2);
  v2 = *((_DWORD *)a1 + 9);
  *(a1 - 2) = &DockAreaDragTitle___vtable;
  *a1 = DockAreaDragTitle___vtable_at__16;
  if ( v2 )
  {
    QT::QBasicTimer::stop((QT::QBasicTimer *)((char *)a1 + 36));
    if ( !*((_DWORD *)a1 + 8) )
      goto LABEL_3;
LABEL_5:
    QT::QBasicTimer::stop((QT::QBasicTimer *)(a1 + 4));
    goto LABEL_3;
  }
  if ( *((_DWORD *)a1 + 8) )
    goto LABEL_5;
LABEL_3:
  QT::QWidget::~QWidget(v1);
  operator delete(v1, 0x58u);
}
