void __fastcall sub_1A0EF0(TView *a1)
{
  *(_QWORD *)a1 = &off_23DDA8;
  TView::~TView(a1);
  operator delete(a1, 0x70u);
}

