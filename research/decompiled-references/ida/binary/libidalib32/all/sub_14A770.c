void __fastcall sub_14A770(TView *a1)
{
  *(_QWORD *)a1 = &off_238EB8;
  TView::~TView(a1);
  operator delete(a1, 0x50u);
}

