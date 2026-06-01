const char *__fastcall CoinModel::getColumnIsIntegerAsString(CoinModel *this, int a2)
{
  __int64 v2; // rdx
  const char *result; // rax

  if ( *((_DWORD *)this + 3) <= a2 )
    return "Numeric";
  v2 = *((_QWORD *)this + 30);
  if ( !v2 )
    return "Numeric";
  result = "Numeric";
  if ( (*(_BYTE *)(*((_QWORD *)this + 35) + 4LL * a2) & 8) != 0 )
    return (const char *)CoinModelHash::name((CoinModel *)((char *)this + 248), *(_DWORD *)(v2 + 4LL * a2));
  return result;
}

