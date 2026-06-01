void __fastcall TObject::~TObject(TObject *this)
{
  TObject::~TObject(this);
  operator delete(this, 8u);
}

