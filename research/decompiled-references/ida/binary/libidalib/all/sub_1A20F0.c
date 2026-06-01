void __fastcall sub_1A20F0(TWindow *a1)
{
  *(_QWORD *)a1 = &unk_23F318;
  TWindow::~TWindow(a1);
  operator delete(a1, 0xF8u);
}

