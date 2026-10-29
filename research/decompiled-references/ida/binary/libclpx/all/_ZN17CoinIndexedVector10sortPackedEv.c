__int64 __fastcall CoinIndexedVector::sortPacked(CoinIndexedVector *this)
{
  return CoinSort_2<int,double>(*(_QWORD *)this, *(_QWORD *)this + 4LL * *((int *)this + 4), *((_QWORD *)this + 1));
}

