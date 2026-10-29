void __fastcall sub_1A0C90(TView *a1)
{
  *(_QWORD *)a1 = &off_23DB30;
  TView::~TView(a1);
  operator delete(a1, 0x70u);
}

