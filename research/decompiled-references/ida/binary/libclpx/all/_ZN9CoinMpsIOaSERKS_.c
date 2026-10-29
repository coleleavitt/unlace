CoinMpsIO *__fastcall CoinMpsIO::operator=(const CoinMessageHandler **this, const CoinMessageHandler **a2)
{
  char v2; // al
  CoinMessageHandler *v4; // r12
  _BYTE v5[56]; // [rsp+0h] [rbp-38h] BYREF

  if ( this != a2 )
  {
    CoinMpsIO::gutsOfDestructor((CoinMpsIO *)this);
    if ( a2[12] || a2[14] )
      CoinMpsIO::gutsOfCopy((CoinMpsIO *)this, (const CoinMpsIO *)a2);
    v2 = *((_BYTE *)a2 + 232);
    *((_BYTE *)this + 232) = v2;
    if ( v2 )
    {
      v4 = (CoinMessageHandler *)operator new(0x640u);
      CoinMessageHandler::CoinMessageHandler(v4, a2[28]);
      *(this + 28) = v4;
    }
    else
    {
      *(this + 28) = a2[28];
    }
    CoinMessage::CoinMessage(v5, 0);
    CoinMessages::operator=(this + 30, v5);
    CoinMessages::~CoinMessages((CoinMessages *)v5);
  }
  return (CoinMpsIO *)this;
}

