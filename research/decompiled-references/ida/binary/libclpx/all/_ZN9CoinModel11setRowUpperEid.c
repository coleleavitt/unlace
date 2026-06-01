__int64 __fastcall CoinModel::setRowUpper(CoinModel *this, int a2, double a3)
{
  __int64 result; // rax

  CoinModel::fillRows(this, a2, 1, 0);
  *(double *)(*((_QWORD *)this + 17) + 8LL * a2) = a3;
  result = *((_QWORD *)this + 22);
  *(_DWORD *)(result + 4LL * a2) &= ~2u;
  return result;
}

