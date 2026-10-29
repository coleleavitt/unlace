void __fastcall sub_14A6F0(TView *a1)
{
  *(_QWORD *)a1 = &off_239038;
  TView::~TView(a1);
  operator delete(a1, 0x90u);
}

