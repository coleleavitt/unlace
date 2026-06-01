__int64 __fastcall CoinModel::setRowUpper(CoinModel *this, int a2, const char *a3)
{
  __int64 result; // rax
  double v5; // xmm0_8

  CoinModel::fillRows(this, a2, 1, 0);
  if ( a3 )
  {
    v5 = (double)(int)CoinModel::addString(this, a3);
    result = *((_QWORD *)this + 22);
    *(double *)(*((_QWORD *)this + 17) + 8LL * a2) = v5;
    *(_DWORD *)(result + 4LL * a2) |= 2u;
  }
  else
  {
    result = *((_QWORD *)this + 17);
    *(_QWORD *)(result + 8LL * a2) = 0x7FEFFFFFFFFFFFFFLL;
  }
  return result;
}

