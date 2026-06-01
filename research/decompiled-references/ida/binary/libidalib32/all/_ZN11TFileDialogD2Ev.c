void __fastcall TFileDialog::~TFileDialog(TFileDialog *this, _QWORD *a2)
{
  *(_QWORD *)this = *a2;
  *(_QWORD *)this = a2[1];
  TWindow::~TWindow(this);
}

