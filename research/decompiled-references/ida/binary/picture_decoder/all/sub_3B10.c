void __fastcall sub_3B10(QT::QIODevice *a1)
{
  *(_QWORD *)a1 = &off_69D0;
  QT::QIODevice::~QIODevice(a1);
  operator delete(a1, 0x20u);
}

