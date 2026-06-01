void __fastcall sub_1A1BE0(TView *a1)
{
  *(_QWORD *)a1 = &off_23DA80;
  TView::~TView(a1);
  operator delete(a1, 0x58u);
}

