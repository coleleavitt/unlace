unsigned __int64 __fastcall sub_1DD6B0(QT::QDockWidget *this, __int64 a2)
{
  QT::QWidget *v3; // rbp
  __int64 v5; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v6; // [rsp+8h] [rbp-20h]

  v6 = __readfsqword(0x28u);
  QT::QDockWidget::QDockWidget(this, a2, 0, 0);
  *((_BYTE *)this + 44) = 0;
  *((_DWORD *)this + 10) = 0;
  *(_QWORD *)this = &BarDockWidget___vtable;
  *((_QWORD *)this + 2) = BarDockWidget___vtable_at__16;
  v3 = (QT::QWidget *)operator new(0x30u);
  QT::QWidget::QWidget(v3, this, 0);
  *((_QWORD *)v3 + 5) = this;
  *(_QWORD *)v3 = &NoDockTitleBar___vtable;
  *((_QWORD *)v3 + 2) = NoDockTitleBar___vtable_at__16;
  QT::QDockWidget::setTitleBarWidget(this, v3);
  QT::QObject::connect(
    &v5,
    this,
    "2dockLocationChanged(Qt::DockWidgetArea)",
    this,
    "1dockAreaChanged(Qt::DockWidgetArea)",
    0);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)&v5);
  QT::QObject::connect(&v5, this, "2topLevelChanged(bool)", this, "1dockFloatingChanged()", 0);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)&v5);
  return v6 - __readfsqword(0x28u);
}
