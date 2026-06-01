__int64 __fastcall ClpModel::readGMPL(CoinMessageHandler **this, const char *a2, const char *a3, bool a4, double a5)
{
  FILE *v7; // rax
  FILE *v8; // rax
  char v9; // al
  CoinMessageHandler *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  __int64 v17; // [rsp+0h] [rbp-250h]
  CoinMessageHandler *v18; // [rsp+30h] [rbp-220h]
  struct rusage usage; // [rsp+60h] [rbp-1F0h] BYREF
  _BYTE v20[224]; // [rsp+F0h] [rbp-160h] BYREF
  CoinMessageHandler *v21; // [rsp+1D0h] [rbp-80h]
  __int64 v22; // [rsp+1E0h] [rbp-70h] BYREF

  v7 = fopen(a2, "r");
  if ( v7 )
  {
    fclose(v7);
    if ( !a3 )
      goto LABEL_5;
    v8 = fopen(a3, "r");
    if ( v8 )
    {
      fclose(v8);
LABEL_5:
      CoinMpsIO::CoinMpsIO((CoinMpsIO *)v20);
      CoinMpsIO::passInMessageHandler((CoinMpsIO *)v20, *(this + 43));
      CoinMessages::CoinMessages((CoinMessages *)&usage, (const CoinMessages *)(this + 56));
      CoinMessages::operator=(&v22, &usage);
      CoinMessages::~CoinMessages((CoinMessages *)&usage);
      CoinMessageHandler::prefix(v21);
      v18 = v21;
      v9 = CoinMessageHandler::prefix(*(this + 43));
      CoinMessageHandler::setPrefix(v18, v9);
      getrusage(RUSAGE_SELF, &usage);
      CoinMpsIO::readGMPL((CoinMpsIO *)v20, a2, a3, a4);
    }
    v11 = (CoinMessageHandler *)CoinMessageHandler::message(*(this + 43), 40, (const CoinMessages *)(this + 52));
    a2 = a3;
  }
  else
  {
    v11 = (CoinMessageHandler *)CoinMessageHandler::message(*(this + 43), 40, (const CoinMessages *)(this + 52));
  }
  v16 = CoinMessageHandler::operator<<(v11, (__int64)a2, v12, v13, v14, v15, v17);
  CoinMessageHandler::operator<<(v16, 0, a5);
  return 0xFFFFFFFFLL;
}

