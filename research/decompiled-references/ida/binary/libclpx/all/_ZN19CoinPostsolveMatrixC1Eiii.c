// Alternative name is '_ZN19CoinPostsolveMatrixC2Eiii'
void __fastcall CoinPostsolveMatrix::CoinPostsolveMatrix(CoinPostsolveMatrix *this, int a2, int a3, int a4)
{
  CoinPrePostsolveMatrix::CoinPrePostsolveMatrix(this, a2, a3, a4);
  *((_DWORD *)this + 65) = a4;
  *((_DWORD *)this + 64) = 0;
  *((_QWORD *)this + 33) = 0;
  *((_QWORD *)this + 34) = 0;
  *((_QWORD *)this + 35) = 0;
}

