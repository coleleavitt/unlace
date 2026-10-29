__int64 __fastcall CoinBaseModel::operator=(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  CoinMessageHandler *v4; // r12

  if ( a1 != a2 )
  {
    std::string::assign((std::string *)(a1 + 32), (const std::string *)(a2 + 32));
    std::string::assign((std::string *)(a1 + 40), (const std::string *)(a2 + 40));
    std::string::assign((std::string *)(a1 + 48), (const std::string *)(a2 + 48));
    v3 = *(_QWORD *)(a1 + 56);
    *(_DWORD *)(a1 + 8) = *(_DWORD *)(a2 + 8);
    *(_DWORD *)(a1 + 12) = *(_DWORD *)(a2 + 12);
    *(_QWORD *)(a1 + 16) = *(_QWORD *)(a2 + 16);
    *(_QWORD *)(a1 + 24) = *(_QWORD *)(a2 + 24);
    if ( v3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 24LL))(v3);
    if ( *(_QWORD *)(a2 + 56) )
    {
      v4 = (CoinMessageHandler *)operator new(0x640u);
      CoinMessageHandler::CoinMessageHandler(v4, *(const CoinMessageHandler **)(a2 + 56));
      *(_QWORD *)(a1 + 56) = v4;
    }
    else
    {
      *(_QWORD *)(a1 + 56) = 0;
    }
    *(_DWORD *)(a1 + 96) = *(_DWORD *)(a2 + 96);
  }
  return a1;
}

