void __fastcall sub_B80B0(TView *a1)
{
  *(_QWORD *)a1 = &off_2370C0;
  TView::~TView(a1);
  operator delete(a1, 0x90u);
}

