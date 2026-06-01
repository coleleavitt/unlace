void __fastcall TFileDialog::~TFileDialog(TFileDialog *this)
{
  *(_QWORD *)this = &unk_23E788;
  TWindow::~TWindow(this);
}

