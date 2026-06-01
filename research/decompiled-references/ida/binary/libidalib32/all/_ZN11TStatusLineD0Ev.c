void __fastcall TStatusLine::~TStatusLine(TStatusLine *this)
{
  TStatusLine::~TStatusLine(this);
  operator delete(this, 0x58u);
}

