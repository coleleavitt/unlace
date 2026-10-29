__int64 __fastcall ClpPrimalColumnSteepest::clearArrays(ClpPrimalColumnSteepest *this)
{
  void *v2; // rdi
  CoinIndexedVector *v3; // rbp
  CoinIndexedVector *v4; // rbp
  void *v5; // rdi
  void *v6; // rdi

  if ( !*((_DWORD *)this + 21) )
  {
    v2 = *((void **)this + 4);
    if ( v2 )
      operator delete[](v2);
    v3 = *((CoinIndexedVector **)this + 5);
    *((_QWORD *)this + 4) = 0;
    if ( v3 )
    {
      CoinIndexedVector::~CoinIndexedVector(v3);
      operator delete(v3);
    }
    v4 = *((CoinIndexedVector **)this + 6);
    *((_QWORD *)this + 5) = 0;
    if ( v4 )
    {
      CoinIndexedVector::~CoinIndexedVector(v4);
      operator delete(v4);
    }
    v5 = *((void **)this + 7);
    *((_QWORD *)this + 6) = 0;
    if ( v5 )
      operator delete[](v5);
    v6 = *((void **)this + 8);
    *((_QWORD *)this + 7) = 0;
    if ( v6 )
      operator delete[](v6);
    *((_QWORD *)this + 8) = 0;
  }
  *((_DWORD *)this + 18) = -1;
  *((_QWORD *)this + 3) = 0;
  *(_QWORD *)((char *)this + 92) = -1;
  *((_DWORD *)this + 25) = -1;
  return -1;
}

