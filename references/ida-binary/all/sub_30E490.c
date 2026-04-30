void __fastcall sub_30E490(QT::QAction *a1)
{
  *(_QWORD *)a1 = &off_872CF8;
  QT::QAction::~QAction(a1);
  operator delete(a1, 0x20u);
}
