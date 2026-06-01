void __fastcall sub_17AAC0(TView *a1)
{
  *(_QWORD *)a1 = &off_23C898;
  TView::~TView(a1);
  operator delete(a1, 0x50u);
}

