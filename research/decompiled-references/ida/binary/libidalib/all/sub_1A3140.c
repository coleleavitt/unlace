void __fastcall sub_1A3140(TWindow *a1)
{
  *((_QWORD *)a1 + 21) = 0;
  *(_QWORD *)a1 = &unk_2403E8;
  TWindow::~TWindow(a1);
  operator delete(a1, 0xB8u);
}

