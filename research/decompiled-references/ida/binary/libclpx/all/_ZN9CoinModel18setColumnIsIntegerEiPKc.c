__int64 __fastcall CoinModel::setColumnIsInteger(CoinModel *this, int a2, const char *a3)
{
  __int64 result; // rax
  _DWORD *v5; // r12

  CoinModel::fillColumns(this, a2, 1, 0);
  if ( a3 )
  {
    result = CoinModel::addString(this, a3);
    v5 = (_DWORD *)(*((_QWORD *)this + 35) + 4LL * a2);
    *(_DWORD *)(*((_QWORD *)this + 30) + 4LL * a2) = result;
    *v5 |= 8u;
  }
  else
  {
    result = *((_QWORD *)this + 30);
    *(_DWORD *)(result + 4LL * a2) = 0;
  }
  return result;
}

