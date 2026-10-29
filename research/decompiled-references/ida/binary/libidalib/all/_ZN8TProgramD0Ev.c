void __fastcall TProgram::~TProgram(TProgram *this)
{
  TProgram::~TProgram(this);
  operator delete(this, 0xA0u);
}

