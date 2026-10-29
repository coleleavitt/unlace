void __fastcall sub_2E6310(QT::QProxyStyle *a1)
{
  *(_QWORD *)a1 = &off_8726C8;
  QT::QProxyStyle::~QProxyStyle(a1);
  operator delete(a1, 0x10u);
}
