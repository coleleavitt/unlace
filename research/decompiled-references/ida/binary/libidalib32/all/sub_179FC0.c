void __fastcall sub_179FC0(TView *a1)
{
  *(_QWORD *)a1 = &off_23B898;
  TView::~TView(a1);
  operator delete(a1, 0x50u);
}

