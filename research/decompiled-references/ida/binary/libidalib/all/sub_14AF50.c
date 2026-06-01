void __fastcall sub_14AF50(TView *a1)
{
  *(_QWORD *)a1 = &off_239EB8;
  TView::~TView(a1);
  operator delete(a1, 0x50u);
}

