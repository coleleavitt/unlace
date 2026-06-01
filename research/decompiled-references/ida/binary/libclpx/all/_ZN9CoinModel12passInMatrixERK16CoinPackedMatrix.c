void __fastcall CoinModel::passInMatrix(CoinModel *this, const CoinPackedMatrix *a2)
{
  CoinPackedMatrix *v2; // rbx

  *((_DWORD *)this + 176) = 3;
  v2 = (CoinPackedMatrix *)operator new(0x58u);
  CoinPackedMatrix::CoinPackedMatrix(v2, a2);
  *((_QWORD *)this + 38) = v2;
}

