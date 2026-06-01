void __fastcall sub_1A3110(TWindow *a1)
{
  *((_QWORD *)a1 + 21) = 0;
  *(_QWORD *)a1 = &unk_2403E8;
  TWindow::~TWindow(a1);
}

