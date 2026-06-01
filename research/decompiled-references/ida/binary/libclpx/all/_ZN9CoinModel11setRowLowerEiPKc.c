__int64 __fastcall CoinModel::setRowLower(CoinModel *this, int a2, const char *a3)
{
  __int64 result; // rax
  double v5; // xmm0_8

  CoinModel::fillRows(this, a2, 1, 0);
  if ( a3 )
  {
    v5 = (double)(int)CoinModel::addString(this, a3);
    result = *((_QWORD *)this + 22);
    *(double *)(*((_QWORD *)this + 16) + 8LL * a2) = v5;
    *(_DWORD *)(result + 4LL * a2) |= 1u;
  }
  else
  {
    result = *((_QWORD *)this + 16);
    *(_QWORD *)(result + 8LL * a2) = 0xFFEFFFFFFFFFFFFFLL;
  }
  return result;
}

