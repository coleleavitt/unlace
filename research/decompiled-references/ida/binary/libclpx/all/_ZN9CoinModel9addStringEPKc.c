__int64 __fastcall CoinModel::addString(CoinModel *this, const char *a2)
{
  __int64 result; // rax
  unsigned int v3; // [rsp+Ch] [rbp-1Ch]

  result = CoinModelHash::hash((CoinModel *)((char *)this + 248), a2);
  if ( (int)result < 0 )
  {
    v3 = *((_DWORD *)this + 66);
    CoinModelHash::addHash((CoinModel *)((char *)this + 248), v3, a2);
    return v3;
  }
  return result;
}

