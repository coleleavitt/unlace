CoinLpIO *__fastcall CoinLpIO::operator=(const CoinMessageHandler **this, const CoinMessageHandler **a2)
{
  char v2; // al
  CoinMessageHandler *v4; // r12
  _BYTE v5[56]; // [rsp+0h] [rbp-38h] BYREF

  if ( this != a2 )
  {
    CoinLpIO::gutsOfDestructor((CoinLpIO *)this);
    if ( a2[11] || a2[13] )
      CoinLpIO::gutsOfCopy((CoinLpIO *)this, (const CoinLpIO *)a2);
    v2 = *((_BYTE *)a2 + 16);
    *((_BYTE *)this + 16) = v2;
    if ( v2 )
    {
      v4 = (CoinMessageHandler *)operator new(0x640u);
      CoinMessageHandler::CoinMessageHandler(v4, a2[1]);
      *(this + 1) = v4;
    }
    else
    {
      *(this + 1) = a2[1];
    }
    CoinMessage::CoinMessage(v5, 0);
    CoinMessages::operator=(this + 3, v5);
    CoinMessages::~CoinMessages((CoinMessages *)v5);
  }
  return (CoinLpIO *)this;
}

