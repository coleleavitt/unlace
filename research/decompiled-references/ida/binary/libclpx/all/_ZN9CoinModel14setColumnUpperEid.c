__int64 __fastcall CoinModel::setColumnUpper(CoinModel *this, int a2, double a3)
{
  __int64 result; // rax

  CoinModel::fillColumns(this, a2, 1, 0);
  *(double *)(*((_QWORD *)this + 25) + 8LL * a2) = a3;
  result = *((_QWORD *)this + 35);
  *(_DWORD *)(result + 4LL * a2) &= ~2u;
  return result;
}

