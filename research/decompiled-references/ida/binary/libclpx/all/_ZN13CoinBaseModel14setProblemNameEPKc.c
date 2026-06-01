__int64 __fastcall CoinBaseModel::setProblemName(CoinBaseModel *this, const char *a2)
{
  size_t v2; // rax

  if ( !a2 )
    return std::string::assign((CoinBaseModel *)((char *)this + 32), "", 0);
  v2 = strlen(a2);
  return std::string::assign((CoinBaseModel *)((char *)this + 32), a2, v2);
}

