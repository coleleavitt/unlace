void __fastcall sub_1A0FE0(TView *a1)
{
  *(_QWORD *)a1 = &off_23CA80;
  TView::~TView(a1);
  operator delete(a1, 0x58u);
}

