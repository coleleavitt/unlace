void __fastcall THelpFile::~THelpFile(THelpFile *this)
{
  THelpFile::~THelpFile(this);
  operator delete(this, 0x28u);
}

