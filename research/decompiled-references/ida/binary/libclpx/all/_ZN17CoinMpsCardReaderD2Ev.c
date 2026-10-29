// Alternative name is '_ZN17CoinMpsCardReaderD1Ev'
void __fastcall CoinMpsCardReader::~CoinMpsCardReader(CoinMpsCardReader *this)
{
  __int64 v2; // rdi

  v2 = *((_QWORD *)this + 154);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  CoinMessages::~CoinMessages((CoinMpsCardReader *)((char *)this + 1280));
}

