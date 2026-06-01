void __fastcall CoinMpsIO::gutsOfDestructor(CoinMpsCardReader **this)
{
  __int64 v2; // rdi
  void *v3; // rbp

  CoinMpsIO::freeAll((CoinMpsIO *)this);
  if ( *((_BYTE *)this + 232) )
  {
    v2 = (__int64)*(this + 28);
    if ( v2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 24LL))(v2);
    *(this + 28) = nullptr;
  }
  v3 = *(this + 34);
  if ( v3 )
  {
    CoinMpsCardReader::~CoinMpsCardReader(*(this + 34));
    operator delete(v3);
  }
  *(this + 34) = nullptr;
}

