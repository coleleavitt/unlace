__int64 __fastcall CoinLpIO::checkColNames(CoinMessageHandler **this, double a2)
{
  __int64 result; // rax
  CoinMessageHandler *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rax
  __int64 v9; // [rsp+0h] [rbp-8h]

  result = CoinLpIO::getNumCols((CoinLpIO *)this);
  if ( *((_DWORD *)this + 79) != (_DWORD)result )
  {
    CoinLpIO::setDefaultColNames((CoinLpIO *)this);
    v3 = (CoinMessageHandler *)CoinMessageHandler::message(*(this + 1), 30, (const CoinMessages *)(this + 3));
    v8 = CoinMessageHandler::operator<<(
           v3,
           (__int64)"### CoinLpIO::checkColNames(): non distinct or missing column names.\n"
                    "Now using default column names.",
           v4,
           v5,
           v6,
           v7,
           v9);
    return CoinMessageHandler::operator<<(v8, 0, a2);
  }
  return result;
}

