void __fastcall sub_1A0C20(TView *a1)
{
  *(_QWORD *)a1 = &off_23D5D0;
  TView::~TView(a1);
  operator delete(a1, 0x60u);
}

