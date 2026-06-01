void __fastcall sub_30E3D0(QT::QObject *a1)
{
  *(_QWORD *)a1 = &off_872C08;
  QT::QObject::~QObject(a1);
  operator delete(a1, 0x10u);
}
