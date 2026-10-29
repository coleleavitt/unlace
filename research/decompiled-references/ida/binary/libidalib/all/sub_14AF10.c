void __fastcall sub_14AF10(TView *a1)
{
  *(_QWORD *)a1 = &off_239F78;
  TView::~TView(a1);
  operator delete(a1, 0x50u);
}

