__int64 __fastcall CoinShallowPackedVector::setVector(
        CoinShallowPackedVector *this,
        int a2,
        const int *a3,
        const double *a4,
        bool a5)
{
  *((_DWORD *)this + 12) = a2;
  *((_QWORD *)this + 4) = a3;
  *((_QWORD *)this + 5) = a4;
  CoinPackedVectorBase::clearBase(this);
  return CoinPackedVectorBase::setTestForDuplicateIndex(this, a5);
}

