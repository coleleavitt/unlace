void __fastcall sub_1A1820(TView *a1)
{
  *(_QWORD *)a1 = &off_23E5D0;
  TView::~TView(a1);
  operator delete(a1, 0x60u);
}

