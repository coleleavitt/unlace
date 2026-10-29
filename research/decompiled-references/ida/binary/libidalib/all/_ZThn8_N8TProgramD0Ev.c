void __fastcall `non-virtual thunk to'TProgram::~TProgram(TProgram *this)
{
  TProgram::~TProgram((TProgram *)((char *)this - 8));
  operator delete((char *)this - 8, 0xA0u);
}

