void __fastcall CoinMpsIO::setDefaultBound(CoinMpsIO *this, int a2, double a3)
{
  __int64 v3; // rbx
  CoinMessageHandler *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  CoinMessageHandler *v9; // rax
  __int64 v10; // rax

  if ( a2 > 0 && (a3 = (double)a2, (double)a2 <= 1.797693134862316e308) )
  {
    *((_DWORD *)this + 50) = a2;
  }
  else
  {
    v4 = (CoinMessageHandler *)CoinMessageHandler::message(
                                 *((CoinMessageHandler **)this + 28),
                                 2,
                                 (CoinMpsIO *)((char *)this + 240));
    v9 = (CoinMessageHandler *)CoinMessageHandler::operator<<(v4, (__int64)"default integer bound", v5, v6, v7, v8, v3);
    v10 = CoinMessageHandler::operator<<(v9);
    CoinMessageHandler::operator<<(v10, 0, a3);
  }
}

