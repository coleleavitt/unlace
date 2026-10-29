__int64 __fastcall Clp_registerCallBack(ClpModel **a1, __int64 a2)
{
  ClpModel *v3; // rbp
  CMessageHandler *v4; // rdi
  void (__fastcall *v5)(CMessageHandler *); // rax
  const CoinMessageHandler *v6; // r13
  CMessageHandler *v7; // rbp

  v3 = a1[1];
  if ( v3 )
  {
    v4 = a1[1];
    v5 = *(void (__fastcall **)(CMessageHandler *))(*(_QWORD *)v3 + 24LL);
    if ( v5 == CMessageHandler::~CMessageHandler )
    {
      CMessageHandler::~CMessageHandler(v4);
      operator delete(v3);
    }
    else
    {
      v5(v4);
    }
  }
  v6 = *((const CoinMessageHandler **)*a1 + 43);
  v7 = (CMessageHandler *)operator new(0x658u);
  CMessageHandler::CMessageHandler(v7, v6);
  a1[1] = v7;
  CMessageHandler::setCallBack(v7, a2);
  CMessageHandler::setModel(a1[1], a1);
  return ClpModel::passInMessageHandler(*a1, a1[1]);
}

