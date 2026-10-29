void __fastcall sub_17A470(QT::QAction *this)
{
  *(_QWORD *)this = &off_86F9C8;
  QT::QObject::blockSignals(this, 0);
  QT::QAction::~QAction(this);
  operator delete(this, 0x10u);
}
