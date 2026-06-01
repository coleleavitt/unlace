__int64 __fastcall CoinModel::deleteElement(CoinModel *this, int a2, int a3)
{
  __int64 result; // rax
  unsigned int v5; // [rsp+Ch] [rbp-1Ch]

  result = CoinModel::position(this, a2, a3);
  if ( (int)result >= 0 )
  {
    v5 = result;
    CoinModel::deleteThisElement(this, a2, a3, result);
    return v5;
  }
  return result;
}

