__int64 __fastcall CoinStructuredModel::fillInfo(CoinStructuredModel *this, _DWORD *a2, int *a3)
{
  const std::string *v4; // rdx
  int v5; // r13d
  __int64 result; // rax

  v4 = (const std::string *)(a3 + 10);
  v5 = *((_DWORD *)v4 - 7);
  *a2 = CoinStructuredModel::addRowBlock(this, a3[2], v4);
  result = CoinStructuredModel::addColumnBlock(this, v5, (const std::string *)(a3 + 12));
  a2[1] = result;
  return result;
}

