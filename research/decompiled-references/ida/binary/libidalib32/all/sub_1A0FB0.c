void __fastcall sub_1A0FB0(TView *a1)
{
  *(_QWORD *)a1 = &off_23D0D0;
  TView::~TView(a1);
  operator delete(a1, 0x50u);
}

