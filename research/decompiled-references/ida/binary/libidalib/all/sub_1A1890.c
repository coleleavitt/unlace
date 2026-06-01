void __fastcall sub_1A1890(TView *a1)
{
  *(_QWORD *)a1 = &off_23EB30;
  TView::~TView(a1);
  operator delete(a1, 0x70u);
}

