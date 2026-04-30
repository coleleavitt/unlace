void __fastcall sub_179CF0(QT::QAction *this)
{
  *(_QWORD *)this = &off_86F9C8;
  QT::QObject::blockSignals(this, 0);
  QT::QAction::~QAction(this);
}
