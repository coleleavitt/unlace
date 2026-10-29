__int64 __fastcall CoinMessageHandler::setPrefix(CoinMessageHandler *this, char a2)
{
  __int64 result; // rax

  result = (unsigned __int8)-(a2 != 0);
  *((_DWORD *)this + 31) = result;
  return result;
}

