void __fastcall sub_1A14F0(TWindow *a1)
{
  *(_QWORD *)a1 = &unk_23E318;
  TWindow::~TWindow(a1);
  operator delete(a1, 0xF8u);
}

