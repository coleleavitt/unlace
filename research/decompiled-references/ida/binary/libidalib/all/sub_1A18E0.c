void __fastcall sub_1A18E0(TView *a1)
{
  *(_QWORD *)a1 = &off_23E418;
  TView::~TView(a1);
  operator delete(a1, 0x70u);
}

