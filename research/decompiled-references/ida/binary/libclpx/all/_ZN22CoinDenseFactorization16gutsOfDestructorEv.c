__int64 __fastcall CoinDenseFactorization::gutsOfDestructor(CoinDenseFactorization *this)
{
  void *v2; // rdi
  void *v3; // rdi
  void *v4; // rdi

  v2 = *((void **)this + 10);
  if ( v2 )
    operator delete[](v2);
  v3 = *((void **)this + 9);
  if ( v3 )
    operator delete[](v3);
  v4 = *((void **)this + 11);
  if ( v4 )
    operator delete[](v4);
  *((_QWORD *)this + 10) = 0;
  *((_QWORD *)this + 9) = 0;
  *((_QWORD *)this + 11) = 0;
  *(_QWORD *)((char *)this + 36) = 0;
  *((_DWORD *)this + 11) = 0;
  *((_QWORD *)this + 7) = 0xFFFFFFFFLL;
  *((_DWORD *)this + 16) = 0;
  *((_DWORD *)this + 24) = 0;
  return 0xFFFFFFFFLL;
}

