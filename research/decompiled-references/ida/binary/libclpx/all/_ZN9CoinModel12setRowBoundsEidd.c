__int64 __fastcall CoinModel::setRowBounds(CoinModel *this, int a2, double a3, double a4)
{
  __int64 result; // rax

  CoinModel::fillRows(this, a2, 1, 0);
  *(double *)(*((_QWORD *)this + 16) + 8LL * a2) = a3;
  *(double *)(*((_QWORD *)this + 17) + 8LL * a2) = a4;
  result = *((_QWORD *)this + 22);
  *(_DWORD *)(result + 4LL * a2) &= 0xFFFFFFFC;
  return result;
}

