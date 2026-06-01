void __fastcall sub_1A0CE0(TView *a1)
{
  *(_QWORD *)a1 = &off_23D418;
  TView::~TView(a1);
  operator delete(a1, 0x70u);
}

