void __fastcall sub_1A1BB0(TView *a1)
{
  *(_QWORD *)a1 = &off_23E0D0;
  TView::~TView(a1);
  operator delete(a1, 0x50u);
}

