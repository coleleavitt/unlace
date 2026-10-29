// Alternative name is '_ZN20CoinPackedVectorBaseC2Ev'
void __fastcall CoinPackedVectorBase::CoinPackedVectorBase(CoinPackedVectorBase *this)
{
  *((_QWORD *)this + 2) = 0;
  *((_BYTE *)this + 24) = 1;
  *((_BYTE *)this + 25) = 0;
  *(_QWORD *)this = &off_4D1AE0;
  *((_QWORD *)this + 1) = 0x7FFFFFFF80000001LL;
}

