// Alternative name is '_ZN21CoinPartitionedVectorC2Ev'
void __fastcall CoinPartitionedVector::CoinPartitionedVector(CoinPartitionedVector *this)
{
  CoinIndexedVector::CoinIndexedVector(this);
  *((_QWORD *)this + 12) = 0;
  *((_OWORD *)this + 2) = 0;
  *((_OWORD *)this + 3) = 0;
  *((_OWORD *)this + 4) = 0;
  *((_OWORD *)this + 5) = 0;
}

