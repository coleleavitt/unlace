char **__fastcall CoinMessageHandler::message(char **this, int a2, const char *a3, char *a4, char a5, int a6)
{
  char *v8; // rbp
  char v9; // dl
  size_t v10; // rax
  bool v11; // cc
  int v12; // eax
  int v13; // eax
  char *src; // [rsp+0h] [rbp-1E8h]
  _BYTE v17[472]; // [rsp+10h] [rbp-1D8h] BYREF

  v8 = (char *)(this + 69);
  src = a4;
  if ( *(this + 194) != (char *)(this + 69) )
  {
    CoinMessageHandler::internalPrint((CoinMessageHandler *)this);
    a4 = src;
  }
  v9 = 0;
  if ( a6 >= 0 )
    v9 = a6;
  *((_DWORD *)this + 134) = a2;
  CoinOneMessage::CoinOneMessage((CoinOneMessage *)v17, a2, v9, a4);
  CoinOneMessage::operator=(this + 16);
  CoinOneMessage::~CoinOneMessage((CoinOneMessage *)v17);
  v10 = strlen(a3);
  std::string::assign((std::string *)(this + 195), a3, v10);
  v11 = *((_DWORD *)this + 393) < a2;
  v12 = a2;
  *((_BYTE *)this + 552) = 0;
  if ( !v11 )
    v12 = *((_DWORD *)this + 393);
  *(this + 194) = v8;
  *((_DWORD *)this + 393) = v12;
  if ( a6 >= 0 )
    CoinMessageHandler::calcPrintStatus((CoinMessageHandler *)this, a6, 0);
  if ( !*((_DWORD *)this + 392) )
  {
    v13 = *((_DWORD *)this + 31);
    *((_DWORD *)this + 392) = 2;
    if ( v13 )
      sprintf(*(this + 194), "%s%4.4d%c ", *(this + 195), a2, (unsigned int)a5);
    strcat(v8, src);
    *(this + 194) = &v8[strlen(v8)];
  }
  return this;
}

