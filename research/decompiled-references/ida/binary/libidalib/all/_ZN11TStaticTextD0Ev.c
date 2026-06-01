void __fastcall TStaticText::~TStaticText(TStaticText *this)
{
  TStaticText::~TStaticText(this);
  operator delete(this, 0x50u);
}

