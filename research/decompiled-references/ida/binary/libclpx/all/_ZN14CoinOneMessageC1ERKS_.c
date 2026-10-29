// Alternative name is '_ZN14CoinOneMessageC2ERKS_'
void __fastcall CoinOneMessage::CoinOneMessage(CoinOneMessage *this, const CoinOneMessage *a2)
{
  const char *v4; // rsi
  char *v5; // rdi

  v4 = (char *)a2 + 6;
  v5 = (char *)this + 6;
  *(_DWORD *)(v5 - 6) = *(_DWORD *)(v4 - 6);
  strcpy(v5, v4);
  *((_BYTE *)this + 5) = *((_BYTE *)a2 + 5);
  *((_BYTE *)this + 4) = *((_BYTE *)a2 + 4);
}

