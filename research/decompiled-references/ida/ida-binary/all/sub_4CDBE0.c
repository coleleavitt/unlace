__int64 __fastcall sub_4CDBE0(QT::QWidget *this, QT::QWidget *a2)
{
  QT::QWidget *v2; // rbp

  QT::QTabBar::QTabBar(this, a2);
  *((_QWORD *)this + 6) = a2;
  *((_DWORD *)this + 10) = -1;
  *((_DWORD *)this + 17) = -1;
  *(_QWORD *)this = &DockTabBar___vtable;
  *((_QWORD *)this + 2) = DockTabBar___vtable_at__16;
  v2 = (QT::QWidget *)operator new(0x28u);
  QT::QRubberBand::QRubberBand(v2, 1, this);
  *((_QWORD *)this + 7) = v2;
  QT::QWidget::setVisible(v2, 0);
  *((_DWORD *)this + 16) = 120;
  *((_DWORD *)this + 18) = 0;
  QT::QTabBar::setTabsClosable(this, 1);
  QT::QTabBar::setMovable(this, 0);
  QT::QWidget::setAcceptDrops(this, 1);
  QT::QTabBar::setSelectionBehaviorOnRemove(this, 0);
  return QT::QTabBar::setUsesScrollButtons(this, 1);
}
