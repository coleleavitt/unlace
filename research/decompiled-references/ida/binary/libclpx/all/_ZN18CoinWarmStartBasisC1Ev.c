void __fastcall CoinWarmStartBasis::CoinWarmStartBasis(CoinWarmStartBasis *this)
{
  *((_QWORD *)this + 1) = 0;
  *((_DWORD *)this + 4) = 0;
  *((_QWORD *)this + 3) = 0;
  *((_QWORD *)this + 4) = 0;
  *(_QWORD *)this = off_4D2418;
}

