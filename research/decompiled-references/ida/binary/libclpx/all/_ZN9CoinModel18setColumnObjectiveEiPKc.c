__int64 __fastcall CoinModel::setColumnObjective(CoinModel *this, int a2, const char *a3)
{
  __int64 result; // rax
  double v5; // xmm0_8

  CoinModel::fillColumns(this, a2, 1, 0);
  if ( a3 )
  {
    v5 = (double)(int)CoinModel::addString(this, a3);
    result = *((_QWORD *)this + 35);
    *(double *)(*((_QWORD *)this + 23) + 8LL * a2) = v5;
    *(_DWORD *)(result + 4LL * a2) |= 4u;
  }
  else
  {
    result = *((_QWORD *)this + 23);
    *(_QWORD *)(result + 8LL * a2) = 0;
  }
  return result;
}

