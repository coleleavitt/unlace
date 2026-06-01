void __fastcall TButton::~TButton(TButton *this)
{
  TButton::~TButton(this);
  operator delete(this, 0x58u);
}

