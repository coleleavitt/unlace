__int64 __fastcall CoinModel::setColumnIsInteger(CoinModel *this, int a2, unsigned __int8 a3)
{
  int v3; // r12d
  __int64 result; // rax

  v3 = a3;
  CoinModel::fillColumns(this, a2, 1, 0);
  *(_DWORD *)(*((_QWORD *)this + 30) + 4LL * a2) = v3;
  result = *((_QWORD *)this + 35);
  *(_DWORD *)(result + 4LL * a2) &= ~8u;
  return result;
}

