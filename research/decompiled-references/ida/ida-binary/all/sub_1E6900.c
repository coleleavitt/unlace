void __fastcall IDAMemoScrollBar__::vfunc_1(_QWORD *a1)
{
  *(a1 - 2) = &off_870520;
  *a1 = IDAMemoScrollBar___vtable_at__16;
  QT::QScrollBar::~QScrollBar((QT::QScrollBar *)(a1 - 2));
  operator delete(a1 - 2, 0x28u);
}
