void __fastcall sub_14A730(TView *a1)
{
  *(_QWORD *)a1 = &off_238F78;
  TView::~TView(a1);
  operator delete(a1, 0x50u);
}

