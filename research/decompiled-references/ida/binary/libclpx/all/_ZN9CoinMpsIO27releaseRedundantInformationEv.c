void __fastcall CoinMpsIO::releaseRedundantInformation(void **this)
{
  void *v2; // rdi
  void *v3; // rdi
  __int64 v4; // rdi

  free(*(this + 7));
  free(*(this + 8));
  free(*(this + 9));
  v2 = *(this + 23);
  *(this + 7) = nullptr;
  *(this + 8) = nullptr;
  *(this + 9) = nullptr;
  if ( v2 )
    operator delete[](v2);
  v3 = *(this + 24);
  if ( v3 )
    operator delete[](v3);
  v4 = (__int64)*(this + 10);
  *(this + 23) = nullptr;
  *(this + 24) = nullptr;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  *(this + 10) = nullptr;
}

