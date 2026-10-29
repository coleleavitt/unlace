// Alternative name is '_ZN13CoinBaseModelC1ERKS_'
void __fastcall CoinBaseModel::CoinBaseModel(CoinBaseModel *this, const CoinBaseModel *a2)
{
  __int64 v2; // xmm0_8
  CoinMessageHandler *v3; // r13

  *(_QWORD *)this = &off_4D17D0;
  *((_DWORD *)this + 2) = *((_DWORD *)a2 + 2);
  *((_DWORD *)this + 3) = *((_DWORD *)a2 + 3);
  *((_QWORD *)this + 2) = *((_QWORD *)a2 + 2);
  v2 = *((_QWORD *)a2 + 3);
  *((_QWORD *)this + 4) = (char *)&std::string::_Rep::_S_empty_rep_storage + 24;
  *((_QWORD *)this + 5) = (char *)&std::string::_Rep::_S_empty_rep_storage + 24;
  *((_QWORD *)this + 3) = v2;
  *((_QWORD *)this + 6) = (char *)&std::string::_Rep::_S_empty_rep_storage + 24;
  CoinMessages::CoinMessages((CoinBaseModel *)((char *)this + 64), 0);
  *((_DWORD *)this + 24) = *((_DWORD *)a2 + 24);
  std::string::assign((CoinBaseModel *)((char *)this + 32), (const CoinBaseModel *)((char *)a2 + 32));
  std::string::assign((CoinBaseModel *)((char *)this + 40), (const CoinBaseModel *)((char *)a2 + 40));
  std::string::assign((CoinBaseModel *)((char *)this + 48), (const CoinBaseModel *)((char *)a2 + 48));
  if ( *((_QWORD *)a2 + 7) )
  {
    v3 = (CoinMessageHandler *)operator new(0x640u);
    CoinMessageHandler::CoinMessageHandler(v3, *((const CoinMessageHandler **)a2 + 7));
    *((_QWORD *)this + 7) = v3;
  }
  else
  {
    *((_QWORD *)this + 7) = 0;
  }
}

