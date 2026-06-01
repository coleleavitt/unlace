void __fastcall sub_14AED0(TView *a1)
{
  *(_QWORD *)a1 = &off_23A038;
  TView::~TView(a1);
  operator delete(a1, 0x98u);
}

