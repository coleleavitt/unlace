void __fastcall TMenuBar::~TMenuBar(TMenuBar *this)
{
  TMenuBar::~TMenuBar(this);
  operator delete(this, 0x60u);
}

