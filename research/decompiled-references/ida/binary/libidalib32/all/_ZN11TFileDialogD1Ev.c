void __fastcall TFileDialog::~TFileDialog(TFileDialog *this)
{
  *(_QWORD *)this = &unk_23D788;
  TWindow::~TWindow(this);
}

