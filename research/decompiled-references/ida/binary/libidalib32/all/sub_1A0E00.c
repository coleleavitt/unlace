void __fastcall sub_1A0E00(TView *a1)
{
  *(_QWORD *)a1 = &off_23F230;
  TView::~TView(a1);
  operator delete(a1, 0x70u);
}

