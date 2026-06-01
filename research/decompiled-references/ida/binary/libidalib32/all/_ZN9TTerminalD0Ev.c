void __fastcall TTerminal::~TTerminal(TTerminal *this)
{
  TTerminal::~TTerminal(this);
  operator delete(this, 0x90u);
}

