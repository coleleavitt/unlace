void __fastcall sub_1A1A00(TView *a1)
{
  *(_QWORD *)a1 = &off_240230;
  TView::~TView(a1);
  operator delete(a1, 0x70u);
}

