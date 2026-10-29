void __fastcall CoinMessageHandler::checkSeverity(CoinMessageHandler *this)
{
  if ( *((_BYTE *)this + 133) == 83 )
    sub_5C692((__int64)this);
}

