// Alternative name is '_ZN7CoinSetC1Ev'
void __fastcall CoinSet::CoinSet(CoinSet *this)
{
  *((_QWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = 0;
  *(_QWORD *)this = off_4D1908;
  *((_QWORD *)this + 1) = 0x100000000LL;
}

