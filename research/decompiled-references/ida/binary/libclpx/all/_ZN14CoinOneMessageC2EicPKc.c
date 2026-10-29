// Alternative name is '_ZN14CoinOneMessageC1EicPKc'
void __fastcall CoinOneMessage::CoinOneMessage(CoinOneMessage *this, int a2, char a3, const char *a4)
{
  char v5; // al

  *(_DWORD *)this = a2;
  strcpy((char *)this + 6, a4);
  if ( a2 <= 2999 )
  {
    *((_BYTE *)this + 4) = a3;
    *((_BYTE *)this + 5) = 73;
  }
  else if ( a2 <= 5999 )
  {
    *((_BYTE *)this + 4) = a3;
    *((_BYTE *)this + 5) = 87;
  }
  else
  {
    v5 = 83;
    if ( a2 <= 8999 )
      v5 = 69;
    *((_BYTE *)this + 4) = a3;
    *((_BYTE *)this + 5) = v5;
  }
}

