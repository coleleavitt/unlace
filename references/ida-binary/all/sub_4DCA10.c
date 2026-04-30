void __fastcall sub_4DCA10(QT::QProxyStyle *a1)
{
  *(_QWORD *)a1 = &off_894628;
  QT::QProxyStyle::~QProxyStyle(a1);
  operator delete(a1, 0x10u);
}
