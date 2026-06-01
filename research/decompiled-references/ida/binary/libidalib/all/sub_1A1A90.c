void __fastcall sub_1A1A90(TView *a1)
{
  *(_QWORD *)a1 = &off_23F5D8;
  TView::~TView(a1);
  operator delete(a1, 0x2058u);
}

