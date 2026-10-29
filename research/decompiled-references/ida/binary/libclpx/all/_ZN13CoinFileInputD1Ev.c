// Alternative name is '_ZN13CoinFileInputD2Ev'
void __fastcall CoinFileInput::~CoinFileInput(CoinFileInput *this)
{
  CoinFileIOBase *v1; // rdi

  v1 = (CoinFileInput *)((char *)this + 8);
  *((_QWORD *)v1 - 1) = qword_4D1680;
  CoinFileIOBase::~CoinFileIOBase(v1);
}

