void __fastcall ClpDualRowSteepest::passInSavedWeights(ClpDualRowSteepest *this, const CoinIndexedVector *a2)
{
  void *v2; // rbx
  CoinIndexedVector *v3; // rbx

  v2 = *((void **)this + 7);
  if ( v2 )
  {
    CoinIndexedVector::~CoinIndexedVector(*((CoinIndexedVector **)this + 7));
    operator delete(v2);
  }
  v3 = (CoinIndexedVector *)operator new(0x20u);
  CoinIndexedVector::CoinIndexedVector(v3, a2);
  *((_QWORD *)this + 7) = v3;
}

