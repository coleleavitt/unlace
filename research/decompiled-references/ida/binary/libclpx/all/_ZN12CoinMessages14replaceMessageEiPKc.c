__int64 __fastcall CoinMessages::replaceMessage(CoinMessages *this, int a2, const char *a3)
{
  if ( *((int *)this + 5) >= 0 )
    CoinMessages::fromCompact(this);
  return CoinOneMessage::replaceMessage(*(CoinOneMessage **)(*((_QWORD *)this + 3) + 8LL * a2), a3);
}

