void __fastcall TApplication::~TApplication(TApplication *this)
{
  TApplication::~TApplication(this);
  operator delete(this, 0xA0u);
}

