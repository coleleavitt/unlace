void __fastcall sub_1E68D0(QT::QScrollBar *a1)
{
  *(_QWORD *)a1 = &off_870520;
  *((_QWORD *)a1 + 2) = IDAMemoScrollBar___vtable_at__16;
  QT::QScrollBar::~QScrollBar(a1);
  operator delete(a1, 0x28u);
}
