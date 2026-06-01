void __fastcall sub_1A2140(TWindow *a1)
{
  *(_QWORD *)a1 = &unk_23EF68;
  TWindow::~TWindow(a1);
  operator delete(a1, 0xD8u);
}

