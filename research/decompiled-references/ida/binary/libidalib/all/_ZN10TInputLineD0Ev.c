void __fastcall TInputLine::~TInputLine(TInputLine *this)
{
  TInputLine::~TInputLine(this);
  operator delete(this, 0x80u);
}

