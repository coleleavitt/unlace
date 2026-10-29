void __fastcall CoinMpsIO::freeAll(void **this)
{
  __int64 v2; // rdi
  __int64 v3; // rdi
  void *v4; // rdi
  void *v5; // rdi
  int v6; // eax
  __int64 v7; // r12
  int v8; // ebp
  void *v9; // rdi
  void *v10; // rdi

  CoinMpsIO::releaseRedundantInformation((CoinMpsIO *)this);
  CoinMpsIO::releaseRowNames((CoinMpsIO *)this);
  CoinMpsIO::releaseColumnNames((CoinMpsIO *)this);
  v2 = (__int64)*(this + 10);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  v3 = (__int64)*(this + 11);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  v4 = *(this + 12);
  *(this + 10) = nullptr;
  *(this + 11) = nullptr;
  free(v4);
  free(*(this + 13));
  free(*(this + 14));
  free(*(this + 15));
  free(*(this + 16));
  free(*(this + 18));
  free(*(this + 21));
  v5 = *this;
  *(this + 12) = nullptr;
  *(this + 13) = nullptr;
  *(this + 14) = nullptr;
  *(this + 15) = nullptr;
  *(this + 16) = nullptr;
  *(this + 18) = nullptr;
  *(this + 21) = nullptr;
  free(v5);
  free(*(this + 1));
  free(*(this + 2));
  free(*(this + 3));
  free(*(this + 4));
  v6 = *((_DWORD *)this + 73);
  *this = nullptr;
  *(this + 1) = nullptr;
  *(this + 2) = nullptr;
  *(this + 3) = nullptr;
  *(this + 4) = nullptr;
  if ( v6 > 0 )
  {
    v7 = 0;
    v8 = 0;
    do
    {
      ++v8;
      v9 = *(void **)((char *)*(this + 37) + v7);
      v7 += 8;
      free(v9);
    }
    while ( *((_DWORD *)this + 73) > v8 );
  }
  v10 = *(this + 37);
  if ( v10 )
    operator delete[](v10);
}

