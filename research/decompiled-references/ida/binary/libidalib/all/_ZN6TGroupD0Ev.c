void __fastcall TGroup::~TGroup(TGroup *this)
{
  TGroup::~TGroup(this);
  operator delete(this, 0x80u);
}

