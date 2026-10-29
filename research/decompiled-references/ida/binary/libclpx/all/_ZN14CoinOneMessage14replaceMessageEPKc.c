char *__fastcall CoinOneMessage::replaceMessage(CoinOneMessage *this, const char *a2)
{
  return strcpy((char *)this + 6, a2);
}

