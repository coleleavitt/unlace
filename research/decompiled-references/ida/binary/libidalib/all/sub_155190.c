void __fastcall sub_155190(TView *a1)
{
  *((_QWORD *)a1 + 9) = 0;
  *(_QWORD *)a1 = &off_23A940;
  TView::~TView(a1);
  operator delete(a1, 0x58u);
}

