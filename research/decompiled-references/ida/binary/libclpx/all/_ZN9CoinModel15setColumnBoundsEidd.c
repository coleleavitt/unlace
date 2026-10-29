__int64 __fastcall CoinModel::setColumnBounds(CoinModel *this, int a2, double a3, double a4)
{
  __int64 result; // rax

  CoinModel::fillColumns(this, a2, 1, 0);
  *(double *)(*((_QWORD *)this + 24) + 8LL * a2) = a3;
  *(double *)(*((_QWORD *)this + 25) + 8LL * a2) = a4;
  result = *((_QWORD *)this + 35);
  *(_DWORD *)(result + 4LL * a2) &= 0xFFFFFFFC;
  return result;
}

