void __fastcall TEditor::~TEditor(TEditor *this)
{
  TEditor::~TEditor(this);
  operator delete(this, 0xF8u);
}

