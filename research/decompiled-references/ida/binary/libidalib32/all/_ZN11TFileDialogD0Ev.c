void __fastcall TFileDialog::~TFileDialog(TFileDialog *this)
{
  TFileDialog::~TFileDialog(this);
  operator delete(this, 0x10E0u);
}

