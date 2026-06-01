void __fastcall ClpDualRowSteepest::clearArrays(ClpDualRowSteepest *this)
{
  void *v2; // rdi
  void *v3; // rdi
  CoinIndexedVector *v4; // rbp
  CoinIndexedVector *v5; // rbp
  CoinIndexedVector *v6; // rbp

  if ( !*((_DWORD *)this + 7) )
  {
    v2 = *((void **)this + 4);
    if ( v2 )
      operator delete[](v2);
    v3 = *((void **)this + 8);
    *((_QWORD *)this + 4) = 0;
    if ( v3 )
      operator delete[](v3);
    v4 = *((CoinIndexedVector **)this + 5);
    *((_QWORD *)this + 8) = 0;
    if ( v4 )
    {
      CoinIndexedVector::~CoinIndexedVector(v4);
      operator delete(v4);
    }
    v5 = *((CoinIndexedVector **)this + 6);
    *((_QWORD *)this + 5) = 0;
    if ( v5 )
    {
      CoinIndexedVector::~CoinIndexedVector(v5);
      operator delete(v5);
    }
    v6 = *((CoinIndexedVector **)this + 7);
    *((_QWORD *)this + 6) = 0;
    if ( v6 )
    {
      CoinIndexedVector::~CoinIndexedVector(v6);
      operator delete(v6);
    }
    *((_QWORD *)this + 7) = 0;
  }
  *((_DWORD *)this + 5) = -1;
}

