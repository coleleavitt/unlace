void __fastcall sub_144610(TView *a1)
{
  *(_QWORD *)a1 = &off_23E0D0;
  TView::~TView(a1);
  operator delete(a1, 0x50u);
}

