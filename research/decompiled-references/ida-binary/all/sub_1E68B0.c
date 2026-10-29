void __fastcall IDAMemoScrollBar__::vfunc_0(__int64 a1)
{
  QT::QScrollBar *v1; // rdi

  v1 = (QT::QScrollBar *)(a1 - 16);
  *(_QWORD *)v1 = &off_870520;
  *((_QWORD *)v1 + 2) = IDAMemoScrollBar___vtable_at__16;
  QT::QScrollBar::~QScrollBar(v1);
}
