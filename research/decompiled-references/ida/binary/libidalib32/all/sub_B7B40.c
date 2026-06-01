void __fastcall sub_B7B40(TView *a1)
{
  *(_QWORD *)a1 = &off_2360C0;
  TView::~TView(a1);
  operator delete(a1, 0x70u);
}

