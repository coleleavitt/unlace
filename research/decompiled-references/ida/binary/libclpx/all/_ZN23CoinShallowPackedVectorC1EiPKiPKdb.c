// Alternative name is '_ZN23CoinShallowPackedVectorC2EiPKiPKdb'
void __fastcall CoinShallowPackedVector::CoinShallowPackedVector(
        CoinShallowPackedVector *this,
        int a2,
        const int *a3,
        const double *a4,
        bool a5)
{
  CoinPackedVectorBase::CoinPackedVectorBase(this);
  *((_QWORD *)this + 4) = a3;
  *((_QWORD *)this + 5) = a4;
  *((_DWORD *)this + 12) = a2;
  *(_QWORD *)this = off_4D1798;
  CoinPackedVectorBase::setTestForDuplicateIndex(this, a5);
}

