// Alternative name is '_ZN10ClpMessageC1EN12CoinMessages8LanguageE'
void __fastcall ClpMessage::ClpMessage(ClpMessage *this, int a2)
{
  bool v2; // zf
  int *v3; // rbx
  int v4; // esi
  int *v5; // rbx
  _BYTE v6[456]; // [rsp+0h] [rbp-1C8h] BYREF

  CoinMessages::CoinMessages(this, 96);
  v2 = dword_4D6440 == 95;
  *((_DWORD *)this + 1) = a2;
  *((_DWORD *)this + 2) = 7367747;
  *((_DWORD *)this + 4) = 1;
  if ( !v2 )
  {
    v3 = &dword_4D6440;
    do
    {
      CoinOneMessage::CoinOneMessage((CoinOneMessage *)v6, v3[1], *((_BYTE *)v3 + 8), *((const char **)v3 + 2));
      CoinMessages::addMessage(this, *v3, (const CoinOneMessage *)v6);
      v3 += 6;
      CoinOneMessage::~CoinOneMessage((CoinOneMessage *)v6);
    }
    while ( *v3 != 95 );
  }
  CoinMessages::toCompact(this);
  if ( a2 == 1 )
  {
    v4 = dword_4D6400;
    v5 = &dword_4D6400;
    if ( dword_4D6400 != 95 )
    {
      do
      {
        CoinMessages::replaceMessage(this, v4, *((const char **)v5 + 2));
        v5 += 6;
        v4 = *v5;
      }
      while ( *v5 != 95 );
    }
  }
}

