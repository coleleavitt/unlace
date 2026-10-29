void __fastcall sub_1A1540(TWindow *a1)
{
  *(_QWORD *)a1 = &unk_23DF68;
  TWindow::~TWindow(a1);
  operator delete(a1, 0xD8u);
}

