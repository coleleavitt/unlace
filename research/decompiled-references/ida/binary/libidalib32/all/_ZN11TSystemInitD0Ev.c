void __fastcall TSystemInit::~TSystemInit(TSystemInit *this)
{
  TSystemInit::~TSystemInit(this);
  operator delete(this, 8u);
}

