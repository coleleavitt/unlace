void __fastcall CoinBaseModel::setLogLevel(CoinBaseModel *this, unsigned int a2)
{
  if ( a2 <= 2 )
    *((_DWORD *)this + 24) = a2;
}

