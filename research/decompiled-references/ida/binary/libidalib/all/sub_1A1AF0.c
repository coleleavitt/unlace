void __fastcall sub_1A1AF0(TView *a1)
{
  *(_QWORD *)a1 = &off_23EDA8;
  TView::~TView(a1);
  operator delete(a1, 0x70u);
}

