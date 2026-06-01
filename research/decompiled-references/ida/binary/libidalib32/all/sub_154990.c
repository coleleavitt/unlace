void __fastcall sub_154990(TView *a1)
{
  *((_QWORD *)a1 + 9) = 0;
  *(_QWORD *)a1 = &off_239940;
  TView::~TView(a1);
  operator delete(a1, 0x58u);
}

