void __fastcall CoinMpsIO::setInfinity(CoinMessageHandler **this, double a2)
{
  CoinMessageHandler *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  CoinMessageHandler *v7; // rax
  __int64 v8; // rax
  __int64 v9; // [rsp-8h] [rbp-18h]

  if ( a2 < 1.02 )
  {
    v2 = (CoinMessageHandler *)CoinMessageHandler::message(*(this + 28), 2, (const CoinMessages *)(this + 30));
    v7 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v2, (__int64)"infinity", v3, v4, v5, v6, v9);
    v8 = CoinMessageHandler::operator<<(v7);
    CoinMessageHandler::operator<<(v8, 0, a2);
  }
  else
  {
    *((double *)this + 26) = a2;
  }
}

