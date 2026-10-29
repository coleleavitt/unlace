const char *__fastcall CoinModel::getRowLowerAsString(CoinModel *this, int a2)
{
  __int64 v2; // rdx
  const char *result; // rax

  if ( *((_DWORD *)this + 2) <= a2 )
    return "Numeric";
  v2 = *((_QWORD *)this + 16);
  if ( !v2 )
    return "Numeric";
  result = "Numeric";
  if ( (*(_BYTE *)(*((_QWORD *)this + 22) + 4LL * a2) & 1) != 0 )
    return (const char *)CoinModelHash::name((CoinModel *)((char *)this + 248), (int)*(double *)(v2 + 8LL * a2));
  return result;
}

