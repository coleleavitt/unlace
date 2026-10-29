__int64 __fastcall ClpModel::setDefaultMessageHandler(ClpModel *this)
{
  _DWORD *v2; // rdi
  int v3; // r12d
  CoinMessageHandler *v4; // rbp

  v2 = *((_DWORD **)this + 43);
  v3 = v2[26];
  if ( *((_BYTE *)this + 352) )
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v2 + 24LL))(v2);
  *((_BYTE *)this + 352) = 1;
  v4 = (CoinMessageHandler *)operator new(0x640u);
  CoinMessageHandler::CoinMessageHandler(v4);
  *((_QWORD *)this + 43) = v4;
  return CoinMessageHandler::setLogLevel(v4, v3);
}

