// Alternative name is '_ZN14CoinFileOutputD2Ev'
void __fastcall CoinFileOutput::~CoinFileOutput(CoinFileOutput *this)
{
  CoinFileIOBase *v1; // rdi

  v1 = (CoinFileOutput *)((char *)this + 8);
  *((_QWORD *)v1 - 1) = qword_4D16E0;
  CoinFileIOBase::~CoinFileIOBase(v1);
}

